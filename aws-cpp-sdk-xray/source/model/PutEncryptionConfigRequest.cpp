/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/PutEncryptionConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEncryptionConfigRequest::PutEncryptionConfigRequest() : 
    m_keyIdHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String PutEncryptionConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload.View().WriteReadable();
}




