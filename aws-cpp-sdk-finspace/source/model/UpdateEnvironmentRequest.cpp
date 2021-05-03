/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnvironmentRequest::UpdateEnvironmentRequest() : 
    m_environmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_federationMode(FederationMode::NOT_SET),
    m_federationModeHasBeenSet(false),
    m_federationParametersHasBeenSet(false)
{
}

Aws::String UpdateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_federationModeHasBeenSet)
  {
   payload.WithString("federationMode", FederationModeMapper::GetNameForFederationMode(m_federationMode));
  }

  if(m_federationParametersHasBeenSet)
  {
   payload.WithObject("federationParameters", m_federationParameters.Jsonize());

  }

  return payload.View().WriteReadable();
}




