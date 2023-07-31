/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationAnalysisTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationAnalysisTemplateRequest::GetCollaborationAnalysisTemplateRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_analysisTemplateArnHasBeenSet(false)
{
}

Aws::String GetCollaborationAnalysisTemplateRequest::SerializePayload() const
{
  return {};
}




