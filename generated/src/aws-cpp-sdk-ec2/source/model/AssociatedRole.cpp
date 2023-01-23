/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociatedRole.h>
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

AssociatedRole::AssociatedRole() : 
    m_associatedRoleArnHasBeenSet(false),
    m_certificateS3BucketNameHasBeenSet(false),
    m_certificateS3ObjectKeyHasBeenSet(false),
    m_encryptionKmsKeyIdHasBeenSet(false)
{
}

AssociatedRole::AssociatedRole(const XmlNode& xmlNode) : 
    m_associatedRoleArnHasBeenSet(false),
    m_certificateS3BucketNameHasBeenSet(false),
    m_certificateS3ObjectKeyHasBeenSet(false),
    m_encryptionKmsKeyIdHasBeenSet(false)
{
  *this = xmlNode;
}

AssociatedRole& AssociatedRole::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associatedRoleArnNode = resultNode.FirstChild("associatedRoleArn");
    if(!associatedRoleArnNode.IsNull())
    {
      m_associatedRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(associatedRoleArnNode.GetText());
      m_associatedRoleArnHasBeenSet = true;
    }
    XmlNode certificateS3BucketNameNode = resultNode.FirstChild("certificateS3BucketName");
    if(!certificateS3BucketNameNode.IsNull())
    {
      m_certificateS3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(certificateS3BucketNameNode.GetText());
      m_certificateS3BucketNameHasBeenSet = true;
    }
    XmlNode certificateS3ObjectKeyNode = resultNode.FirstChild("certificateS3ObjectKey");
    if(!certificateS3ObjectKeyNode.IsNull())
    {
      m_certificateS3ObjectKey = Aws::Utils::Xml::DecodeEscapedXmlText(certificateS3ObjectKeyNode.GetText());
      m_certificateS3ObjectKeyHasBeenSet = true;
    }
    XmlNode encryptionKmsKeyIdNode = resultNode.FirstChild("encryptionKmsKeyId");
    if(!encryptionKmsKeyIdNode.IsNull())
    {
      m_encryptionKmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(encryptionKmsKeyIdNode.GetText());
      m_encryptionKmsKeyIdHasBeenSet = true;
    }
  }

  return *this;
}

void AssociatedRole::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associatedRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedRoleArn=" << StringUtils::URLEncode(m_associatedRoleArn.c_str()) << "&";
  }

  if(m_certificateS3BucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateS3BucketName=" << StringUtils::URLEncode(m_certificateS3BucketName.c_str()) << "&";
  }

  if(m_certificateS3ObjectKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateS3ObjectKey=" << StringUtils::URLEncode(m_certificateS3ObjectKey.c_str()) << "&";
  }

  if(m_encryptionKmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EncryptionKmsKeyId=" << StringUtils::URLEncode(m_encryptionKmsKeyId.c_str()) << "&";
  }

}

void AssociatedRole::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associatedRoleArnHasBeenSet)
  {
      oStream << location << ".AssociatedRoleArn=" << StringUtils::URLEncode(m_associatedRoleArn.c_str()) << "&";
  }
  if(m_certificateS3BucketNameHasBeenSet)
  {
      oStream << location << ".CertificateS3BucketName=" << StringUtils::URLEncode(m_certificateS3BucketName.c_str()) << "&";
  }
  if(m_certificateS3ObjectKeyHasBeenSet)
  {
      oStream << location << ".CertificateS3ObjectKey=" << StringUtils::URLEncode(m_certificateS3ObjectKey.c_str()) << "&";
  }
  if(m_encryptionKmsKeyIdHasBeenSet)
  {
      oStream << location << ".EncryptionKmsKeyId=" << StringUtils::URLEncode(m_encryptionKmsKeyId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
