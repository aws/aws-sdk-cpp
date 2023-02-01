/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateNodegroupVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNodegroupVersionRequest::UpdateNodegroupVersionRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String UpdateNodegroupVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("releaseVersion", m_releaseVersion);

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("launchTemplate", m_launchTemplate.Jsonize());

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




