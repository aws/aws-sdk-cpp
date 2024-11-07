/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PutMLConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMLConfigurationRequest::PutMLConfigurationRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_defaultOutputLocationHasBeenSet(false)
{
}

Aws::String PutMLConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultOutputLocationHasBeenSet)
  {
   payload.WithObject("defaultOutputLocation", m_defaultOutputLocation.Jsonize());

  }

  return payload.View().WriteReadable();
}




