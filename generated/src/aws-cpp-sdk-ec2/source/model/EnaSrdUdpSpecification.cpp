/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnaSrdUdpSpecification.h>
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

EnaSrdUdpSpecification::EnaSrdUdpSpecification() : 
    m_enaSrdUdpEnabled(false),
    m_enaSrdUdpEnabledHasBeenSet(false)
{
}

EnaSrdUdpSpecification::EnaSrdUdpSpecification(const XmlNode& xmlNode) : 
    m_enaSrdUdpEnabled(false),
    m_enaSrdUdpEnabledHasBeenSet(false)
{
  *this = xmlNode;
}

EnaSrdUdpSpecification& EnaSrdUdpSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enaSrdUdpEnabledNode = resultNode.FirstChild("EnaSrdUdpEnabled");
    if(!enaSrdUdpEnabledNode.IsNull())
    {
      m_enaSrdUdpEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSrdUdpEnabledNode.GetText()).c_str()).c_str());
      m_enaSrdUdpEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void EnaSrdUdpSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enaSrdUdpEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSrdUdpEnabled=" << std::boolalpha << m_enaSrdUdpEnabled << "&";
  }

}

void EnaSrdUdpSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enaSrdUdpEnabledHasBeenSet)
  {
      oStream << location << ".EnaSrdUdpEnabled=" << std::boolalpha << m_enaSrdUdpEnabled << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
