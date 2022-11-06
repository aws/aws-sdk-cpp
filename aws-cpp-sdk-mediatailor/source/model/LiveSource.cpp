/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LiveSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

LiveSource::LiveSource() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_httpPackageConfigurationsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_liveSourceNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LiveSource::LiveSource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_httpPackageConfigurationsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_liveSourceNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

LiveSource& LiveSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpPackageConfigurations"))
  {
    Aws::Utils::Array<JsonView> httpPackageConfigurationsJsonList = jsonValue.GetArray("HttpPackageConfigurations");
    for(unsigned httpPackageConfigurationsIndex = 0; httpPackageConfigurationsIndex < httpPackageConfigurationsJsonList.GetLength(); ++httpPackageConfigurationsIndex)
    {
      m_httpPackageConfigurations.push_back(httpPackageConfigurationsJsonList[httpPackageConfigurationsIndex].AsObject());
    }
    m_httpPackageConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LiveSourceName"))
  {
    m_liveSourceName = jsonValue.GetString("LiveSourceName");

    m_liveSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

    m_sourceLocationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveSource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_httpPackageConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> httpPackageConfigurationsJsonList(m_httpPackageConfigurations.size());
   for(unsigned httpPackageConfigurationsIndex = 0; httpPackageConfigurationsIndex < httpPackageConfigurationsJsonList.GetLength(); ++httpPackageConfigurationsIndex)
   {
     httpPackageConfigurationsJsonList[httpPackageConfigurationsIndex].AsObject(m_httpPackageConfigurations[httpPackageConfigurationsIndex].Jsonize());
   }
   payload.WithArray("HttpPackageConfigurations", std::move(httpPackageConfigurationsJsonList));

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_liveSourceNameHasBeenSet)
  {
   payload.WithString("LiveSourceName", m_liveSourceName);

  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
