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
    AWS_EC2_API S3Storage();
    AWS_EC2_API S3Storage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API S3Storage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline const Aws::String& GetAWSAccessKeyId() const{ return m_aWSAccessKeyId; }

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline bool AWSAccessKeyIdHasBeenSet() const { return m_aWSAccessKeyIdHasBeenSet; }

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline void SetAWSAccessKeyId(const Aws::String& value) { m_aWSAccessKeyIdHasBeenSet = true; m_aWSAccessKeyId = value; }

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline void SetAWSAccessKeyId(Aws::String&& value) { m_aWSAccessKeyIdHasBeenSet = true; m_aWSAccessKeyId = std::move(value); }

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline void SetAWSAccessKeyId(const char* value) { m_aWSAccessKeyIdHasBeenSet = true; m_aWSAccessKeyId.assign(value); }

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline S3Storage& WithAWSAccessKeyId(const Aws::String& value) { SetAWSAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline S3Storage& WithAWSAccessKeyId(Aws::String&& value) { SetAWSAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The access key ID of the owner of the bucket. Before you specify a value for
     * your access key ID, review and follow the guidance in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best
     * practices for managing Amazon Web Services access keys</a>.</p>
     */
    inline S3Storage& WithAWSAccessKeyId(const char* value) { SetAWSAccessKeyId(value); return *this;}


    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline S3Storage& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline S3Storage& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline S3Storage& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline S3Storage& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline S3Storage& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The beginning of the file name of the AMI.</p>
     */
    inline S3Storage& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetUploadPolicy() const{ return m_uploadPolicy; }

    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline bool UploadPolicyHasBeenSet() const { return m_uploadPolicyHasBeenSet; }

    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline void SetUploadPolicy(const Aws::Utils::ByteBuffer& value) { m_uploadPolicyHasBeenSet = true; m_uploadPolicy = value; }

    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline void SetUploadPolicy(Aws::Utils::ByteBuffer&& value) { m_uploadPolicyHasBeenSet = true; m_uploadPolicy = std::move(value); }

    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline S3Storage& WithUploadPolicy(const Aws::Utils::ByteBuffer& value) { SetUploadPolicy(value); return *this;}

    /**
     * <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items
     * into Amazon S3 on your behalf.</p>
     */
    inline S3Storage& WithUploadPolicy(Aws::Utils::ByteBuffer&& value) { SetUploadPolicy(std::move(value)); return *this;}


    /**
     * <p>The signature of the JSON document.</p>
     */
    inline const Aws::String& GetUploadPolicySignature() const{ return m_uploadPolicySignature; }

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline bool UploadPolicySignatureHasBeenSet() const { return m_uploadPolicySignatureHasBeenSet; }

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline void SetUploadPolicySignature(const Aws::String& value) { m_uploadPolicySignatureHasBeenSet = true; m_uploadPolicySignature = value; }

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline void SetUploadPolicySignature(Aws::String&& value) { m_uploadPolicySignatureHasBeenSet = true; m_uploadPolicySignature = std::move(value); }

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline void SetUploadPolicySignature(const char* value) { m_uploadPolicySignatureHasBeenSet = true; m_uploadPolicySignature.assign(value); }

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline S3Storage& WithUploadPolicySignature(const Aws::String& value) { SetUploadPolicySignature(value); return *this;}

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline S3Storage& WithUploadPolicySignature(Aws::String&& value) { SetUploadPolicySignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the JSON document.</p>
     */
    inline S3Storage& WithUploadPolicySignature(const char* value) { SetUploadPolicySignature(value); return *this;}

  private:

    Aws::String m_aWSAccessKeyId;
    bool m_aWSAccessKeyIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Utils::ByteBuffer m_uploadPolicy;
    bool m_uploadPolicyHasBeenSet = false;

    Aws::String m_uploadPolicySignature;
    bool m_uploadPolicySignatureHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
