/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutDefaultEncryptionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDefaultEncryptionConfigurationRequest::PutDefaultEncryptionConfigurationRequest() : 
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String PutDefaultEncryptionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}




