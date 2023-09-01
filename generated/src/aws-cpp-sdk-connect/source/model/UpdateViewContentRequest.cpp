/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateViewContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateViewContentRequest::UpdateViewContentRequest() : 
    m_instanceIdHasBeenSet(false),
    m_viewIdHasBeenSet(false),
    m_status(ViewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Aws::String UpdateViewContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ViewStatusMapper::GetNameForViewStatus(m_status));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  return payload.View().WriteReadable();
}




