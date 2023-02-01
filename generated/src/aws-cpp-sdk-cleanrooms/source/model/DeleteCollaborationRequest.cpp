/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DeleteCollaborationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCollaborationRequest::DeleteCollaborationRequest() : 
    m_collaborationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteCollaborationRequest::SerializePayload() const
{
  return {};
}




