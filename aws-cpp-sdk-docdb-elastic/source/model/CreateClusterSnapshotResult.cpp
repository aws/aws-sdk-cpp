/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/CreateClusterSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateClusterSnapshotResult::CreateClusterSnapshotResult()
{
}

CreateClusterSnapshotResult::CreateClusterSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateClusterSnapshotResult& CreateClusterSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("snapshot"))
  {
    m_snapshot = jsonValue.GetObject("snapshot");

  }



  return *this;
}
