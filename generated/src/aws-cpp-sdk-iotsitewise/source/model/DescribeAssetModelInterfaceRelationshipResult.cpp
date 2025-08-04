/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetModelInterfaceRelationshipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssetModelInterfaceRelationshipResult::DescribeAssetModelInterfaceRelationshipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetModelInterfaceRelationshipResult& DescribeAssetModelInterfaceRelationshipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");
    m_assetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceAssetModelId"))
  {
    m_interfaceAssetModelId = jsonValue.GetString("interfaceAssetModelId");
    m_interfaceAssetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propertyMappings"))
  {
    Aws::Utils::Array<JsonView> propertyMappingsJsonList = jsonValue.GetArray("propertyMappings");
    for(unsigned propertyMappingsIndex = 0; propertyMappingsIndex < propertyMappingsJsonList.GetLength(); ++propertyMappingsIndex)
    {
      m_propertyMappings.push_back(propertyMappingsJsonList[propertyMappingsIndex].AsObject());
    }
    m_propertyMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hierarchyMappings"))
  {
    Aws::Utils::Array<JsonView> hierarchyMappingsJsonList = jsonValue.GetArray("hierarchyMappings");
    for(unsigned hierarchyMappingsIndex = 0; hierarchyMappingsIndex < hierarchyMappingsJsonList.GetLength(); ++hierarchyMappingsIndex)
    {
      m_hierarchyMappings.push_back(hierarchyMappingsJsonList[hierarchyMappingsIndex].AsObject());
    }
    m_hierarchyMappingsHasBeenSet = true;
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
