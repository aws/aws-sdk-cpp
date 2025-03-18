/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxClusterCodeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKxClusterCodeConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("code", m_code.Jsonize());

  }

  if(m_initializationScriptHasBeenSet)
  {
   payload.WithString("initializationScript", m_initializationScript);

  }

  if(m_commandLineArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandLineArgumentsJsonList(m_commandLineArguments.size());
   for(unsigned commandLineArgumentsIndex = 0; commandLineArgumentsIndex < commandLineArgumentsJsonList.GetLength(); ++commandLineArgumentsIndex)
   {
     commandLineArgumentsJsonList[commandLineArgumentsIndex].AsObject(m_commandLineArguments[commandLineArgumentsIndex].Jsonize());
   }
   payload.WithArray("commandLineArguments", std::move(commandLineArgumentsJsonList));

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




