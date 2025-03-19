/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/UpdateProvisionedModelThroughputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProvisionedModelThroughputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_desiredProvisionedModelNameHasBeenSet)
  {
   payload.WithString("desiredProvisionedModelName", m_desiredProvisionedModelName);

  }

  if(m_desiredModelIdHasBeenSet)
  {
   payload.WithString("desiredModelId", m_desiredModelId);

  }

  return payload.View().WriteReadable();
}




