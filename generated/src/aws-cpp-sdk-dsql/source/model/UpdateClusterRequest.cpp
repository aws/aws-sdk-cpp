/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  if(m_kmsEncryptionKeyHasBeenSet)
  {
   payload.WithString("kmsEncryptionKey", m_kmsEncryptionKey);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_multiRegionPropertiesHasBeenSet)
  {
   payload.WithObject("multiRegionProperties", m_multiRegionProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




