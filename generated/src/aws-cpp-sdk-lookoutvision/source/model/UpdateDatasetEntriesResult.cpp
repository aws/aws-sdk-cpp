/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/UpdateDatasetEntriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDatasetEntriesResult::UpdateDatasetEntriesResult() : 
    m_status(DatasetStatus::NOT_SET)
{
}

UpdateDatasetEntriesResult::UpdateDatasetEntriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DatasetStatus::NOT_SET)
{
  *this = result;
}

UpdateDatasetEntriesResult& UpdateDatasetEntriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
