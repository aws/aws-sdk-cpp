/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/AssumeRoleForPodIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKSAuth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssumeRoleForPodIdentityRequest::AssumeRoleForPodIdentityRequest() : 
    m_clusterNameHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String AssumeRoleForPodIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload.View().WriteReadable();
}




