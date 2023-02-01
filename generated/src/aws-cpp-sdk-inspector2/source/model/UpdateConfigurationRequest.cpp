/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigurationRequest::UpdateConfigurationRequest() : 
    m_ecrConfigurationHasBeenSet(false)
{
}

Aws::String UpdateConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ecrConfigurationHasBeenSet)
  {
   payload.WithObject("ecrConfiguration", m_ecrConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




