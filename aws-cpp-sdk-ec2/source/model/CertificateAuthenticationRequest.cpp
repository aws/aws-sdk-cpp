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

#include <aws/ec2/model/CertificateAuthenticationRequest.h>
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

CertificateAuthenticationRequest::CertificateAuthenticationRequest() : 
    m_clientRootCertificateChainArnHasBeenSet(false)
{
}

CertificateAuthenticationRequest::CertificateAuthenticationRequest(const XmlNode& xmlNode) : 
    m_clientRootCertificateChainArnHasBeenSet(false)
{
  *this = xmlNode;
}

CertificateAuthenticationRequest& CertificateAuthenticationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientRootCertificateChainArnNode = resultNode.FirstChild("ClientRootCertificateChainArn");
    if(!clientRootCertificateChainArnNode.IsNull())
    {
      m_clientRootCertificateChainArn = clientRootCertificateChainArnNode.GetText();
      m_clientRootCertificateChainArnHasBeenSet = true;
    }
  }

  return *this;
}

void CertificateAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientRootCertificateChainArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientRootCertificateChainArn=" << StringUtils::URLEncode(m_clientRootCertificateChainArn.c_str()) << "&";
  }

}

void CertificateAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientRootCertificateChainArnHasBeenSet)
  {
      oStream << location << ".ClientRootCertificateChainArn=" << StringUtils::URLEncode(m_clientRootCertificateChainArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
