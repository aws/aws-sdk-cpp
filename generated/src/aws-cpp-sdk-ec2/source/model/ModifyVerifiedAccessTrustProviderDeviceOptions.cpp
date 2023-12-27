/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderDeviceOptions.h>
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

ModifyVerifiedAccessTrustProviderDeviceOptions::ModifyVerifiedAccessTrustProviderDeviceOptions() : 
    m_publicSigningKeyUrlHasBeenSet(false)
{
}

ModifyVerifiedAccessTrustProviderDeviceOptions::ModifyVerifiedAccessTrustProviderDeviceOptions(const XmlNode& xmlNode) : 
    m_publicSigningKeyUrlHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyVerifiedAccessTrustProviderDeviceOptions& ModifyVerifiedAccessTrustProviderDeviceOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode publicSigningKeyUrlNode = resultNode.FirstChild("PublicSigningKeyUrl");
    if(!publicSigningKeyUrlNode.IsNull())
    {
      m_publicSigningKeyUrl = Aws::Utils::Xml::DecodeEscapedXmlText(publicSigningKeyUrlNode.GetText());
      m_publicSigningKeyUrlHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyVerifiedAccessTrustProviderDeviceOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_publicSigningKeyUrlHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicSigningKeyUrl=" << StringUtils::URLEncode(m_publicSigningKeyUrl.c_str()) << "&";
  }

}

void ModifyVerifiedAccessTrustProviderDeviceOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_publicSigningKeyUrlHasBeenSet)
  {
      oStream << location << ".PublicSigningKeyUrl=" << StringUtils::URLEncode(m_publicSigningKeyUrl.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
