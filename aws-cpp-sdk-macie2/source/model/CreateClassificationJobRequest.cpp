/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CreateClassificationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClassificationJobRequest::CreateClassificationJobRequest() : 
    m_allowListIdsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_customDataIdentifierIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_initialRun(false),
    m_initialRunHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_managedDataIdentifierIdsHasBeenSet(false),
    m_managedDataIdentifierSelector(ManagedDataIdentifierSelector::NOT_SET),
    m_managedDataIdentifierSelectorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3JobDefinitionHasBeenSet(false),
    m_samplingPercentage(0),
    m_samplingPercentageHasBeenSet(false),
    m_scheduleFrequencyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateClassificationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowListIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowListIdsJsonList(m_allowListIds.size());
   for(unsigned allowListIdsIndex = 0; allowListIdsIndex < allowListIdsJsonList.GetLength(); ++allowListIdsIndex)
   {
     allowListIdsJsonList[allowListIdsIndex].AsString(m_allowListIds[allowListIdsIndex]);
   }
   payload.WithArray("allowListIds", std::move(allowListIdsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_customDataIdentifierIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDataIdentifierIdsJsonList(m_customDataIdentifierIds.size());
   for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
   {
     customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString(m_customDataIdentifierIds[customDataIdentifierIdsIndex]);
   }
   payload.WithArray("customDataIdentifierIds", std::move(customDataIdentifierIdsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_initialRunHasBeenSet)
  {
   payload.WithBool("initialRun", m_initialRun);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_managedDataIdentifierIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedDataIdentifierIdsJsonList(m_managedDataIdentifierIds.size());
   for(unsigned managedDataIdentifierIdsIndex = 0; managedDataIdentifierIdsIndex < managedDataIdentifierIdsJsonList.GetLength(); ++managedDataIdentifierIdsIndex)
   {
     managedDataIdentifierIdsJsonList[managedDataIdentifierIdsIndex].AsString(m_managedDataIdentifierIds[managedDataIdentifierIdsIndex]);
   }
   payload.WithArray("managedDataIdentifierIds", std::move(managedDataIdentifierIdsJsonList));

  }

  if(m_managedDataIdentifierSelectorHasBeenSet)
  {
   payload.WithString("managedDataIdentifierSelector", ManagedDataIdentifierSelectorMapper::GetNameForManagedDataIdentifierSelector(m_managedDataIdentifierSelector));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3JobDefinitionHasBeenSet)
  {
   payload.WithObject("s3JobDefinition", m_s3JobDefinition.Jsonize());

  }

  if(m_samplingPercentageHasBeenSet)
  {
   payload.WithInteger("samplingPercentage", m_samplingPercentage);

  }

  if(m_scheduleFrequencyHasBeenSet)
  {
   payload.WithObject("scheduleFrequency", m_scheduleFrequency.Jsonize());

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

  return payload.View().WriteReadable();
}




