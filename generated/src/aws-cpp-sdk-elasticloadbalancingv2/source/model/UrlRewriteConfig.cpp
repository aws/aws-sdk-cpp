/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/UrlRewriteConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

UrlRewriteConfig::UrlRewriteConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

UrlRewriteConfig& UrlRewriteConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode rewritesNode = resultNode.FirstChild("Rewrites");
    if(!rewritesNode.IsNull())
    {
      XmlNode rewritesMember = rewritesNode.FirstChild("member");
      m_rewritesHasBeenSet = !rewritesMember.IsNull();
      while(!rewritesMember.IsNull())
      {
        m_rewrites.push_back(rewritesMember);
        rewritesMember = rewritesMember.NextNode("member");
      }

      m_rewritesHasBeenSet = true;
    }
  }

  return *this;
}

void UrlRewriteConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_rewritesHasBeenSet)
  {
      unsigned rewritesIdx = 1;
      for(auto& item : m_rewrites)
      {
        Aws::StringStream rewritesSs;
        rewritesSs << location << index << locationValue << ".Rewrites.member." << rewritesIdx++;
        item.OutputToStream(oStream, rewritesSs.str().c_str());
      }
  }

}

void UrlRewriteConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_rewritesHasBeenSet)
  {
      unsigned rewritesIdx = 1;
      for(auto& item : m_rewrites)
      {
        Aws::StringStream rewritesSs;
        rewritesSs << location << ".Rewrites.member." << rewritesIdx++;
        item.OutputToStream(oStream, rewritesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
