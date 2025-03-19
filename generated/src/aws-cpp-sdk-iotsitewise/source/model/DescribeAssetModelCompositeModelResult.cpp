/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetModelCompositeModelResult.h>
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

DescribeAssetModelCompositeModelResult::DescribeAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetModelCompositeModelResult& DescribeAssetModelCompositeModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");
    m_assetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelId"))
  {
    m_assetModelCompositeModelId = jsonValue.GetString("assetModelCompositeModelId");
    m_assetModelCompositeModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelExternalId"))
  {
    m_assetModelCompositeModelExternalId = jsonValue.GetString("assetModelCompositeModelExternalId");
    m_assetModelCompositeModelExternalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelPath"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelPathJsonList = jsonValue.GetArray("assetModelCompositeModelPath");
    for(unsigned assetModelCompositeModelPathIndex = 0; assetModelCompositeModelPathIndex < assetModelCompositeModelPathJsonList.GetLength(); ++assetModelCompositeModelPathIndex)
    {
      m_assetModelCompositeModelPath.push_back(assetModelCompositeModelPathJsonList[assetModelCompositeModelPathIndex].AsObject());
    }
    m_assetModelCompositeModelPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelName"))
  {
    m_assetModelCompositeModelName = jsonValue.GetString("assetModelCompositeModelName");
    m_assetModelCompositeModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelDescription"))
  {
    m_assetModelCompositeModelDescription = jsonValue.GetString("assetModelCompositeModelDescription");
    m_assetModelCompositeModelDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelType"))
  {
    m_assetModelCompositeModelType = jsonValue.GetString("assetModelCompositeModelType");
    m_assetModelCompositeModelTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelProperties"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelPropertiesJsonList = jsonValue.GetArray("assetModelCompositeModelProperties");
    for(unsigned assetModelCompositeModelPropertiesIndex = 0; assetModelCompositeModelPropertiesIndex < assetModelCompositeModelPropertiesJsonList.GetLength(); ++assetModelCompositeModelPropertiesIndex)
    {
      m_assetModelCompositeModelProperties.push_back(assetModelCompositeModelPropertiesJsonList[assetModelCompositeModelPropertiesIndex].AsObject());
    }
    m_assetModelCompositeModelPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compositionDetails"))
  {
    m_compositionDetails = jsonValue.GetObject("compositionDetails");
    m_compositionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelCompositeModelSummaries"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelSummariesJsonList = jsonValue.GetArray("assetModelCompositeModelSummaries");
    for(unsigned assetModelCompositeModelSummariesIndex = 0; assetModelCompositeModelSummariesIndex < assetModelCompositeModelSummariesJsonList.GetLength(); ++assetModelCompositeModelSummariesIndex)
    {
      m_assetModelCompositeModelSummaries.push_back(assetModelCompositeModelSummariesJsonList[assetModelCompositeModelSummariesIndex].AsObject());
    }
    m_assetModelCompositeModelSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionDefinitions"))
  {
    Aws::Utils::Array<JsonView> actionDefinitionsJsonList = jsonValue.GetArray("actionDefinitions");
    for(unsigned actionDefinitionsIndex = 0; actionDefinitionsIndex < actionDefinitionsJsonList.GetLength(); ++actionDefinitionsIndex)
    {
      m_actionDefinitions.push_back(actionDefinitionsJsonList[actionDefinitionsIndex].AsObject());
    }
    m_actionDefinitionsHasBeenSet = true;
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
