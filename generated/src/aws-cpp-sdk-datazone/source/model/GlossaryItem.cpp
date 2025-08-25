/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlossaryItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GlossaryItem::GlossaryItem(JsonView jsonValue)
{
  *this = jsonValue;
}

GlossaryItem& GlossaryItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalAttributes"))
  {
    m_additionalAttributes = jsonValue.GetObject("additionalAttributes");
    m_additionalAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GlossaryStatusMapper::GetGlossaryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageRestrictions"))
  {
    Aws::Utils::Array<JsonView> usageRestrictionsJsonList = jsonValue.GetArray("usageRestrictions");
    for(unsigned usageRestrictionsIndex = 0; usageRestrictionsIndex < usageRestrictionsJsonList.GetLength(); ++usageRestrictionsIndex)
    {
      m_usageRestrictions.push_back(GlossaryUsageRestrictionMapper::GetGlossaryUsageRestrictionForName(usageRestrictionsJsonList[usageRestrictionsIndex].AsString()));
    }
    m_usageRestrictionsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlossaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_additionalAttributesHasBeenSet)
  {
   payload.WithObject("additionalAttributes", m_additionalAttributes.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdHasBeenSet)
  {
   payload.WithString("owningProjectId", m_owningProjectId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GlossaryStatusMapper::GetNameForGlossaryStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_usageRestrictionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageRestrictionsJsonList(m_usageRestrictions.size());
   for(unsigned usageRestrictionsIndex = 0; usageRestrictionsIndex < usageRestrictionsJsonList.GetLength(); ++usageRestrictionsIndex)
   {
     usageRestrictionsJsonList[usageRestrictionsIndex].AsString(GlossaryUsageRestrictionMapper::GetNameForGlossaryUsageRestriction(m_usageRestrictions[usageRestrictionsIndex]));
   }
   payload.WithArray("usageRestrictions", std::move(usageRestrictionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
