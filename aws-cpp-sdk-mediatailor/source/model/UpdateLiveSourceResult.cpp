/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateLiveSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLiveSourceResult::UpdateLiveSourceResult()
{
}

UpdateLiveSourceResult::UpdateLiveSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateLiveSourceResult& UpdateLiveSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("HttpPackageConfigurations"))
  {
    Aws::Utils::Array<JsonView> httpPackageConfigurationsJsonList = jsonValue.GetArray("HttpPackageConfigurations");
    for(unsigned httpPackageConfigurationsIndex = 0; httpPackageConfigurationsIndex < httpPackageConfigurationsJsonList.GetLength(); ++httpPackageConfigurationsIndex)
    {
      m_httpPackageConfigurations.push_back(httpPackageConfigurationsJsonList[httpPackageConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LiveSourceName"))
  {
    m_liveSourceName = jsonValue.GetString("LiveSourceName");

  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
