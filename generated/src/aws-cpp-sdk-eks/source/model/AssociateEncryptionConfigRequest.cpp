/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AssociateEncryptionConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateEncryptionConfigRequest::AssociateEncryptionConfigRequest() : 
    m_clusterNameHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String AssociateEncryptionConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> encryptionConfigJsonList(m_encryptionConfig.size());
   for(unsigned encryptionConfigIndex = 0; encryptionConfigIndex < encryptionConfigJsonList.GetLength(); ++encryptionConfigIndex)
   {
     encryptionConfigJsonList[encryptionConfigIndex].AsObject(m_encryptionConfig[encryptionConfigIndex].Jsonize());
   }
   payload.WithArray("encryptionConfig", std::move(encryptionConfigJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




