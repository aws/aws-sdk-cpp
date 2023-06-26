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

GetKeyspaceResult::GetKeyspaceResult() : 
    m_replicationStrategy(Rs::NOT_SET)
{
}

GetKeyspaceResult::GetKeyspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_replicationStrategy(Rs::NOT_SET)
{
  *this = result;
}

GetKeyspaceResult& GetKeyspaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");

  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

  }

  if(jsonValue.ValueExists("replicationStrategy"))
  {
    m_replicationStrategy = RsMapper::GetRsForName(jsonValue.GetString("replicationStrategy"));

  }

  if(jsonValue.ValueExists("replicationRegions"))
  {
    Aws::Utils::Array<JsonView> replicationRegionsJsonList = jsonValue.GetArray("replicationRegions");
    for(unsigned replicationRegionsIndex = 0; replicationRegionsIndex < replicationRegionsJsonList.GetLength(); ++replicationRegionsIndex)
    {
      m_replicationRegions.push_back(replicationRegionsJsonList[replicationRegionsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
