/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardRequest::UpdateDashboardRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceEntityHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_dashboardPublishOptionsHasBeenSet(false),
    m_themeArnHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

Aws::String UpdateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sourceEntityHasBeenSet)
  {
   payload.WithObject("SourceEntity", m_sourceEntity.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_dashboardPublishOptionsHasBeenSet)
  {
   payload.WithObject("DashboardPublishOptions", m_dashboardPublishOptions.Jsonize());

  }

  if(m_themeArnHasBeenSet)
  {
   payload.WithString("ThemeArn", m_themeArn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  return payload.View().WriteReadable();
}




