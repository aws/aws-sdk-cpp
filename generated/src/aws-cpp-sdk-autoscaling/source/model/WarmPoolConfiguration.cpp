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

WarmPoolConfiguration::WarmPoolConfiguration(const XmlNode& xmlNode)
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
      m_poolState = WarmPoolStateMapper::GetWarmPoolStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(poolStateNode.GetText()).c_str()));
      m_poolStateHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = WarmPoolStatusMapper::GetWarmPoolStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
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
      oStream << location << index << locationValue << ".PoolState=" << StringUtils::URLEncode(WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState)) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(WarmPoolStatusMapper::GetNameForWarmPoolStatus(m_status)) << "&";
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
      oStream << location << ".PoolState=" << StringUtils::URLEncode(WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState)) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(WarmPoolStatusMapper::GetNameForWarmPoolStatus(m_status)) << "&";
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
