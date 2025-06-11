/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdatePodIdentityAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePodIdentityAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_disableSessionTagsHasBeenSet)
  {
   payload.WithBool("disableSessionTags", m_disableSessionTags);

  }

  if(m_targetRoleArnHasBeenSet)
  {
   payload.WithString("targetRoleArn", m_targetRoleArn);

  }

  return payload.View().WriteReadable();
}




