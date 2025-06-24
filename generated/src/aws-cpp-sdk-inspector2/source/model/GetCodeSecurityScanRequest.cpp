/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GetCodeSecurityScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCodeSecurityScanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_scanIdHasBeenSet)
  {
   payload.WithString("scanId", m_scanId);

  }

  return payload.View().WriteReadable();
}




