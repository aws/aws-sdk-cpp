/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreatePersistentContactAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePersistentContactAssociationRequest::CreatePersistentContactAssociationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_rehydrationType(RehydrationType::NOT_SET),
    m_rehydrationTypeHasBeenSet(false),
    m_sourceContactIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreatePersistentContactAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rehydrationTypeHasBeenSet)
  {
   payload.WithString("RehydrationType", RehydrationTypeMapper::GetNameForRehydrationType(m_rehydrationType));
  }

  if(m_sourceContactIdHasBeenSet)
  {
   payload.WithString("SourceContactId", m_sourceContactId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




