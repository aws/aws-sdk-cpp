/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_targetArnHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_iotJobConfigurationHasBeenSet(false),
    m_deploymentPoliciesHasBeenSet(false),
    m_parentTargetArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_deploymentNameHasBeenSet)
  {
   payload.WithString("deploymentName", m_deploymentName);

  }

  if(m_componentsHasBeenSet)
  {
   JsonValue componentsJsonMap;
   for(auto& componentsItem : m_components)
   {
     componentsJsonMap.WithObject(componentsItem.first, componentsItem.second.Jsonize());
   }
   payload.WithObject("components", std::move(componentsJsonMap));

  }

  if(m_iotJobConfigurationHasBeenSet)
  {
   payload.WithObject("iotJobConfiguration", m_iotJobConfiguration.Jsonize());

  }

  if(m_deploymentPoliciesHasBeenSet)
  {
   payload.WithObject("deploymentPolicies", m_deploymentPolicies.Jsonize());

  }

  if(m_parentTargetArnHasBeenSet)
  {
   payload.WithString("parentTargetArn", m_parentTargetArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




