/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessLogKinesisDataFirehoseDestinationOptions.h>
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

VerifiedAccessLogKinesisDataFirehoseDestinationOptions::VerifiedAccessLogKinesisDataFirehoseDestinationOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_deliveryStreamHasBeenSet(false)
{
}

VerifiedAccessLogKinesisDataFirehoseDestinationOptions::VerifiedAccessLogKinesisDataFirehoseDestinationOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_deliveryStreamHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessLogKinesisDataFirehoseDestinationOptions& VerifiedAccessLogKinesisDataFirehoseDestinationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode deliveryStreamNode = resultNode.FirstChild("DeliveryStream");
    if(!deliveryStreamNode.IsNull())
    {
      m_deliveryStream = Aws::Utils::Xml::DecodeEscapedXmlText(deliveryStreamNode.GetText());
      m_deliveryStreamHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessLogKinesisDataFirehoseDestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_deliveryStreamHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliveryStream=" << StringUtils::URLEncode(m_deliveryStream.c_str()) << "&";
  }

}

void VerifiedAccessLogKinesisDataFirehoseDestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_deliveryStreamHasBeenSet)
  {
      oStream << location << ".DeliveryStream=" << StringUtils::URLEncode(m_deliveryStream.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
