/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SourceLocation.h>
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

SourceLocation::SourceLocation() : 
    m_accessConfigurationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_defaultSegmentDeliveryConfigurationHasBeenSet(false),
    m_httpConfigurationHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SourceLocation::SourceLocation(JsonView jsonValue) : 
    m_accessConfigurationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_defaultSegmentDeliveryConfigurationHasBeenSet(false),
    m_httpConfigurationHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceLocation& SourceLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessConfiguration"))
  {
    m_accessConfiguration = jsonValue.GetObject("AccessConfiguration");

    m_accessConfigurationHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("DefaultSegmentDeliveryConfiguration"))
  {
    m_defaultSegmentDeliveryConfiguration = jsonValue.GetObject("DefaultSegmentDeliveryConfiguration");

    m_defaultSegmentDeliveryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpConfiguration"))
  {
    m_httpConfiguration = jsonValue.GetObject("HttpConfiguration");

    m_httpConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
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

JsonValue SourceLocation::Jsonize() const
{
  JsonValue payload;

  if(m_accessConfigurationHasBeenSet)
  {
   payload.WithObject("AccessConfiguration", m_accessConfiguration.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_defaultSegmentDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultSegmentDeliveryConfiguration", m_defaultSegmentDeliveryConfiguration.Jsonize());

  }

  if(m_httpConfigurationHasBeenSet)
  {
   payload.WithObject("HttpConfiguration", m_httpConfiguration.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
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
