/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionConfigWithTags.h>
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

DistributionConfigWithTags::DistributionConfigWithTags() : 
    m_distributionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DistributionConfigWithTags::DistributionConfigWithTags(const XmlNode& xmlNode) : 
    m_distributionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

DistributionConfigWithTags& DistributionConfigWithTags::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode distributionConfigNode = resultNode.FirstChild("DistributionConfig");
    if(!distributionConfigNode.IsNull())
    {
      m_distributionConfig = distributionConfigNode;
      m_distributionConfigHasBeenSet = true;
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

void DistributionConfigWithTags::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_distributionConfigHasBeenSet)
  {
   XmlNode distributionConfigNode = parentNode.CreateChildElement("DistributionConfig");
   m_distributionConfig.AddToNode(distributionConfigNode);
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
