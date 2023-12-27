/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchConfigurationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchConfigurationTemplate::LaunchConfigurationTemplate() : 
    m_arnHasBeenSet(false),
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
    m_tagsHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
}

LaunchConfigurationTemplate::LaunchConfigurationTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
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
    m_tagsHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchConfigurationTemplate& LaunchConfigurationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("copyPrivateIp"))
  {
    m_copyPrivateIp = jsonValue.GetBool("copyPrivateIp");

    m_copyPrivateIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("copyTags"))
  {
    m_copyTags = jsonValue.GetBool("copyTags");

    m_copyTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportBucketArn"))
  {
    m_exportBucketArn = jsonValue.GetString("exportBucketArn");

    m_exportBucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfigurationTemplateID"))
  {
    m_launchConfigurationTemplateID = jsonValue.GetString("launchConfigurationTemplateID");

    m_launchConfigurationTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchDisposition"))
  {
    m_launchDisposition = LaunchDispositionMapper::GetLaunchDispositionForName(jsonValue.GetString("launchDisposition"));

    m_launchDispositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchIntoSourceInstance"))
  {
    m_launchIntoSourceInstance = jsonValue.GetBool("launchIntoSourceInstance");

    m_launchIntoSourceInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licensing"))
  {
    m_licensing = jsonValue.GetObject("licensing");

    m_licensingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postLaunchEnabled"))
  {
    m_postLaunchEnabled = jsonValue.GetBool("postLaunchEnabled");

    m_postLaunchEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetInstanceTypeRightSizingMethod"))
  {
    m_targetInstanceTypeRightSizingMethod = TargetInstanceTypeRightSizingMethodMapper::GetTargetInstanceTypeRightSizingMethodForName(jsonValue.GetString("targetInstanceTypeRightSizingMethod"));

    m_targetInstanceTypeRightSizingMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchConfigurationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_targetInstanceTypeRightSizingMethodHasBeenSet)
  {
   payload.WithString("targetInstanceTypeRightSizingMethod", TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
