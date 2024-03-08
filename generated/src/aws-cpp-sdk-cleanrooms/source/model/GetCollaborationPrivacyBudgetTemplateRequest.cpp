/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationPrivacyBudgetTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationPrivacyBudgetTemplateRequest::GetCollaborationPrivacyBudgetTemplateRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_privacyBudgetTemplateIdentifierHasBeenSet(false)
{
}

Aws::String GetCollaborationPrivacyBudgetTemplateRequest::SerializePayload() const
{
  return {};
}




