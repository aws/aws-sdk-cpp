/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AvailabilityZoneMessage.h>
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

AvailabilityZoneMessage::AvailabilityZoneMessage() : 
    m_messageHasBeenSet(false)
{
}

AvailabilityZoneMessage::AvailabilityZoneMessage(const XmlNode& xmlNode) : 
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

AvailabilityZoneMessage& AvailabilityZoneMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZoneMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void AvailabilityZoneMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
