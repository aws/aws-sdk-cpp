/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayMulticastDomainRequestOptions.h>
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

CreateTransitGatewayMulticastDomainRequestOptions::CreateTransitGatewayMulticastDomainRequestOptions() : 
    m_igmpv2Support(Igmpv2SupportValue::NOT_SET),
    m_igmpv2SupportHasBeenSet(false),
    m_staticSourcesSupport(StaticSourcesSupportValue::NOT_SET),
    m_staticSourcesSupportHasBeenSet(false),
    m_autoAcceptSharedAssociations(AutoAcceptSharedAssociationsValue::NOT_SET),
    m_autoAcceptSharedAssociationsHasBeenSet(false)
{
}

CreateTransitGatewayMulticastDomainRequestOptions::CreateTransitGatewayMulticastDomainRequestOptions(const XmlNode& xmlNode) : 
    m_igmpv2Support(Igmpv2SupportValue::NOT_SET),
    m_igmpv2SupportHasBeenSet(false),
    m_staticSourcesSupport(StaticSourcesSupportValue::NOT_SET),
    m_staticSourcesSupportHasBeenSet(false),
    m_autoAcceptSharedAssociations(AutoAcceptSharedAssociationsValue::NOT_SET),
    m_autoAcceptSharedAssociationsHasBeenSet(false)
{
  *this = xmlNode;
}

CreateTransitGatewayMulticastDomainRequestOptions& CreateTransitGatewayMulticastDomainRequestOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode igmpv2SupportNode = resultNode.FirstChild("Igmpv2Support");
    if(!igmpv2SupportNode.IsNull())
    {
      m_igmpv2Support = Igmpv2SupportValueMapper::GetIgmpv2SupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(igmpv2SupportNode.GetText()).c_str()).c_str());
      m_igmpv2SupportHasBeenSet = true;
    }
    XmlNode staticSourcesSupportNode = resultNode.FirstChild("StaticSourcesSupport");
    if(!staticSourcesSupportNode.IsNull())
    {
      m_staticSourcesSupport = StaticSourcesSupportValueMapper::GetStaticSourcesSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(staticSourcesSupportNode.GetText()).c_str()).c_str());
      m_staticSourcesSupportHasBeenSet = true;
    }
    XmlNode autoAcceptSharedAssociationsNode = resultNode.FirstChild("AutoAcceptSharedAssociations");
    if(!autoAcceptSharedAssociationsNode.IsNull())
    {
      m_autoAcceptSharedAssociations = AutoAcceptSharedAssociationsValueMapper::GetAutoAcceptSharedAssociationsValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoAcceptSharedAssociationsNode.GetText()).c_str()).c_str());
      m_autoAcceptSharedAssociationsHasBeenSet = true;
    }
  }

  return *this;
}

void CreateTransitGatewayMulticastDomainRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_igmpv2SupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".Igmpv2Support=" << Igmpv2SupportValueMapper::GetNameForIgmpv2SupportValue(m_igmpv2Support) << "&";
  }

  if(m_staticSourcesSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".StaticSourcesSupport=" << StaticSourcesSupportValueMapper::GetNameForStaticSourcesSupportValue(m_staticSourcesSupport) << "&";
  }

  if(m_autoAcceptSharedAssociationsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoAcceptSharedAssociations=" << AutoAcceptSharedAssociationsValueMapper::GetNameForAutoAcceptSharedAssociationsValue(m_autoAcceptSharedAssociations) << "&";
  }

}

void CreateTransitGatewayMulticastDomainRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_igmpv2SupportHasBeenSet)
  {
      oStream << location << ".Igmpv2Support=" << Igmpv2SupportValueMapper::GetNameForIgmpv2SupportValue(m_igmpv2Support) << "&";
  }
  if(m_staticSourcesSupportHasBeenSet)
  {
      oStream << location << ".StaticSourcesSupport=" << StaticSourcesSupportValueMapper::GetNameForStaticSourcesSupportValue(m_staticSourcesSupport) << "&";
  }
  if(m_autoAcceptSharedAssociationsHasBeenSet)
  {
      oStream << location << ".AutoAcceptSharedAssociations=" << AutoAcceptSharedAssociationsValueMapper::GetNameForAutoAcceptSharedAssociationsValue(m_autoAcceptSharedAssociations) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
