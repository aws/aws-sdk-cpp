/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/DistributionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

DistributionConfiguration::DistributionConfiguration() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_distributionsHasBeenSet(false),
    m_timeoutMinutes(0),
    m_timeoutMinutesHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DistributionConfiguration::DistributionConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_distributionsHasBeenSet(false),
    m_timeoutMinutes(0),
    m_timeoutMinutesHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DistributionConfiguration& DistributionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributions"))
  {
    Aws::Utils::Array<JsonView> distributionsJsonList = jsonValue.GetArray("distributions");
    for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
    {
      m_distributions.push_back(distributionsJsonList[distributionsIndex].AsObject());
    }
    m_distributionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");

    m_timeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateUpdated"))
  {
    m_dateUpdated = jsonValue.GetString("dateUpdated");

    m_dateUpdatedHasBeenSet = true;
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

JsonValue DistributionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_distributionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> distributionsJsonList(m_distributions.size());
   for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
   {
     distributionsJsonList[distributionsIndex].AsObject(m_distributions[distributionsIndex].Jsonize());
   }
   payload.WithArray("distributions", std::move(distributionsJsonList));

  }

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_dateUpdatedHasBeenSet)
  {
   payload.WithString("dateUpdated", m_dateUpdated);

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
} // namespace imagebuilder
} // namespace Aws
