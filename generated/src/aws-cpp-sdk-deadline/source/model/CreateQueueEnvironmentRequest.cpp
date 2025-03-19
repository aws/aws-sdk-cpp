/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateQueueEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQueueEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", EnvironmentTemplateTypeMapper::GetNameForEnvironmentTemplateType(m_templateType));
  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQueueEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




