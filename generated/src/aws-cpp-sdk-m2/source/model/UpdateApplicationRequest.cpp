/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationRequest::UpdateApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_currentApplicationVersion(0),
    m_currentApplicationVersionHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentApplicationVersionHasBeenSet)
  {
   payload.WithInteger("currentApplicationVersion", m_currentApplicationVersion);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




