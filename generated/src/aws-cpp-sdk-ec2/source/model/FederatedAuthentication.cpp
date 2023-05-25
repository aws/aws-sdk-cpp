/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FederatedAuthentication.h>
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

FederatedAuthentication::FederatedAuthentication() : 
    m_samlProviderArnHasBeenSet(false),
    m_selfServiceSamlProviderArnHasBeenSet(false)
{
}

FederatedAuthentication::FederatedAuthentication(const XmlNode& xmlNode) : 
    m_samlProviderArnHasBeenSet(false),
    m_selfServiceSamlProviderArnHasBeenSet(false)
{
  *this = xmlNode;
}

FederatedAuthentication& FederatedAuthentication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode samlProviderArnNode = resultNode.FirstChild("samlProviderArn");
    if(!samlProviderArnNode.IsNull())
    {
      m_samlProviderArn = Aws::Utils::Xml::DecodeEscapedXmlText(samlProviderArnNode.GetText());
      m_samlProviderArnHasBeenSet = true;
    }
    XmlNode selfServiceSamlProviderArnNode = resultNode.FirstChild("selfServiceSamlProviderArn");
    if(!selfServiceSamlProviderArnNode.IsNull())
    {
      m_selfServiceSamlProviderArn = Aws::Utils::Xml::DecodeEscapedXmlText(selfServiceSamlProviderArnNode.GetText());
      m_selfServiceSamlProviderArnHasBeenSet = true;
    }
  }

  return *this;
}

void FederatedAuthentication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_samlProviderArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SamlProviderArn=" << StringUtils::URLEncode(m_samlProviderArn.c_str()) << "&";
  }

  if(m_selfServiceSamlProviderArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SelfServiceSamlProviderArn=" << StringUtils::URLEncode(m_selfServiceSamlProviderArn.c_str()) << "&";
  }

}

void FederatedAuthentication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_samlProviderArnHasBeenSet)
  {
      oStream << location << ".SamlProviderArn=" << StringUtils::URLEncode(m_samlProviderArn.c_str()) << "&";
  }
  if(m_selfServiceSamlProviderArnHasBeenSet)
  {
      oStream << location << ".SelfServiceSamlProviderArn=" << StringUtils::URLEncode(m_selfServiceSamlProviderArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
