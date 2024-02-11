/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/UpdateIngestionDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIngestionDestinationRequest::UpdateIngestionDestinationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_ingestionIdentifierHasBeenSet(false),
    m_ingestionDestinationIdentifierHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateIngestionDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




