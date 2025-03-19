/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
   * <p>Describes the storage parameters for Amazon S3 and Amazon S3 buckets for an
   * instance store-backed AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/S3Storage">AWS API
   * Reference</a></p>
   */
  class S3Storage
  {
  public:
    AWS_EC2_API S3Storage() = default;
    AWS_EC2_API S3Storage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API S3Storage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/accounts/latest/reference/best-practices.html">Best
     * Practices for Amazon Web Services accounts</a> in the <i>Account
     * ManagementReference Guide</i>.</p>
     */
    inline const Aws::String& GetAWSAccessKeyId() const { return m_aWSAccessKeyId; }
    inline bool AWSAccessKeyIdHasBeenSet() const { return m_aWSAccessKeyIdHasBeenSet; }
    template<typename AWSAccessKeyIdT = Aws::String>
    void SetAWSAccessKeyId(AWSAccessKeyIdT&& value) { m_aWSAccessKeyIdHasBeenSet = true; m_aWSAccessKeyId = std::forward<AWSAccessKeyIdT>(value); }
    template<typename AWSAccessKeyIdT = Aws::String>
    S3Storage& WithAWSAccessKeyId(AWSAccessKeyIdT&& value) { SetAWSAccessKeyId(std::forward<AWSAccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Storage& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3Storage& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetUploadPolicy() const { return m_uploadPolicy; }
    inline bool UploadPolicyHasBeenSet() const { return m_uploadPolicyHasBeenSet; }
    template<typename UploadPolicyT = Aws::Utils::ByteBuffer>
    void SetUploadPolicy(UploadPolicyT&& value) { m_uploadPolicyHasBeenSet = true; m_uploadPolicy = std::forward<UploadPolicyT>(value); }
    template<typename UploadPolicyT = Aws::Utils::ByteBuffer>
    S3Storage& WithUploadPolicy(UploadPolicyT&& value) { SetUploadPolicy(std::forward<UploadPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the JSON document.</p>
     */
    inline const Aws::String& GetUploadPolicySignature() const { return m_uploadPolicySignature; }
    inline bool UploadPolicySignatureHasBeenSet() const { return m_uploadPolicySignatureHasBeenSet; }
    template<typename UploadPolicySignatureT = Aws::String>
    void SetUploadPolicySignature(UploadPolicySignatureT&& value) { m_uploadPolicySignatureHasBeenSet = true; m_uploadPolicySignature = std::forward<UploadPolicySignatureT>(value); }
    template<typename UploadPolicySignatureT = Aws::String>
    S3Storage& WithUploadPolicySignature(UploadPolicySignatureT&& value) { SetUploadPolicySignature(std::forward<UploadPolicySignatureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aWSAccessKeyId;
    bool m_aWSAccessKeyIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Utils::ByteBuffer m_uploadPolicy{};
    bool m_uploadPolicyHasBeenSet = false;

    Aws::String m_uploadPolicySignature;
    bool m_uploadPolicySignatureHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
