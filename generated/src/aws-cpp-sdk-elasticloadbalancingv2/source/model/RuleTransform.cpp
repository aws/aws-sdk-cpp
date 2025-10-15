/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RuleTransform.h>
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

RuleTransform::RuleTransform(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RuleTransform& RuleTransform::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = TransformTypeEnumMapper::GetTransformTypeEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode hostHeaderRewriteConfigNode = resultNode.FirstChild("HostHeaderRewriteConfig");
    if(!hostHeaderRewriteConfigNode.IsNull())
    {
      m_hostHeaderRewriteConfig = hostHeaderRewriteConfigNode;
      m_hostHeaderRewriteConfigHasBeenSet = true;
    }
    XmlNode urlRewriteConfigNode = resultNode.FirstChild("UrlRewriteConfig");
    if(!urlRewriteConfigNode.IsNull())
    {
      m_urlRewriteConfig = urlRewriteConfigNode;
      m_urlRewriteConfigHasBeenSet = true;
    }
  }

  return *this;
}

void RuleTransform::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(TransformTypeEnumMapper::GetNameForTransformTypeEnum(m_type)) << "&";
  }

  if(m_hostHeaderRewriteConfigHasBeenSet)
  {
      Aws::StringStream hostHeaderRewriteConfigLocationAndMemberSs;
      hostHeaderRewriteConfigLocationAndMemberSs << location << index << locationValue << ".HostHeaderRewriteConfig";
      m_hostHeaderRewriteConfig.OutputToStream(oStream, hostHeaderRewriteConfigLocationAndMemberSs.str().c_str());
  }

  if(m_urlRewriteConfigHasBeenSet)
  {
      Aws::StringStream urlRewriteConfigLocationAndMemberSs;
      urlRewriteConfigLocationAndMemberSs << location << index << locationValue << ".UrlRewriteConfig";
      m_urlRewriteConfig.OutputToStream(oStream, urlRewriteConfigLocationAndMemberSs.str().c_str());
  }

}

void RuleTransform::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(TransformTypeEnumMapper::GetNameForTransformTypeEnum(m_type)) << "&";
  }
  if(m_hostHeaderRewriteConfigHasBeenSet)
  {
      Aws::String hostHeaderRewriteConfigLocationAndMember(location);
      hostHeaderRewriteConfigLocationAndMember += ".HostHeaderRewriteConfig";
      m_hostHeaderRewriteConfig.OutputToStream(oStream, hostHeaderRewriteConfigLocationAndMember.c_str());
  }
  if(m_urlRewriteConfigHasBeenSet)
  {
      Aws::String urlRewriteConfigLocationAndMember(location);
      urlRewriteConfigLocationAndMember += ".UrlRewriteConfig";
      m_urlRewriteConfig.OutputToStream(oStream, urlRewriteConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
