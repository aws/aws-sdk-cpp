/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutModelInvocationLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutModelInvocationLoggingConfigurationRequest::PutModelInvocationLoggingConfigurationRequest() : 
    m_loggingConfigHasBeenSet(false)
{
}

Aws::String PutModelInvocationLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingConfigHasBeenSet)
  {
   payload.WithObject("loggingConfig", m_loggingConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




