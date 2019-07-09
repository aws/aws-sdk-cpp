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

#include <aws/iam/model/ServerCertificate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

ServerCertificate::ServerCertificate() : 
    m_serverCertificateMetadataHasBeenSet(false),
    m_certificateBodyHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
}

ServerCertificate::ServerCertificate(const XmlNode& xmlNode) : 
    m_serverCertificateMetadataHasBeenSet(false),
    m_certificateBodyHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
  *this = xmlNode;
}

ServerCertificate& ServerCertificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serverCertificateMetadataNode = resultNode.FirstChild("ServerCertificateMetadata");
    if(!serverCertificateMetadataNode.IsNull())
    {
      m_serverCertificateMetadata = serverCertificateMetadataNode;
      m_serverCertificateMetadataHasBeenSet = true;
    }
    XmlNode certificateBodyNode = resultNode.FirstChild("CertificateBody");
    if(!certificateBodyNode.IsNull())
    {
      m_certificateBody = certificateBodyNode.GetText();
      m_certificateBodyHasBeenSet = true;
    }
    XmlNode certificateChainNode = resultNode.FirstChild("CertificateChain");
    if(!certificateChainNode.IsNull())
    {
      m_certificateChain = certificateChainNode.GetText();
      m_certificateChainHasBeenSet = true;
    }
  }

  return *this;
}

void ServerCertificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serverCertificateMetadataHasBeenSet)
  {
      Aws::StringStream serverCertificateMetadataLocationAndMemberSs;
      serverCertificateMetadataLocationAndMemberSs << location << index << locationValue << ".ServerCertificateMetadata";
      m_serverCertificateMetadata.OutputToStream(oStream, serverCertificateMetadataLocationAndMemberSs.str().c_str());
  }

  if(m_certificateBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateBody=" << StringUtils::URLEncode(m_certificateBody.c_str()) << "&";
  }

  if(m_certificateChainHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateChain=" << StringUtils::URLEncode(m_certificateChain.c_str()) << "&";
  }

}

void ServerCertificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serverCertificateMetadataHasBeenSet)
  {
      Aws::String serverCertificateMetadataLocationAndMember(location);
      serverCertificateMetadataLocationAndMember += ".ServerCertificateMetadata";
      m_serverCertificateMetadata.OutputToStream(oStream, serverCertificateMetadataLocationAndMember.c_str());
  }
  if(m_certificateBodyHasBeenSet)
  {
      oStream << location << ".CertificateBody=" << StringUtils::URLEncode(m_certificateBody.c_str()) << "&";
  }
  if(m_certificateChainHasBeenSet)
  {
      oStream << location << ".CertificateChain=" << StringUtils::URLEncode(m_certificateChain.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
