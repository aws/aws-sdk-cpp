/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetResult.h>
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

DescribeAssetResult::DescribeAssetResult()
{
}

DescribeAssetResult::DescribeAssetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetResult& DescribeAssetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

  }

  if(jsonValue.ValueExists("assetArn"))
  {
    m_assetArn = jsonValue.GetString("assetArn");

  }

  if(jsonValue.ValueExists("assetName"))
  {
    m_assetName = jsonValue.GetString("assetName");

  }

  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

  }

  if(jsonValue.ValueExists("assetProperties"))
  {
    Aws::Utils::Array<JsonView> assetPropertiesJsonList = jsonValue.GetArray("assetProperties");
    for(unsigned assetPropertiesIndex = 0; assetPropertiesIndex < assetPropertiesJsonList.GetLength(); ++assetPropertiesIndex)
    {
      m_assetProperties.push_back(assetPropertiesJsonList[assetPropertiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetHierarchies"))
  {
    Aws::Utils::Array<JsonView> assetHierarchiesJsonList = jsonValue.GetArray("assetHierarchies");
    for(unsigned assetHierarchiesIndex = 0; assetHierarchiesIndex < assetHierarchiesJsonList.GetLength(); ++assetHierarchiesIndex)
    {
      m_assetHierarchies.push_back(assetHierarchiesJsonList[assetHierarchiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetCompositeModels"))
  {
    Aws::Utils::Array<JsonView> assetCompositeModelsJsonList = jsonValue.GetArray("assetCompositeModels");
    for(unsigned assetCompositeModelsIndex = 0; assetCompositeModelsIndex < assetCompositeModelsJsonList.GetLength(); ++assetCompositeModelsIndex)
    {
      m_assetCompositeModels.push_back(assetCompositeModelsJsonList[assetCompositeModelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetCreationDate"))
  {
    m_assetCreationDate = jsonValue.GetDouble("assetCreationDate");

  }

  if(jsonValue.ValueExists("assetLastUpdateDate"))
  {
    m_assetLastUpdateDate = jsonValue.GetDouble("assetLastUpdateDate");

  }

  if(jsonValue.ValueExists("assetStatus"))
  {
    m_assetStatus = jsonValue.GetObject("assetStatus");

  }

  if(jsonValue.ValueExists("assetDescription"))
  {
    m_assetDescription = jsonValue.GetString("assetDescription");

  }

  if(jsonValue.ValueExists("assetCompositeModelSummaries"))
  {
    Aws::Utils::Array<JsonView> assetCompositeModelSummariesJsonList = jsonValue.GetArray("assetCompositeModelSummaries");
    for(unsigned assetCompositeModelSummariesIndex = 0; assetCompositeModelSummariesIndex < assetCompositeModelSummariesJsonList.GetLength(); ++assetCompositeModelSummariesIndex)
    {
      m_assetCompositeModelSummaries.push_back(assetCompositeModelSummariesJsonList[assetCompositeModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetExternalId"))
  {
    m_assetExternalId = jsonValue.GetString("assetExternalId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
