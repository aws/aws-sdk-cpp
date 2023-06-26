/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/UpdateAccountConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountConfigurationRequest::UpdateAccountConfigurationRequest() : 
    m_encryptionConfigHasBeenSet(false)
{
}

Aws::String UpdateAccountConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("encryptionConfig", m_encryptionConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




