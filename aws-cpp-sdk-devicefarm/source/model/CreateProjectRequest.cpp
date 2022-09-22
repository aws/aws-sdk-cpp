/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CreateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectRequest::CreateProjectRequest() : 
    m_nameHasBeenSet(false),
    m_defaultJobTimeoutMinutes(0),
    m_defaultJobTimeoutMinutesHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

Aws::String CreateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_defaultJobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("defaultJobTimeoutMinutes", m_defaultJobTimeoutMinutes);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateProject"));
  return headers;

}




