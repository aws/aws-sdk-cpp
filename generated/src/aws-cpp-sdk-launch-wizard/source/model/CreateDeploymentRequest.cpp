/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentPatternNameHasBeenSet)
  {
   payload.WithString("deploymentPatternName", m_deploymentPatternName);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("dryRun", m_dryRun);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_specificationsHasBeenSet)
  {
   JsonValue specificationsJsonMap;
   for(auto& specificationsItem : m_specifications)
   {
     specificationsJsonMap.WithString(specificationsItem.first, specificationsItem.second);
   }
   payload.WithObject("specifications", std::move(specificationsJsonMap));

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

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  return payload.View().WriteReadable();
}




