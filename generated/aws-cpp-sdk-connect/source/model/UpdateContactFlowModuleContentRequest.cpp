/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateContactFlowModuleContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactFlowModuleContentRequest::UpdateContactFlowModuleContentRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactFlowModuleIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Aws::String UpdateContactFlowModuleContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload.View().WriteReadable();
}




