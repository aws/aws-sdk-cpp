/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Project.h>
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

Project::Project() : 
    m_activeExperimentCount(0),
    m_activeExperimentCountHasBeenSet(false),
    m_activeLaunchCount(0),
    m_activeLaunchCountHasBeenSet(false),
    m_appConfigResourceHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dataDeliveryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_experimentCount(0),
    m_experimentCountHasBeenSet(false),
    m_featureCount(0),
    m_featureCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_launchCount(0),
    m_launchCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ProjectStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Project::Project(JsonView jsonValue) : 
    m_activeExperimentCount(0),
    m_activeExperimentCountHasBeenSet(false),
    m_activeLaunchCount(0),
    m_activeLaunchCountHasBeenSet(false),
    m_appConfigResourceHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dataDeliveryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_experimentCount(0),
    m_experimentCountHasBeenSet(false),
    m_featureCount(0),
    m_featureCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_launchCount(0),
    m_launchCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ProjectStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Project& Project::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeExperimentCount"))
  {
    m_activeExperimentCount = jsonValue.GetInt64("activeExperimentCount");

    m_activeExperimentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeLaunchCount"))
  {
    m_activeLaunchCount = jsonValue.GetInt64("activeLaunchCount");

    m_activeLaunchCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appConfigResource"))
  {
    m_appConfigResource = jsonValue.GetObject("appConfigResource");

    m_appConfigResourceHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("dataDelivery"))
  {
    m_dataDelivery = jsonValue.GetObject("dataDelivery");

    m_dataDeliveryHasBeenSet = true;
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

  if(jsonValue.ValueExists("featureCount"))
  {
    m_featureCount = jsonValue.GetInt64("featureCount");

    m_featureCountHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

JsonValue Project::Jsonize() const
{
  JsonValue payload;

  if(m_activeExperimentCountHasBeenSet)
  {
   payload.WithInt64("activeExperimentCount", m_activeExperimentCount);

  }

  if(m_activeLaunchCountHasBeenSet)
  {
   payload.WithInt64("activeLaunchCount", m_activeLaunchCount);

  }

  if(m_appConfigResourceHasBeenSet)
  {
   payload.WithObject("appConfigResource", m_appConfigResource.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_dataDeliveryHasBeenSet)
  {
   payload.WithObject("dataDelivery", m_dataDelivery.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_experimentCountHasBeenSet)
  {
   payload.WithInt64("experimentCount", m_experimentCount);

  }

  if(m_featureCountHasBeenSet)
  {
   payload.WithInt64("featureCount", m_featureCount);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ProjectStatusMapper::GetNameForProjectStatus(m_status));
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
