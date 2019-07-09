/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/CreateFleetInstance.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CreateFleetInstance::CreateFleetInstance() : 
    m_launchTemplateAndOverridesHasBeenSet(false),
    m_lifecycle(InstanceLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false)
{
}

CreateFleetInstance::CreateFleetInstance(const XmlNode& xmlNode) : 
    m_launchTemplateAndOverridesHasBeenSet(false),
    m_lifecycle(InstanceLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false)
{
  *this = xmlNode;
}

CreateFleetInstance& CreateFleetInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateAndOverridesNode = resultNode.FirstChild("launchTemplateAndOverrides");
    if(!launchTemplateAndOverridesNode.IsNull())
    {
      m_launchTemplateAndOverrides = launchTemplateAndOverridesNode;
      m_launchTemplateAndOverridesHasBeenSet = true;
    }
    XmlNode lifecycleNode = resultNode.FirstChild("lifecycle");
    if(!lifecycleNode.IsNull())
    {
      m_lifecycle = InstanceLifecycleMapper::GetInstanceLifecycleForName(StringUtils::Trim(lifecycleNode.GetText().c_str()).c_str());
      m_lifecycleHasBeenSet = true;
    }
    XmlNode instanceIdsNode = resultNode.FirstChild("instanceIds");
    if(!instanceIdsNode.IsNull())
    {
      XmlNode instanceIdsMember = instanceIdsNode.FirstChild("item");
      while(!instanceIdsMember.IsNull())
      {
        m_instanceIds.push_back(instanceIdsMember.GetText());
        instanceIdsMember = instanceIdsMember.NextNode("item");
      }

      m_instanceIdsHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = PlatformValuesMapper::GetPlatformValuesForName(StringUtils::Trim(platformNode.GetText().c_str()).c_str());
      m_platformHasBeenSet = true;
    }
  }

  return *this;
}

void CreateFleetInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateAndOverridesHasBeenSet)
  {
      Aws::StringStream launchTemplateAndOverridesLocationAndMemberSs;
      launchTemplateAndOverridesLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateAndOverrides";
      m_launchTemplateAndOverrides.OutputToStream(oStream, launchTemplateAndOverridesLocationAndMemberSs.str().c_str());
  }

  if(m_lifecycleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Lifecycle=" << InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle) << "&";
  }

  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << index << locationValue << ".InstanceIds." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }

}

void CreateFleetInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateAndOverridesHasBeenSet)
  {
      Aws::String launchTemplateAndOverridesLocationAndMember(location);
      launchTemplateAndOverridesLocationAndMember += ".LaunchTemplateAndOverrides";
      m_launchTemplateAndOverrides.OutputToStream(oStream, launchTemplateAndOverridesLocationAndMember.c_str());
  }
  if(m_lifecycleHasBeenSet)
  {
      oStream << location << ".Lifecycle=" << InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle) << "&";
  }
  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << ".InstanceIds." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
