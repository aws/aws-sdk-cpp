/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotsitewise/model/DescribeAssetModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssetModelResult::DescribeAssetModelResult()
{
}

DescribeAssetModelResult::DescribeAssetModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("assetModelArn"))
  {
    m_assetModelArn = jsonValue.GetString("assetModelArn");

  }

  if(jsonValue.ValueExists("assetModelName"))
  {
    m_assetModelName = jsonValue.GetString("assetModelName");

  }

  if(jsonValue.ValueExists("assetModelDescription"))
  {
    m_assetModelDescription = jsonValue.GetString("assetModelDescription");

  }

  if(jsonValue.ValueExists("assetModelProperties"))
  {
    Array<JsonView> assetModelPropertiesJsonList = jsonValue.GetArray("assetModelProperties");
    for(unsigned assetModelPropertiesIndex = 0; assetModelPropertiesIndex < assetModelPropertiesJsonList.GetLength(); ++assetModelPropertiesIndex)
    {
      m_assetModelProperties.push_back(assetModelPropertiesJsonList[assetModelPropertiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelHierarchies"))
  {
    Array<JsonView> assetModelHierarchiesJsonList = jsonValue.GetArray("assetModelHierarchies");
    for(unsigned assetModelHierarchiesIndex = 0; assetModelHierarchiesIndex < assetModelHierarchiesJsonList.GetLength(); ++assetModelHierarchiesIndex)
    {
      m_assetModelHierarchies.push_back(assetModelHierarchiesJsonList[assetModelHierarchiesIndex].AsObject());
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



  return *this;
}
