/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/CertificateAuthentication.h>
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

CertificateAuthentication::CertificateAuthentication() : 
    m_clientRootCertificateChainHasBeenSet(false)
{
}

CertificateAuthentication::CertificateAuthentication(const XmlNode& xmlNode) : 
    m_clientRootCertificateChainHasBeenSet(false)
{
  *this = xmlNode;
}

CertificateAuthentication& CertificateAuthentication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientRootCertificateChainNode = resultNode.FirstChild("clientRootCertificateChain");
    if(!clientRootCertificateChainNode.IsNull())
    {
      m_clientRootCertificateChain = clientRootCertificateChainNode.GetText();
      m_clientRootCertificateChainHasBeenSet = true;
    }
  }

  return *this;
}

void CertificateAuthentication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientRootCertificateChainHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientRootCertificateChain=" << StringUtils::URLEncode(m_clientRootCertificateChain.c_str()) << "&";
  }

}

void CertificateAuthentication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientRootCertificateChainHasBeenSet)
  {
      oStream << location << ".ClientRootCertificateChain=" << StringUtils::URLEncode(m_clientRootCertificateChain.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
