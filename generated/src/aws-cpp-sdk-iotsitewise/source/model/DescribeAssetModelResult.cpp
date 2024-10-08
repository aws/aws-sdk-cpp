﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetModelResult.h>
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

DescribeAssetModelResult::DescribeAssetModelResult() : 
    m_assetModelType(AssetModelType::NOT_SET)
{
}

DescribeAssetModelResult::DescribeAssetModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeAssetModelResult()
{
  *this = result;
}

DescribeAssetModelResult& DescribeAssetModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

  }

  if(jsonValue.ValueExists("assetModelExternalId"))
  {
    m_assetModelExternalId = jsonValue.GetString("assetModelExternalId");

  }

  if(jsonValue.ValueExists("assetModelArn"))
  {
    m_assetModelArn = jsonValue.GetString("assetModelArn");

  }

  if(jsonValue.ValueExists("assetModelName"))
  {
    m_assetModelName = jsonValue.GetString("assetModelName");

  }

  if(jsonValue.ValueExists("assetModelType"))
  {
    m_assetModelType = AssetModelTypeMapper::GetAssetModelTypeForName(jsonValue.GetString("assetModelType"));

  }

  if(jsonValue.ValueExists("assetModelDescription"))
  {
    m_assetModelDescription = jsonValue.GetString("assetModelDescription");

  }

  if(jsonValue.ValueExists("assetModelProperties"))
  {
    Aws::Utils::Array<JsonView> assetModelPropertiesJsonList = jsonValue.GetArray("assetModelProperties");
    for(unsigned assetModelPropertiesIndex = 0; assetModelPropertiesIndex < assetModelPropertiesJsonList.GetLength(); ++assetModelPropertiesIndex)
    {
      m_assetModelProperties.push_back(assetModelPropertiesJsonList[assetModelPropertiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelHierarchies"))
  {
    Aws::Utils::Array<JsonView> assetModelHierarchiesJsonList = jsonValue.GetArray("assetModelHierarchies");
    for(unsigned assetModelHierarchiesIndex = 0; assetModelHierarchiesIndex < assetModelHierarchiesJsonList.GetLength(); ++assetModelHierarchiesIndex)
    {
      m_assetModelHierarchies.push_back(assetModelHierarchiesJsonList[assetModelHierarchiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelCompositeModels"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelsJsonList = jsonValue.GetArray("assetModelCompositeModels");
    for(unsigned assetModelCompositeModelsIndex = 0; assetModelCompositeModelsIndex < assetModelCompositeModelsJsonList.GetLength(); ++assetModelCompositeModelsIndex)
    {
      m_assetModelCompositeModels.push_back(assetModelCompositeModelsJsonList[assetModelCompositeModelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelCompositeModelSummaries"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelSummariesJsonList = jsonValue.GetArray("assetModelCompositeModelSummaries");
    for(unsigned assetModelCompositeModelSummariesIndex = 0; assetModelCompositeModelSummariesIndex < assetModelCompositeModelSummariesJsonList.GetLength(); ++assetModelCompositeModelSummariesIndex)
    {
      m_assetModelCompositeModelSummaries.push_back(assetModelCompositeModelSummariesJsonList[assetModelCompositeModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelCreationDate"))
  {
    m_assetModelCreationDate = jsonValue.GetDouble("assetModelCreationDate");

  }

  if(jsonValue.ValueExists("assetModelLastUpdateDate"))
  {
    m_assetModelLastUpdateDate = jsonValue.GetDouble("assetModelLastUpdateDate");

  }

  if(jsonValue.ValueExists("assetModelStatus"))
  {
    m_assetModelStatus = jsonValue.GetObject("assetModelStatus");

  }

  if(jsonValue.ValueExists("assetModelVersion"))
  {
    m_assetModelVersion = jsonValue.GetString("assetModelVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
