/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ProjectSummary.h>
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

ProjectSummary::ProjectSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectSummary& ProjectSummary::operator =(JsonView jsonValue)
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

JsonValue ProjectSummary::Jsonize() const
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
