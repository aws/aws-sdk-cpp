/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationConfiguredAudienceModelAssociationRequest::GetCollaborationConfiguredAudienceModelAssociationRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_configuredAudienceModelAssociationIdentifierHasBeenSet(false)
{
}

Aws::String GetCollaborationConfiguredAudienceModelAssociationRequest::SerializePayload() const
{
  return {};
}




