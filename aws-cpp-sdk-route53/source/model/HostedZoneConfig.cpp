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

#include <aws/route53/model/HostedZoneConfig.h>
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

HostedZoneConfig::HostedZoneConfig() : 
    m_commentHasBeenSet(false),
    m_privateZone(false),
    m_privateZoneHasBeenSet(false)
{
}

HostedZoneConfig::HostedZoneConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_privateZone(false),
    m_privateZoneHasBeenSet(false)
{
  *this = xmlNode;
}

HostedZoneConfig& HostedZoneConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
    XmlNode privateZoneNode = resultNode.FirstChild("PrivateZone");
    if(!privateZoneNode.IsNull())
    {
      m_privateZone = StringUtils::ConvertToBool(StringUtils::Trim(privateZoneNode.GetText().c_str()).c_str());
      m_privateZoneHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZoneConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_privateZoneHasBeenSet)
  {
   XmlNode privateZoneNode = parentNode.CreateChildElement("PrivateZone");
   ss << std::boolalpha << m_privateZone;
   privateZoneNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
