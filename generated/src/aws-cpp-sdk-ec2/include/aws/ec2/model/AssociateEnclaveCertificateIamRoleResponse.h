/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AssociateEnclaveCertificateIamRoleResponse
  {
  public:
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse() = default;
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline const Aws::String& GetCertificateS3BucketName() const { return m_certificateS3BucketName; }
    template<typename CertificateS3BucketNameT = Aws::String>
    void SetCertificateS3BucketName(CertificateS3BucketNameT&& value) { m_certificateS3BucketNameHasBeenSet = true; m_certificateS3BucketName = std::forward<CertificateS3BucketNameT>(value); }
    template<typename CertificateS3BucketNameT = Aws::String>
    AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3BucketName(CertificateS3BucketNameT&& value) { SetCertificateS3BucketName(std::forward<CertificateS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline const Aws::String& GetCertificateS3ObjectKey() const { return m_certificateS3ObjectKey; }
    template<typename CertificateS3ObjectKeyT = Aws::String>
    void SetCertificateS3ObjectKey(CertificateS3ObjectKeyT&& value) { m_certificateS3ObjectKeyHasBeenSet = true; m_certificateS3ObjectKey = std::forward<CertificateS3ObjectKeyT>(value); }
    template<typename CertificateS3ObjectKeyT = Aws::String>
    AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3ObjectKey(CertificateS3ObjectKeyT&& value) { SetCertificateS3ObjectKey(std::forward<CertificateS3ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline const Aws::String& GetEncryptionKmsKeyId() const { return m_encryptionKmsKeyId; }
    template<typename EncryptionKmsKeyIdT = Aws::String>
    void SetEncryptionKmsKeyId(EncryptionKmsKeyIdT&& value) { m_encryptionKmsKeyIdHasBeenSet = true; m_encryptionKmsKeyId = std::forward<EncryptionKmsKeyIdT>(value); }
    template<typename EncryptionKmsKeyIdT = Aws::String>
    AssociateEnclaveCertificateIamRoleResponse& WithEncryptionKmsKeyId(EncryptionKmsKeyIdT&& value) { SetEncryptionKmsKeyId(std::forward<EncryptionKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateEnclaveCertificateIamRoleResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateS3BucketName;
    bool m_certificateS3BucketNameHasBeenSet = false;

    Aws::String m_certificateS3ObjectKey;
    bool m_certificateS3ObjectKeyHasBeenSet = false;

    Aws::String m_encryptionKmsKeyId;
    bool m_encryptionKmsKeyIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
