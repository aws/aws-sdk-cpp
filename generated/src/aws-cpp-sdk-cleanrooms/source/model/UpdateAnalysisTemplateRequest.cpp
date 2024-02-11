/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateAnalysisTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAnalysisTemplateRequest::UpdateAnalysisTemplateRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_analysisTemplateIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateAnalysisTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




