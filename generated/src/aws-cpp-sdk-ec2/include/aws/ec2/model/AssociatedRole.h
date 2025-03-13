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
    AWS_EC2_API AssociatedRole() = default;
    AWS_EC2_API AssociatedRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AssociatedRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the associated IAM role.</p>
     */
    inline const Aws::String& GetAssociatedRoleArn() const { return m_associatedRoleArn; }
    inline bool AssociatedRoleArnHasBeenSet() const { return m_associatedRoleArnHasBeenSet; }
    template<typename AssociatedRoleArnT = Aws::String>
    void SetAssociatedRoleArn(AssociatedRoleArnT&& value) { m_associatedRoleArnHasBeenSet = true; m_associatedRoleArn = std::forward<AssociatedRoleArnT>(value); }
    template<typename AssociatedRoleArnT = Aws::String>
    AssociatedRole& WithAssociatedRoleArn(AssociatedRoleArnT&& value) { SetAssociatedRoleArn(std::forward<AssociatedRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket in which the Amazon S3 object is stored.</p>
     */
    inline const Aws::String& GetCertificateS3BucketName() const { return m_certificateS3BucketName; }
    inline bool CertificateS3BucketNameHasBeenSet() const { return m_certificateS3BucketNameHasBeenSet; }
    template<typename CertificateS3BucketNameT = Aws::String>
    void SetCertificateS3BucketName(CertificateS3BucketNameT&& value) { m_certificateS3BucketNameHasBeenSet = true; m_certificateS3BucketName = std::forward<CertificateS3BucketNameT>(value); }
    template<typename CertificateS3BucketNameT = Aws::String>
    AssociatedRole& WithCertificateS3BucketName(CertificateS3BucketNameT&& value) { SetCertificateS3BucketName(std::forward<CertificateS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the Amazon S3 object where the certificate, certificate chain, and
     * encrypted private key bundle are stored. The object key is formatted as follows:
     * <code>role_arn</code>/<code>certificate_arn</code>. </p>
     */
    inline const Aws::String& GetCertificateS3ObjectKey() const { return m_certificateS3ObjectKey; }
    inline bool CertificateS3ObjectKeyHasBeenSet() const { return m_certificateS3ObjectKeyHasBeenSet; }
    template<typename CertificateS3ObjectKeyT = Aws::String>
    void SetCertificateS3ObjectKey(CertificateS3ObjectKeyT&& value) { m_certificateS3ObjectKeyHasBeenSet = true; m_certificateS3ObjectKey = std::forward<CertificateS3ObjectKeyT>(value); }
    template<typename CertificateS3ObjectKeyT = Aws::String>
    AssociatedRole& WithCertificateS3ObjectKey(CertificateS3ObjectKeyT&& value) { SetCertificateS3ObjectKey(std::forward<CertificateS3ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the private key.</p>
     */
    inline const Aws::String& GetEncryptionKmsKeyId() const { return m_encryptionKmsKeyId; }
    inline bool EncryptionKmsKeyIdHasBeenSet() const { return m_encryptionKmsKeyIdHasBeenSet; }
    template<typename EncryptionKmsKeyIdT = Aws::String>
    void SetEncryptionKmsKeyId(EncryptionKmsKeyIdT&& value) { m_encryptionKmsKeyIdHasBeenSet = true; m_encryptionKmsKeyId = std::forward<EncryptionKmsKeyIdT>(value); }
    template<typename EncryptionKmsKeyIdT = Aws::String>
    AssociatedRole& WithEncryptionKmsKeyId(EncryptionKmsKeyIdT&& value) { SetEncryptionKmsKeyId(std::forward<EncryptionKmsKeyIdT>(value)); return *this;}
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
