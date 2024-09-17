/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationIdNamespaceAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationIdNamespaceAssociationRequest::GetCollaborationIdNamespaceAssociationRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_idNamespaceAssociationIdentifierHasBeenSet(false)
{
}

Aws::String GetCollaborationIdNamespaceAssociationRequest::SerializePayload() const
{
  return {};
}




