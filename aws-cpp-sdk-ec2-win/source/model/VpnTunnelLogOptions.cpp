/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnTunnelLogOptions.h>
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

VpnTunnelLogOptions::VpnTunnelLogOptions() : 
    m_cloudWatchLogOptionsHasBeenSet(false)
{
}

VpnTunnelLogOptions::VpnTunnelLogOptions(const XmlNode& xmlNode) : 
    m_cloudWatchLogOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

VpnTunnelLogOptions& VpnTunnelLogOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cloudWatchLogOptionsNode = resultNode.FirstChild("cloudWatchLogOptions");
    if(!cloudWatchLogOptionsNode.IsNull())
    {
      m_cloudWatchLogOptions = cloudWatchLogOptionsNode;
      m_cloudWatchLogOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void VpnTunnelLogOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cloudWatchLogOptionsHasBeenSet)
  {
      Aws::StringStream cloudWatchLogOptionsLocationAndMemberSs;
      cloudWatchLogOptionsLocationAndMemberSs << location << index << locationValue << ".CloudWatchLogOptions";
      m_cloudWatchLogOptions.OutputToStream(oStream, cloudWatchLogOptionsLocationAndMemberSs.str().c_str());
  }

}

void VpnTunnelLogOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cloudWatchLogOptionsHasBeenSet)
  {
      Aws::String cloudWatchLogOptionsLocationAndMember(location);
      cloudWatchLogOptionsLocationAndMember += ".CloudWatchLogOptions";
      m_cloudWatchLogOptions.OutputToStream(oStream, cloudWatchLogOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
