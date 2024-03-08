/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TrustStoreAssociation.h>
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

TrustStoreAssociation::TrustStoreAssociation() : 
    m_resourceArnHasBeenSet(false)
{
}

TrustStoreAssociation::TrustStoreAssociation(const XmlNode& xmlNode) : 
    m_resourceArnHasBeenSet(false)
{
  *this = xmlNode;
}

TrustStoreAssociation& TrustStoreAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceArnNode = resultNode.FirstChild("ResourceArn");
    if(!resourceArnNode.IsNull())
    {
      m_resourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceArnNode.GetText());
      m_resourceArnHasBeenSet = true;
    }
  }

  return *this;
}

void TrustStoreAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

}

void TrustStoreAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
