/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/StreamingDistributionConfigWithTags.h>
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

StreamingDistributionConfigWithTags::StreamingDistributionConfigWithTags() : 
    m_streamingDistributionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StreamingDistributionConfigWithTags::StreamingDistributionConfigWithTags(const XmlNode& xmlNode) : 
    m_streamingDistributionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

StreamingDistributionConfigWithTags& StreamingDistributionConfigWithTags::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode streamingDistributionConfigNode = resultNode.FirstChild("StreamingDistributionConfig");
    if(!streamingDistributionConfigNode.IsNull())
    {
      m_streamingDistributionConfig = streamingDistributionConfigNode;
      m_streamingDistributionConfigHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      m_tags = tagsNode;
      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void StreamingDistributionConfigWithTags::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_streamingDistributionConfigHasBeenSet)
  {
   XmlNode streamingDistributionConfigNode = parentNode.CreateChildElement("StreamingDistributionConfig");
   m_streamingDistributionConfig.AddToNode(streamingDistributionConfigNode);
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsNode = parentNode.CreateChildElement("Tags");
   m_tags.AddToNode(tagsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
