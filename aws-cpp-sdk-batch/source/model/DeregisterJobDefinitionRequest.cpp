/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DeregisterJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterJobDefinitionRequest::DeregisterJobDefinitionRequest() : 
    m_jobDefinitionHasBeenSet(false)
{
}

Aws::String DeregisterJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionHasBeenSet)
  {
   payload.WithString("jobDefinition", m_jobDefinition);

  }

  return payload.View().WriteReadable();
}




