/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>When included in a receipt rule, this action saves the received message to an
   * Amazon Simple Storage Service (Amazon S3) bucket and, optionally, publishes a
   * notification to Amazon Simple Notification Service (Amazon SNS).</p> <p>To
   * enable Amazon SES to write emails to your Amazon S3 bucket, use an Amazon Web
   * Services KMS key to encrypt your emails, or publish to an Amazon SNS topic of
   * another account, Amazon SES must have permission to access those resources. For
   * information about granting permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p>  <p>When you save your emails to an Amazon S3
   * bucket, the maximum email size (including headers) is 40 MB. Emails larger than
   * that bounces.</p>  <p>For information about specifying Amazon S3 actions
   * in receipt rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-s3.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/S3Action">AWS API
   * Reference</a></p>
   */
  class S3Action
  {
  public:
    AWS_SES_API S3Action() = default;
    AWS_SES_API S3Action(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API S3Action& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. You can find the ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * operation in Amazon SNS.</p> <p>For more information about Amazon SNS topics,
     * see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    S3Action& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket for incoming email.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3Action& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const { return m_objectKeyPrefix; }
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }
    template<typename ObjectKeyPrefixT = Aws::String>
    void SetObjectKeyPrefix(ObjectKeyPrefixT&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::forward<ObjectKeyPrefixT>(value); }
    template<typename ObjectKeyPrefixT = Aws::String>
    S3Action& WithObjectKeyPrefix(ObjectKeyPrefixT&& value) { SetObjectKeyPrefix(std::forward<ObjectKeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the Amazon Web Services
     * managed key or a customer managed key that you created in Amazon Web Services
     * KMS as follows:</p> <ul> <li> <p>To use the Amazon Web Services managed key,
     * provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your Amazon Web Services account ID is 123456789012 and you want to
     * use the Amazon Web Services managed key in the US West (Oregon) Region, the ARN
     * of the Amazon Web Services managed key would be
     * <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you use the
     * Amazon Web Services managed key, you don't need to perform any extra steps to
     * give Amazon SES permission to use the key.</p> </li> <li> <p>To use a customer
     * managed key that you created in Amazon Web Services KMS, provide the ARN of the
     * customer managed key and ensure that you add a statement to your key's policy to
     * give Amazon SES permission to use it. For more information about giving
     * permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Amazon
     * Web Services KMS Developer Guide</a>. If you do not specify an Amazon Web
     * Services KMS key, Amazon SES does not encrypt your emails.</p> 
     * <p>Your mail is encrypted by Amazon SES using the Amazon S3 encryption client
     * before the mail is submitted to Amazon S3 for storage. It is not encrypted using
     * Amazon S3 server-side encryption. This means that you must use the Amazon S3
     * encryption client to decrypt the email after retrieving it from Amazon S3, as
     * the service has no access to use your Amazon Web Services KMS keys for
     * decryption. This encryption client is currently available with the <a
     * href="http://aws.amazon.com/sdk-for-java/">Amazon Web Services SDK for Java</a>
     * and <a href="http://aws.amazon.com/sdk-for-ruby/">Amazon Web Services SDK for
     * Ruby</a> only. For more information about client-side encryption using Amazon
     * Web Services KMS managed keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    S3Action& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM role to be used by Amazon Simple Email Service while
     * writing to the Amazon S3 bucket, optionally encrypting your mail via the
     * provided customer managed key, and publishing to the Amazon SNS topic. This role
     * should have access to the following APIs: </p> <ul> <li> <p>
     * <code>s3:PutObject</code>, <code>kms:Encrypt</code> and
     * <code>kms:GenerateDataKey</code> for the given Amazon S3 bucket.</p> </li> <li>
     * <p> <code>kms:GenerateDataKey</code> for the given Amazon Web Services KMS
     * customer managed key. </p> </li> <li> <p> <code>sns:Publish</code> for the given
     * Amazon SNS topic.</p> </li> </ul>  <p>If an IAM role ARN is provided, the
     * role (and only the role) is used to access all the given resources (Amazon S3
     * bucket, Amazon Web Services KMS customer managed key and Amazon SNS topic).
     * Therefore, setting up individual resource access permissions is not
     * required.</p> 
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    S3Action& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
