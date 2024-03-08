/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateConfiguredAudienceModelAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfiguredAudienceModelAssociationRequest::UpdateConfiguredAudienceModelAssociationRequest() : 
    m_configuredAudienceModelAssociationIdentifierHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateConfiguredAudienceModelAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




