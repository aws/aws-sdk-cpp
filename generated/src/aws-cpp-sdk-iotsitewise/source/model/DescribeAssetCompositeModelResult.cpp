/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetCompositeModelResult.h>
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

DescribeAssetCompositeModelResult::DescribeAssetCompositeModelResult()
{
}

DescribeAssetCompositeModelResult::DescribeAssetCompositeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetCompositeModelResult& DescribeAssetCompositeModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

  }

  if(jsonValue.ValueExists("assetCompositeModelId"))
  {
    m_assetCompositeModelId = jsonValue.GetString("assetCompositeModelId");

  }

  if(jsonValue.ValueExists("assetCompositeModelExternalId"))
  {
    m_assetCompositeModelExternalId = jsonValue.GetString("assetCompositeModelExternalId");

  }

  if(jsonValue.ValueExists("assetCompositeModelPath"))
  {
    Aws::Utils::Array<JsonView> assetCompositeModelPathJsonList = jsonValue.GetArray("assetCompositeModelPath");
    for(unsigned assetCompositeModelPathIndex = 0; assetCompositeModelPathIndex < assetCompositeModelPathJsonList.GetLength(); ++assetCompositeModelPathIndex)
    {
      m_assetCompositeModelPath.push_back(assetCompositeModelPathJsonList[assetCompositeModelPathIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetCompositeModelName"))
  {
    m_assetCompositeModelName = jsonValue.GetString("assetCompositeModelName");

  }

  if(jsonValue.ValueExists("assetCompositeModelDescription"))
  {
    m_assetCompositeModelDescription = jsonValue.GetString("assetCompositeModelDescription");

  }

  if(jsonValue.ValueExists("assetCompositeModelType"))
  {
    m_assetCompositeModelType = jsonValue.GetString("assetCompositeModelType");

  }

  if(jsonValue.ValueExists("assetCompositeModelProperties"))
  {
    Aws::Utils::Array<JsonView> assetCompositeModelPropertiesJsonList = jsonValue.GetArray("assetCompositeModelProperties");
    for(unsigned assetCompositeModelPropertiesIndex = 0; assetCompositeModelPropertiesIndex < assetCompositeModelPropertiesJsonList.GetLength(); ++assetCompositeModelPropertiesIndex)
    {
      m_assetCompositeModelProperties.push_back(assetCompositeModelPropertiesJsonList[assetCompositeModelPropertiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetCompositeModelSummaries"))
  {
    Aws::Utils::Array<JsonView> assetCompositeModelSummariesJsonList = jsonValue.GetArray("assetCompositeModelSummaries");
    for(unsigned assetCompositeModelSummariesIndex = 0; assetCompositeModelSummariesIndex < assetCompositeModelSummariesJsonList.GetLength(); ++assetCompositeModelSummariesIndex)
    {
      m_assetCompositeModelSummaries.push_back(assetCompositeModelSummariesJsonList[assetCompositeModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("actionDefinitions"))
  {
    Aws::Utils::Array<JsonView> actionDefinitionsJsonList = jsonValue.GetArray("actionDefinitions");
    for(unsigned actionDefinitionsIndex = 0; actionDefinitionsIndex < actionDefinitionsJsonList.GetLength(); ++actionDefinitionsIndex)
    {
      m_actionDefinitions.push_back(actionDefinitionsJsonList[actionDefinitionsIndex].AsObject());
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
