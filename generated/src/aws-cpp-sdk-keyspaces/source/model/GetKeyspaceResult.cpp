/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/GetKeyspaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKeyspaceResult::GetKeyspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKeyspaceResult& GetKeyspaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");
    m_keyspaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationStrategy"))
  {
    m_replicationStrategy = RsMapper::GetRsForName(jsonValue.GetString("replicationStrategy"));
    m_replicationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationRegions"))
  {
    Aws::Utils::Array<JsonView> replicationRegionsJsonList = jsonValue.GetArray("replicationRegions");
    for(unsigned replicationRegionsIndex = 0; replicationRegionsIndex < replicationRegionsJsonList.GetLength(); ++replicationRegionsIndex)
    {
      m_replicationRegions.push_back(replicationRegionsJsonList[replicationRegionsIndex].AsString());
    }
    m_replicationRegionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationGroupStatuses"))
  {
    Aws::Utils::Array<JsonView> replicationGroupStatusesJsonList = jsonValue.GetArray("replicationGroupStatuses");
    for(unsigned replicationGroupStatusesIndex = 0; replicationGroupStatusesIndex < replicationGroupStatusesJsonList.GetLength(); ++replicationGroupStatusesIndex)
    {
      m_replicationGroupStatuses.push_back(replicationGroupStatusesJsonList[replicationGroupStatusesIndex].AsObject());
    }
    m_replicationGroupStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
