/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/Certificate.h>
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

Certificate::Certificate() : 
    m_certificateArnHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
}

Certificate::Certificate(const XmlNode& xmlNode) : 
    m_certificateArnHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
  *this = xmlNode;
}

Certificate& Certificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode certificateArnNode = resultNode.FirstChild("CertificateArn");
    if(!certificateArnNode.IsNull())
    {
      m_certificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(certificateArnNode.GetText());
      m_certificateArnHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_certificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_certificateArnHasBeenSet)
  {
      oStream << location << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
