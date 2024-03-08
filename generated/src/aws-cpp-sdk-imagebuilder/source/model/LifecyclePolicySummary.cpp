/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicySummary.h>
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

LifecyclePolicySummary::LifecyclePolicySummary() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(LifecyclePolicyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_resourceType(LifecyclePolicyResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_dateLastRunHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LifecyclePolicySummary::LifecyclePolicySummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(LifecyclePolicyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_resourceType(LifecyclePolicyResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_dateLastRunHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicySummary& LifecyclePolicySummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = LifecyclePolicyStatusMapper::GetLifecyclePolicyStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = LifecyclePolicyResourceTypeMapper::GetLifecyclePolicyResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateUpdated"))
  {
    m_dateUpdated = jsonValue.GetDouble("dateUpdated");

    m_dateUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateLastRun"))
  {
    m_dateLastRun = jsonValue.GetDouble("dateLastRun");

    m_dateLastRunHasBeenSet = true;
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

JsonValue LifecyclePolicySummary::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LifecyclePolicyStatusMapper::GetNameForLifecyclePolicyStatus(m_status));
  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", LifecyclePolicyResourceTypeMapper::GetNameForLifecyclePolicyResourceType(m_resourceType));
  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("dateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateUpdatedHasBeenSet)
  {
   payload.WithDouble("dateUpdated", m_dateUpdated.SecondsWithMSPrecision());
  }

  if(m_dateLastRunHasBeenSet)
  {
   payload.WithDouble("dateLastRun", m_dateLastRun.SecondsWithMSPrecision());
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
