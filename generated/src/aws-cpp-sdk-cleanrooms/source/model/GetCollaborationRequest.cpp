/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationRequest::GetCollaborationRequest() : 
    m_collaborationIdentifierHasBeenSet(false)
{
}

Aws::String GetCollaborationRequest::SerializePayload() const
{
  return {};
}




