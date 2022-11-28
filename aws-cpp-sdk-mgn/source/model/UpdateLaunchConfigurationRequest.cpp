/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest() : 
    m_bootMode(BootMode::NOT_SET),
    m_bootModeHasBeenSet(false),
    m_copyPrivateIp(false),
    m_copyPrivateIpHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_enableMapAutoTagging(false),
    m_enableMapAutoTaggingHasBeenSet(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_launchDispositionHasBeenSet(false),
    m_licensingHasBeenSet(false),
    m_mapAutoTaggingMpeIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_postLaunchActionsHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
}

Aws::String UpdateLaunchConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bootModeHasBeenSet)
  {
   payload.WithString("bootMode", BootModeMapper::GetNameForBootMode(m_bootMode));
  }

  if(m_copyPrivateIpHasBeenSet)
  {
   payload.WithBool("copyPrivateIp", m_copyPrivateIp);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("copyTags", m_copyTags);

  }

  if(m_enableMapAutoTaggingHasBeenSet)
  {
   payload.WithBool("enableMapAutoTagging", m_enableMapAutoTagging);

  }

  if(m_launchDispositionHasBeenSet)
  {
   payload.WithString("launchDisposition", LaunchDispositionMapper::GetNameForLaunchDisposition(m_launchDisposition));
  }

  if(m_licensingHasBeenSet)
  {
   payload.WithObject("licensing", m_licensing.Jsonize());

  }

  if(m_mapAutoTaggingMpeIDHasBeenSet)
  {
   payload.WithString("mapAutoTaggingMpeID", m_mapAutoTaggingMpeID);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_postLaunchActionsHasBeenSet)
  {
   payload.WithObject("postLaunchActions", m_postLaunchActions.Jsonize());

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_targetInstanceTypeRightSizingMethodHasBeenSet)
  {
   payload.WithString("targetInstanceTypeRightSizingMethod", TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  return payload.View().WriteReadable();
}




