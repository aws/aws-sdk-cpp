/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateEncryptionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEncryptionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_kmsAccessRoleArnHasBeenSet)
  {
   payload.WithString("kmsAccessRoleArn", m_kmsAccessRoleArn);

  }

  return payload.View().WriteReadable();
}




