/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RemoveEntityOwnerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveEntityOwnerRequest::RemoveEntityOwnerRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_entityType(DataZoneEntityType::NOT_SET),
    m_entityTypeHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

Aws::String RemoveEntityOwnerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithObject("owner", m_owner.Jsonize());

  }

  return payload.View().WriteReadable();
}




