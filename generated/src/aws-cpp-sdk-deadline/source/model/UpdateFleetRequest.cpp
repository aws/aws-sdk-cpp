/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_minWorkerCountHasBeenSet)
  {
   payload.WithInteger("minWorkerCount", m_minWorkerCount);

  }

  if(m_maxWorkerCountHasBeenSet)
  {
   payload.WithInteger("maxWorkerCount", m_maxWorkerCount);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_hostConfigurationHasBeenSet)
  {
   payload.WithObject("hostConfiguration", m_hostConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetRequest::GetRequestSpecificHeaders() const
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




