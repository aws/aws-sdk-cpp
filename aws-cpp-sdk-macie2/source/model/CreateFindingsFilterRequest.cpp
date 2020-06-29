/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CreateFindingsFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFindingsFilterRequest::CreateFindingsFilterRequest() : 
    m_action(FindingsFilterAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_findingCriteriaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_position(0),
    m_positionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFindingsFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", FindingsFilterActionMapper::GetNameForFindingsFilterAction(m_action));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_findingCriteriaHasBeenSet)
  {
   payload.WithObject("findingCriteria", m_findingCriteria.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithInteger("position", m_position);

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




