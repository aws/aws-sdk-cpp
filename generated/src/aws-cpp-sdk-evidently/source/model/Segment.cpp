/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Segment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

Segment::Segment() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_experimentCount(0),
    m_experimentCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_launchCount(0),
    m_launchCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Segment::Segment(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_experimentCount(0),
    m_experimentCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_launchCount(0),
    m_launchCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("experimentCount"))
  {
    m_experimentCount = jsonValue.GetInt64("experimentCount");

    m_experimentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchCount"))
  {
    m_launchCount = jsonValue.GetInt64("launchCount");

    m_launchCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
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

JsonValue Segment::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_experimentCountHasBeenSet)
  {
   payload.WithInt64("experimentCount", m_experimentCount);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_launchCountHasBeenSet)
  {
   payload.WithInt64("launchCount", m_launchCount);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

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
} // namespace CloudWatchEvidently
} // namespace Aws
