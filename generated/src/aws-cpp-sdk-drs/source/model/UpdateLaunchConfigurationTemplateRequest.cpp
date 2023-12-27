﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchConfigurationTemplateRequest::UpdateLaunchConfigurationTemplateRequest() : 
    m_copyPrivateIp(false),
    m_copyPrivateIpHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_exportBucketArnHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_launchDispositionHasBeenSet(false),
    m_launchIntoSourceInstance(false),
    m_launchIntoSourceInstanceHasBeenSet(false),
    m_licensingHasBeenSet(false),
    m_postLaunchEnabled(false),
    m_postLaunchEnabledHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
}

Aws::String UpdateLaunchConfigurationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_copyPrivateIpHasBeenSet)
  {
   payload.WithBool("copyPrivateIp", m_copyPrivateIp);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("copyTags", m_copyTags);

  }

  if(m_exportBucketArnHasBeenSet)
  {
   payload.WithString("exportBucketArn", m_exportBucketArn);

  }

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

  }

  if(m_launchDispositionHasBeenSet)
  {
   payload.WithString("launchDisposition", LaunchDispositionMapper::GetNameForLaunchDisposition(m_launchDisposition));
  }

  if(m_launchIntoSourceInstanceHasBeenSet)
  {
   payload.WithBool("launchIntoSourceInstance", m_launchIntoSourceInstance);

  }

  if(m_licensingHasBeenSet)
  {
   payload.WithObject("licensing", m_licensing.Jsonize());

  }

  if(m_postLaunchEnabledHasBeenSet)
  {
   payload.WithBool("postLaunchEnabled", m_postLaunchEnabled);

  }

  if(m_targetInstanceTypeRightSizingMethodHasBeenSet)
  {
   payload.WithString("targetInstanceTypeRightSizingMethod", TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  return payload.View().WriteReadable();
}




