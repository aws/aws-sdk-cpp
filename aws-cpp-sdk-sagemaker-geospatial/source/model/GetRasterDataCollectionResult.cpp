/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetRasterDataCollectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRasterDataCollectionResult::GetRasterDataCollectionResult() : 
    m_type(DataCollectionType::NOT_SET)
{
}

GetRasterDataCollectionResult::GetRasterDataCollectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(DataCollectionType::NOT_SET)
{
  *this = result;
}

GetRasterDataCollectionResult& GetRasterDataCollectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DescriptionPageUrl"))
  {
    m_descriptionPageUrl = jsonValue.GetString("DescriptionPageUrl");

  }

  if(jsonValue.ValueExists("ImageSourceBands"))
  {
    Aws::Utils::Array<JsonView> imageSourceBandsJsonList = jsonValue.GetArray("ImageSourceBands");
    for(unsigned imageSourceBandsIndex = 0; imageSourceBandsIndex < imageSourceBandsJsonList.GetLength(); ++imageSourceBandsIndex)
    {
      m_imageSourceBands.push_back(imageSourceBandsJsonList[imageSourceBandsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("SupportedFilters"))
  {
    Aws::Utils::Array<JsonView> supportedFiltersJsonList = jsonValue.GetArray("SupportedFilters");
    for(unsigned supportedFiltersIndex = 0; supportedFiltersIndex < supportedFiltersJsonList.GetLength(); ++supportedFiltersIndex)
    {
      m_supportedFilters.push_back(supportedFiltersJsonList[supportedFiltersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataCollectionTypeMapper::GetDataCollectionTypeForName(jsonValue.GetString("Type"));

  }



  return *this;
}
