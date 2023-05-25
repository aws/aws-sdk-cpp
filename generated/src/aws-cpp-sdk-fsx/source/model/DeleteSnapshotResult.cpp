/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteSnapshotResult::DeleteSnapshotResult() : 
    m_lifecycle(SnapshotLifecycle::NOT_SET)
{
}

DeleteSnapshotResult::DeleteSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(SnapshotLifecycle::NOT_SET)
{
  *this = result;
}

DeleteSnapshotResult& DeleteSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = SnapshotLifecycleMapper::GetSnapshotLifecycleForName(jsonValue.GetString("Lifecycle"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
