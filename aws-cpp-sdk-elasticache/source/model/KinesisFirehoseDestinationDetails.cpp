/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/KinesisFirehoseDestinationDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

KinesisFirehoseDestinationDetails::KinesisFirehoseDestinationDetails() : 
    m_deliveryStreamHasBeenSet(false)
{
}

KinesisFirehoseDestinationDetails::KinesisFirehoseDestinationDetails(const XmlNode& xmlNode) : 
    m_deliveryStreamHasBeenSet(false)
{
  *this = xmlNode;
}

KinesisFirehoseDestinationDetails& KinesisFirehoseDestinationDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deliveryStreamNode = resultNode.FirstChild("DeliveryStream");
    if(!deliveryStreamNode.IsNull())
    {
      m_deliveryStream = Aws::Utils::Xml::DecodeEscapedXmlText(deliveryStreamNode.GetText());
      m_deliveryStreamHasBeenSet = true;
    }
  }

  return *this;
}

void KinesisFirehoseDestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deliveryStreamHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliveryStream=" << StringUtils::URLEncode(m_deliveryStream.c_str()) << "&";
  }

}

void KinesisFirehoseDestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deliveryStreamHasBeenSet)
  {
      oStream << location << ".DeliveryStream=" << StringUtils::URLEncode(m_deliveryStream.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
