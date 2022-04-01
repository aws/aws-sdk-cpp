/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DescribeIdentityProviderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeIdentityProviderConfigurationRequest::DescribeIdentityProviderConfigurationRequest() : 
    m_fleetArnHasBeenSet(false)
{
}

Aws::String DescribeIdentityProviderConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  return payload.View().WriteReadable();
}




