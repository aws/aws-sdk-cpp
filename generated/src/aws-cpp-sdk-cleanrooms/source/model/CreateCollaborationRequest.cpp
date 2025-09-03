/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateCollaborationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCollaborationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_membersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsObject(m_members[membersIndex].Jsonize());
   }
   payload.WithArray("members", std::move(membersJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creatorMemberAbilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> creatorMemberAbilitiesJsonList(m_creatorMemberAbilities.size());
   for(unsigned creatorMemberAbilitiesIndex = 0; creatorMemberAbilitiesIndex < creatorMemberAbilitiesJsonList.GetLength(); ++creatorMemberAbilitiesIndex)
   {
     creatorMemberAbilitiesJsonList[creatorMemberAbilitiesIndex].AsString(MemberAbilityMapper::GetNameForMemberAbility(m_creatorMemberAbilities[creatorMemberAbilitiesIndex]));
   }
   payload.WithArray("creatorMemberAbilities", std::move(creatorMemberAbilitiesJsonList));

  }

  if(m_creatorMLMemberAbilitiesHasBeenSet)
  {
   payload.WithObject("creatorMLMemberAbilities", m_creatorMLMemberAbilities.Jsonize());

  }

  if(m_creatorDisplayNameHasBeenSet)
  {
   payload.WithString("creatorDisplayName", m_creatorDisplayName);

  }

  if(m_dataEncryptionMetadataHasBeenSet)
  {
   payload.WithObject("dataEncryptionMetadata", m_dataEncryptionMetadata.Jsonize());

  }

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", CollaborationQueryLogStatusMapper::GetNameForCollaborationQueryLogStatus(m_queryLogStatus));
  }

  if(m_jobLogStatusHasBeenSet)
  {
   payload.WithString("jobLogStatus", CollaborationJobLogStatusMapper::GetNameForCollaborationJobLogStatus(m_jobLogStatus));
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

  if(m_creatorPaymentConfigurationHasBeenSet)
  {
   payload.WithObject("creatorPaymentConfiguration", m_creatorPaymentConfiguration.Jsonize());

  }

  if(m_analyticsEngineHasBeenSet)
  {
   payload.WithString("analyticsEngine", AnalyticsEngineMapper::GetNameForAnalyticsEngine(m_analyticsEngine));
  }

  if(m_autoApprovedChangeRequestTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoApprovedChangeRequestTypesJsonList(m_autoApprovedChangeRequestTypes.size());
   for(unsigned autoApprovedChangeRequestTypesIndex = 0; autoApprovedChangeRequestTypesIndex < autoApprovedChangeRequestTypesJsonList.GetLength(); ++autoApprovedChangeRequestTypesIndex)
   {
     autoApprovedChangeRequestTypesJsonList[autoApprovedChangeRequestTypesIndex].AsString(AutoApprovedChangeTypeMapper::GetNameForAutoApprovedChangeType(m_autoApprovedChangeRequestTypes[autoApprovedChangeRequestTypesIndex]));
   }
   payload.WithArray("autoApprovedChangeRequestTypes", std::move(autoApprovedChangeRequestTypesJsonList));

  }

  return payload.View().WriteReadable();
}




