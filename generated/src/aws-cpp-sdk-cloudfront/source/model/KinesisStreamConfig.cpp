/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/KinesisStreamConfig.h>
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

KinesisStreamConfig::KinesisStreamConfig() : 
    m_roleARNHasBeenSet(false),
    m_streamARNHasBeenSet(false)
{
}

KinesisStreamConfig::KinesisStreamConfig(const XmlNode& xmlNode) : 
    m_roleARNHasBeenSet(false),
    m_streamARNHasBeenSet(false)
{
  *this = xmlNode;
}

KinesisStreamConfig& KinesisStreamConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode roleARNNode = resultNode.FirstChild("RoleARN");
    if(!roleARNNode.IsNull())
    {
      m_roleARN = Aws::Utils::Xml::DecodeEscapedXmlText(roleARNNode.GetText());
      m_roleARNHasBeenSet = true;
    }
    XmlNode streamARNNode = resultNode.FirstChild("StreamARN");
    if(!streamARNNode.IsNull())
    {
      m_streamARN = Aws::Utils::Xml::DecodeEscapedXmlText(streamARNNode.GetText());
      m_streamARNHasBeenSet = true;
    }
  }

  return *this;
}

void KinesisStreamConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_roleARNHasBeenSet)
  {
   XmlNode roleARNNode = parentNode.CreateChildElement("RoleARN");
   roleARNNode.SetText(m_roleARN);
  }

  if(m_streamARNHasBeenSet)
  {
   XmlNode streamARNNode = parentNode.CreateChildElement("StreamARN");
   streamARNNode.SetText(m_streamARN);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
