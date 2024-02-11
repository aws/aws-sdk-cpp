/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/CreateDataSetImportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataSetImportTaskRequest::CreateDataSetImportTaskRequest() : 
    m_applicationIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_importConfigHasBeenSet(false)
{
}

Aws::String CreateDataSetImportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_importConfigHasBeenSet)
  {
   payload.WithObject("importConfig", m_importConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




