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
      m_hostedZoneId = hostedZoneIdNode.GetText();
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = dNSNameNode.GetText();
      m_dNSNameHasBeenSet = true;
    }
    XmlNode evaluateTargetHealthNode = resultNode.FirstChild("EvaluateTargetHealth");
    if(!evaluateTargetHealthNode.IsNull())
    {
      m_evaluateTargetHealth = StringUtils::ConvertToBool(StringUtils::Trim(evaluateTargetHealthNode.GetText().c_str()).c_str());
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
