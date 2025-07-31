/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResetEncryptionKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ResetEncryptionKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", ScanTypeMapper::GetNameForScanType(m_scanType));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}




