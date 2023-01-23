/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateEnclaveCertificateIamRoleResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AssociateEnclaveCertificateIamRoleResponse::AssociateEnclaveCertificateIamRoleResponse()
{
}

AssociateEnclaveCertificateIamRoleResponse::AssociateEnclaveCertificateIamRoleResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssociateEnclaveCertificateIamRoleResponse& AssociateEnclaveCertificateIamRoleResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssociateEnclaveCertificateIamRoleResponse"))
  {
    resultNode = rootNode.FirstChild("AssociateEnclaveCertificateIamRoleResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode certificateS3BucketNameNode = resultNode.FirstChild("certificateS3BucketName");
    if(!certificateS3BucketNameNode.IsNull())
    {
      m_certificateS3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(certificateS3BucketNameNode.GetText());
    }
    XmlNode certificateS3ObjectKeyNode = resultNode.FirstChild("certificateS3ObjectKey");
    if(!certificateS3ObjectKeyNode.IsNull())
    {
      m_certificateS3ObjectKey = Aws::Utils::Xml::DecodeEscapedXmlText(certificateS3ObjectKeyNode.GetText());
    }
    XmlNode encryptionKmsKeyIdNode = resultNode.FirstChild("encryptionKmsKeyId");
    if(!encryptionKmsKeyIdNode.IsNull())
    {
      m_encryptionKmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(encryptionKmsKeyIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssociateEnclaveCertificateIamRoleResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
