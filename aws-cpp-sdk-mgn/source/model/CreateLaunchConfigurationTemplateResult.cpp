/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/CreateLaunchConfigurationTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLaunchConfigurationTemplateResult::CreateLaunchConfigurationTemplateResult() : 
    m_associatePublicIpAddress(false),
    m_bootMode(BootMode::NOT_SET),
    m_copyPrivateIp(false),
    m_copyTags(false),
    m_enableMapAutoTagging(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_smallVolumeMaxSize(0),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET)
{
}

CreateLaunchConfigurationTemplateResult::CreateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_associatePublicIpAddress(false),
    m_bootMode(BootMode::NOT_SET),
    m_copyPrivateIp(false),
    m_copyTags(false),
    m_enableMapAutoTagging(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_smallVolumeMaxSize(0),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET)
{
  *this = result;
}

CreateLaunchConfigurationTemplateResult& CreateLaunchConfigurationTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("associatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("associatePublicIpAddress");

  }

  if(jsonValue.ValueExists("bootMode"))
  {
    m_bootMode = BootModeMapper::GetBootModeForName(jsonValue.GetString("bootMode"));

  }

  if(jsonValue.ValueExists("copyPrivateIp"))
  {
    m_copyPrivateIp = jsonValue.GetBool("copyPrivateIp");

  }

  if(jsonValue.ValueExists("copyTags"))
  {
    m_copyTags = jsonValue.GetBool("copyTags");

  }

  if(jsonValue.ValueExists("ec2LaunchTemplateID"))
  {
    m_ec2LaunchTemplateID = jsonValue.GetString("ec2LaunchTemplateID");

  }

  if(jsonValue.ValueExists("enableMapAutoTagging"))
  {
    m_enableMapAutoTagging = jsonValue.GetBool("enableMapAutoTagging");

  }

  if(jsonValue.ValueExists("largeVolumeConf"))
  {
    m_largeVolumeConf = jsonValue.GetObject("largeVolumeConf");

  }

  if(jsonValue.ValueExists("launchConfigurationTemplateID"))
  {
    m_launchConfigurationTemplateID = jsonValue.GetString("launchConfigurationTemplateID");

  }

  if(jsonValue.ValueExists("launchDisposition"))
  {
    m_launchDisposition = LaunchDispositionMapper::GetLaunchDispositionForName(jsonValue.GetString("launchDisposition"));

  }

  if(jsonValue.ValueExists("licensing"))
  {
    m_licensing = jsonValue.GetObject("licensing");

  }

  if(jsonValue.ValueExists("mapAutoTaggingMpeID"))
  {
    m_mapAutoTaggingMpeID = jsonValue.GetString("mapAutoTaggingMpeID");

  }

  if(jsonValue.ValueExists("postLaunchActions"))
  {
    m_postLaunchActions = jsonValue.GetObject("postLaunchActions");

  }

  if(jsonValue.ValueExists("smallVolumeConf"))
  {
    m_smallVolumeConf = jsonValue.GetObject("smallVolumeConf");

  }

  if(jsonValue.ValueExists("smallVolumeMaxSize"))
  {
    m_smallVolumeMaxSize = jsonValue.GetInt64("smallVolumeMaxSize");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("targetInstanceTypeRightSizingMethod"))
  {
    m_targetInstanceTypeRightSizingMethod = TargetInstanceTypeRightSizingMethodMapper::GetTargetInstanceTypeRightSizingMethodForName(jsonValue.GetString("targetInstanceTypeRightSizingMethod"));

  }



  return *this;
}
