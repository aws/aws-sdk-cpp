/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/CreateDataSetExportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataSetExportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_exportConfigHasBeenSet)
  {
   payload.WithObject("exportConfig", m_exportConfig.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}




