/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the associated IAM roles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociatedRole">AWS
   * API Reference</a></p>
   */
  class AssociatedRole
  {
  public:
    AWS_EC2_API AssociatedRole();
    AWS_EC2_API AssociatedRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AssociatedRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the associated IAM role.</p>
     */
    inline const Aws::String& GetAssociatedRoleArn() const{ return m_associatedRoleArn; }
    inline bool AssociatedRoleArnHasBeenSet() const { return m_associatedRoleArnHasBeenSet; }
    inline void SetAssociatedRoleArn(const Aws::String& value) { m_associatedRoleArnHasBeenSet = true; m_associatedRoleArn = value; }
    inline void SetAssociatedRoleArn(Aws::String&& value) { m_associatedRoleArnHasBeenSet = true; m_associatedRoleArn = std::move(value); }
    inline void SetAssociatedRoleArn(const char* value) { m_associatedRoleArnHasBeenSet = true; m_associatedRoleArn.assign(value); }
    inline AssociatedRole& WithAssociatedRoleArn(const Aws::String& value) { SetAssociatedRoleArn(value); return *this;}
    inline AssociatedRole& WithAssociatedRoleArn(Aws::String&& value) { SetAssociatedRoleArn(std::move(value)); return *this;}
    inline AssociatedRole& WithAssociatedRoleArn(const char* value) { SetAssociatedRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket in which the Amazon S3 object is stored.</p>
     */
    inline const Aws::String& GetCertificateS3BucketName() const{ return m_certificateS3BucketName; }
    inline bool CertificateS3BucketNameHasBeenSet() const { return m_certificateS3BucketNameHasBeenSet; }
    inline void SetCertificateS3BucketName(const Aws::String& value) { m_certificateS3BucketNameHasBeenSet = true; m_certificateS3BucketName = value; }
    inline void SetCertificateS3BucketName(Aws::String&& value) { m_certificateS3BucketNameHasBeenSet = true; m_certificateS3BucketName = std::move(value); }
    inline void SetCertificateS3BucketName(const char* value) { m_certificateS3BucketNameHasBeenSet = true; m_certificateS3BucketName.assign(value); }
    inline AssociatedRole& WithCertificateS3BucketName(const Aws::String& value) { SetCertificateS3BucketName(value); return *this;}
    inline AssociatedRole& WithCertificateS3BucketName(Aws::String&& value) { SetCertificateS3BucketName(std::move(value)); return *this;}
    inline AssociatedRole& WithCertificateS3BucketName(const char* value) { SetCertificateS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the Amazon S3 object where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>. </p>
     */
    inline const Aws::String& GetCertificateS3ObjectKey() const{ return m_certificateS3ObjectKey; }
    inline bool CertificateS3ObjectKeyHasBeenSet() const { return m_certificateS3ObjectKeyHasBeenSet; }
    inline void SetCertificateS3ObjectKey(const Aws::String& value) { m_certificateS3ObjectKeyHasBeenSet = true; m_certificateS3ObjectKey = value; }
    inline void SetCertificateS3ObjectKey(Aws::String&& value) { m_certificateS3ObjectKeyHasBeenSet = true; m_certificateS3ObjectKey = std::move(value); }
    inline void SetCertificateS3ObjectKey(const char* value) { m_certificateS3ObjectKeyHasBeenSet = true; m_certificateS3ObjectKey.assign(value); }
    inline AssociatedRole& WithCertificateS3ObjectKey(const Aws::String& value) { SetCertificateS3ObjectKey(value); return *this;}
    inline AssociatedRole& WithCertificateS3ObjectKey(Aws::String&& value) { SetCertificateS3ObjectKey(std::move(value)); return *this;}
    inline AssociatedRole& WithCertificateS3ObjectKey(const char* value) { SetCertificateS3ObjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the private key.</p>
     */
    inline const Aws::String& GetEncryptionKmsKeyId() const{ return m_encryptionKmsKeyId; }
    inline bool EncryptionKmsKeyIdHasBeenSet() const { return m_encryptionKmsKeyIdHasBeenSet; }
    inline void SetEncryptionKmsKeyId(const Aws::String& value) { m_encryptionKmsKeyIdHasBeenSet = true; m_encryptionKmsKeyId = value; }
    inline void SetEncryptionKmsKeyId(Aws::String&& value) { m_encryptionKmsKeyIdHasBeenSet = true; m_encryptionKmsKeyId = std::move(value); }
    inline void SetEncryptionKmsKeyId(const char* value) { m_encryptionKmsKeyIdHasBeenSet = true; m_encryptionKmsKeyId.assign(value); }
    inline AssociatedRole& WithEncryptionKmsKeyId(const Aws::String& value) { SetEncryptionKmsKeyId(value); return *this;}
    inline AssociatedRole& WithEncryptionKmsKeyId(Aws::String&& value) { SetEncryptionKmsKeyId(std::move(value)); return *this;}
    inline AssociatedRole& WithEncryptionKmsKeyId(const char* value) { SetEncryptionKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedRoleArn;
    bool m_associatedRoleArnHasBeenSet = false;

    Aws::String m_certificateS3BucketName;
    bool m_certificateS3BucketNameHasBeenSet = false;

    Aws::String m_certificateS3ObjectKey;
    bool m_certificateS3ObjectKeyHasBeenSet = false;

    Aws::String m_encryptionKmsKeyId;
    bool m_encryptionKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
