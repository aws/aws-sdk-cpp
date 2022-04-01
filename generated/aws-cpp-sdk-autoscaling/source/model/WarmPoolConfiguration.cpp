/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/WarmPoolConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

WarmPoolConfiguration::WarmPoolConfiguration() : 
    m_maxGroupPreparedCapacity(0),
    m_maxGroupPreparedCapacityHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_poolState(WarmPoolState::NOT_SET),
    m_poolStateHasBeenSet(false),
    m_status(WarmPoolStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_instanceReusePolicyHasBeenSet(false)
{
}

WarmPoolConfiguration::WarmPoolConfiguration(const XmlNode& xmlNode) : 
    m_maxGroupPreparedCapacity(0),
    m_maxGroupPreparedCapacityHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_poolState(WarmPoolState::NOT_SET),
    m_poolStateHasBeenSet(false),
    m_status(WarmPoolStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_instanceReusePolicyHasBeenSet(false)
{
  *this = xmlNode;
}

WarmPoolConfiguration& WarmPoolConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxGroupPreparedCapacityNode = resultNode.FirstChild("MaxGroupPreparedCapacity");
    if(!maxGroupPreparedCapacityNode.IsNull())
    {
      m_maxGroupPreparedCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxGroupPreparedCapacityNode.GetText()).c_str()).c_str());
      m_maxGroupPreparedCapacityHasBeenSet = true;
    }
    XmlNode minSizeNode = resultNode.FirstChild("MinSize");
    if(!minSizeNode.IsNull())
    {
      m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minSizeNode.GetText()).c_str()).c_str());
      m_minSizeHasBeenSet = true;
    }
    XmlNode poolStateNode = resultNode.FirstChild("PoolState");
    if(!poolStateNode.IsNull())
    {
      m_poolState = WarmPoolStateMapper::GetWarmPoolStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(poolStateNode.GetText()).c_str()).c_str());
      m_poolStateHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = WarmPoolStatusMapper::GetWarmPoolStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode instanceReusePolicyNode = resultNode.FirstChild("InstanceReusePolicy");
    if(!instanceReusePolicyNode.IsNull())
    {
      m_instanceReusePolicy = instanceReusePolicyNode;
      m_instanceReusePolicyHasBeenSet = true;
    }
  }

  return *this;
}

void WarmPoolConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maxGroupPreparedCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxGroupPreparedCapacity=" << m_maxGroupPreparedCapacity << "&";
  }

  if(m_minSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinSize=" << m_minSize << "&";
  }

  if(m_poolStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolState=" << WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << WarmPoolStatusMapper::GetNameForWarmPoolStatus(m_status) << "&";
  }

  if(m_instanceReusePolicyHasBeenSet)
  {
      Aws::StringStream instanceReusePolicyLocationAndMemberSs;
      instanceReusePolicyLocationAndMemberSs << location << index << locationValue << ".InstanceReusePolicy";
      m_instanceReusePolicy.OutputToStream(oStream, instanceReusePolicyLocationAndMemberSs.str().c_str());
  }

}

void WarmPoolConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maxGroupPreparedCapacityHasBeenSet)
  {
      oStream << location << ".MaxGroupPreparedCapacity=" << m_maxGroupPreparedCapacity << "&";
  }
  if(m_minSizeHasBeenSet)
  {
      oStream << location << ".MinSize=" << m_minSize << "&";
  }
  if(m_poolStateHasBeenSet)
  {
      oStream << location << ".PoolState=" << WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << WarmPoolStatusMapper::GetNameForWarmPoolStatus(m_status) << "&";
  }
  if(m_instanceReusePolicyHasBeenSet)
  {
      Aws::String instanceReusePolicyLocationAndMember(location);
      instanceReusePolicyLocationAndMember += ".InstanceReusePolicy";
      m_instanceReusePolicy.OutputToStream(oStream, instanceReusePolicyLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
