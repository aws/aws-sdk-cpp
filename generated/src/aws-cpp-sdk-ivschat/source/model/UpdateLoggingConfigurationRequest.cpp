﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/UpdateLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLoggingConfigurationRequest::UpdateLoggingConfigurationRequest() : 
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




