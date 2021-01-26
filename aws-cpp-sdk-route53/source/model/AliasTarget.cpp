/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/AliasTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

AliasTarget::AliasTarget() : 
    m_hostedZoneIdHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_evaluateTargetHealth(false),
    m_evaluateTargetHealthHasBeenSet(false)
{
}

AliasTarget::AliasTarget(const XmlNode& xmlNode) : 
    m_hostedZoneIdHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_evaluateTargetHealth(false),
    m_evaluateTargetHealthHasBeenSet(false)
{
  *this = xmlNode;
}

AliasTarget& AliasTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = Aws::Utils::Xml::DecodeEscapedXmlText(dNSNameNode.GetText());
      m_dNSNameHasBeenSet = true;
    }
    XmlNode evaluateTargetHealthNode = resultNode.FirstChild("EvaluateTargetHealth");
    if(!evaluateTargetHealthNode.IsNull())
    {
      m_evaluateTargetHealth = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(evaluateTargetHealthNode.GetText()).c_str()).c_str());
      m_evaluateTargetHealthHasBeenSet = true;
    }
  }

  return *this;
}

void AliasTarget::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_hostedZoneIdHasBeenSet)
  {
   XmlNode hostedZoneIdNode = parentNode.CreateChildElement("HostedZoneId");
   hostedZoneIdNode.SetText(m_hostedZoneId);
  }

  if(m_dNSNameHasBeenSet)
  {
   XmlNode dNSNameNode = parentNode.CreateChildElement("DNSName");
   dNSNameNode.SetText(m_dNSName);
  }

  if(m_evaluateTargetHealthHasBeenSet)
  {
   XmlNode evaluateTargetHealthNode = parentNode.CreateChildElement("EvaluateTargetHealth");
   ss << std::boolalpha << m_evaluateTargetHealth;
   evaluateTargetHealthNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
