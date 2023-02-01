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
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse();
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateEnclaveCertificateIamRoleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline const Aws::String& GetCertificateS3BucketName() const{ return m_certificateS3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline void SetCertificateS3BucketName(const Aws::String& value) { m_certificateS3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline void SetCertificateS3BucketName(Aws::String&& value) { m_certificateS3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline void SetCertificateS3BucketName(const char* value) { m_certificateS3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3BucketName(const Aws::String& value) { SetCertificateS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3BucketName(Aws::String&& value) { SetCertificateS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which the certificate was uploaded.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3BucketName(const char* value) { SetCertificateS3BucketName(value); return *this;}


    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline const Aws::String& GetCertificateS3ObjectKey() const{ return m_certificateS3ObjectKey; }

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline void SetCertificateS3ObjectKey(const Aws::String& value) { m_certificateS3ObjectKey = value; }

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline void SetCertificateS3ObjectKey(Aws::String&& value) { m_certificateS3ObjectKey = std::move(value); }

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline void SetCertificateS3ObjectKey(const char* value) { m_certificateS3ObjectKey.assign(value); }

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3ObjectKey(const Aws::String& value) { SetCertificateS3ObjectKey(value); return *this;}

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3ObjectKey(Aws::String&& value) { SetCertificateS3ObjectKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 object key where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithCertificateS3ObjectKey(const char* value) { SetCertificateS3ObjectKey(value); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline const Aws::String& GetEncryptionKmsKeyId() const{ return m_encryptionKmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline void SetEncryptionKmsKeyId(const Aws::String& value) { m_encryptionKmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline void SetEncryptionKmsKeyId(Aws::String&& value) { m_encryptionKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline void SetEncryptionKmsKeyId(const char* value) { m_encryptionKmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithEncryptionKmsKeyId(const Aws::String& value) { SetEncryptionKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithEncryptionKmsKeyId(Aws::String&& value) { SetEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the private key of the certificate.</p>
     */
    inline AssociateEnclaveCertificateIamRoleResponse& WithEncryptionKmsKeyId(const char* value) { SetEncryptionKmsKeyId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateEnclaveCertificateIamRoleResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateEnclaveCertificateIamRoleResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_certificateS3BucketName;

    Aws::String m_certificateS3ObjectKey;

    Aws::String m_encryptionKmsKeyId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
