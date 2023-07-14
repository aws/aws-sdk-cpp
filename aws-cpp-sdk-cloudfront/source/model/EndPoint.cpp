/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/EndPoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

EndPoint::EndPoint() : 
    m_streamTypeHasBeenSet(false),
    m_kinesisStreamConfigHasBeenSet(false)
{
}

EndPoint::EndPoint(const XmlNode& xmlNode) : 
    m_streamTypeHasBeenSet(false),
    m_kinesisStreamConfigHasBeenSet(false)
{
  *this = xmlNode;
}

EndPoint& EndPoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode streamTypeNode = resultNode.FirstChild("StreamType");
    if(!streamTypeNode.IsNull())
    {
      m_streamType = Aws::Utils::Xml::DecodeEscapedXmlText(streamTypeNode.GetText());
      m_streamTypeHasBeenSet = true;
    }
    XmlNode kinesisStreamConfigNode = resultNode.FirstChild("KinesisStreamConfig");
    if(!kinesisStreamConfigNode.IsNull())
    {
      m_kinesisStreamConfig = kinesisStreamConfigNode;
      m_kinesisStreamConfigHasBeenSet = true;
    }
  }

  return *this;
}

void EndPoint::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_streamTypeHasBeenSet)
  {
   XmlNode streamTypeNode = parentNode.CreateChildElement("StreamType");
   streamTypeNode.SetText(m_streamType);
  }

  if(m_kinesisStreamConfigHasBeenSet)
  {
   XmlNode kinesisStreamConfigNode = parentNode.CreateChildElement("KinesisStreamConfig");
   m_kinesisStreamConfig.AddToNode(kinesisStreamConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
