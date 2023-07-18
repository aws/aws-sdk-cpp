/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeIdentityProviderConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeIdentityProviderConfigRequest::DescribeIdentityProviderConfigRequest() : 
    m_clusterNameHasBeenSet(false),
    m_identityProviderConfigHasBeenSet(false)
{
}

Aws::String DescribeIdentityProviderConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityProviderConfigHasBeenSet)
  {
   payload.WithObject("identityProviderConfig", m_identityProviderConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




