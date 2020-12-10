/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisLoadBalancerTarget.h>
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

AnalysisLoadBalancerTarget::AnalysisLoadBalancerTarget() : 
    m_addressHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

AnalysisLoadBalancerTarget::AnalysisLoadBalancerTarget(const XmlNode& xmlNode) : 
    m_addressHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisLoadBalancerTarget& AnalysisLoadBalancerTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addressNode = resultNode.FirstChild("address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode instanceNode = resultNode.FirstChild("instance");
    if(!instanceNode.IsNull())
    {
      m_instance = instanceNode;
      m_instanceHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisLoadBalancerTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_instanceHasBeenSet)
  {
      Aws::StringStream instanceLocationAndMemberSs;
      instanceLocationAndMemberSs << location << index << locationValue << ".Instance";
      m_instance.OutputToStream(oStream, instanceLocationAndMemberSs.str().c_str());
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

}

void AnalysisLoadBalancerTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_instanceHasBeenSet)
  {
      Aws::String instanceLocationAndMember(location);
      instanceLocationAndMember += ".Instance";
      m_instance.OutputToStream(oStream, instanceLocationAndMember.c_str());
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
