/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateListingChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateListingChangeSetRequest::CreateListingChangeSetRequest() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_entityRevisionHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
}

Aws::String CreateListingChangeSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_entityIdentifierHasBeenSet)
  {
   payload.WithString("entityIdentifier", m_entityIdentifier);

  }

  if(m_entityRevisionHasBeenSet)
  {
   payload.WithString("entityRevision", m_entityRevision);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  return payload.View().WriteReadable();
}




