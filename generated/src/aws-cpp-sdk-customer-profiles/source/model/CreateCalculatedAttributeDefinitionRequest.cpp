/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateCalculatedAttributeDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCalculatedAttributeDefinitionRequest::CreateCalculatedAttributeDefinitionRequest() : 
    m_domainNameHasBeenSet(false),
    m_calculatedAttributeNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_attributeDetailsHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCalculatedAttributeDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_attributeDetailsHasBeenSet)
  {
   payload.WithObject("AttributeDetails", m_attributeDetails.Jsonize());

  }

  if(m_conditionsHasBeenSet)
  {
   payload.WithObject("Conditions", m_conditions.Jsonize());

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", StatisticMapper::GetNameForStatistic(m_statistic));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




