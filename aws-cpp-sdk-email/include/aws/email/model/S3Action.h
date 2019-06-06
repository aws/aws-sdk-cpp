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
   * enable Amazon SES to write emails to your Amazon S3 bucket, use an AWS KMS key
   * to encrypt your emails, or publish to an Amazon SNS topic of another account,
   * Amazon SES must have permission to access those resources. For information about
   * giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p> <note> <p>When you save your emails to an Amazon S3
   * bucket, the maximum email size (including headers) is 30 MB. Emails larger than
   * that will bounce.</p> </note> <p>For information about specifying Amazon S3
   * actions in receipt rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-s3.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/S3Action">AWS API
   * Reference</a></p>
   */
  class AWS_SES_API S3Action
  {
  public:
    S3Action();
    S3Action(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Action& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline S3Action& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline S3Action& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon SNS topic to notify when the message is saved to the
     * Amazon S3 bucket. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline S3Action& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline S3Action& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline S3Action& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that incoming email will be saved to.</p>
     */
    inline S3Action& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline void SetObjectKeyPrefix(Aws::String&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::move(value); }

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline S3Action& WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline S3Action& WithObjectKeyPrefix(Aws::String&& value) { SetObjectKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a
     * directory name that enables you to store similar data under the same directory
     * in a bucket.</p>
     */
    inline S3Action& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}


    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline S3Action& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline S3Action& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The customer master key that Amazon SES should use to encrypt your emails
     * before saving them to the Amazon S3 bucket. You can use the default master key
     * or a custom master key you created in AWS KMS as follows:</p> <ul> <li> <p>To
     * use the default master key, provide an ARN in the form of
     * <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For
     * example, if your AWS account ID is 123456789012 and you want to use the default
     * master key in the US West (Oregon) region, the ARN of the default master key
     * would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you
     * use the default master key, you don't need to perform any extra steps to give
     * Amazon SES permission to use the key.</p> </li> <li> <p>To use a custom master
     * key you created in AWS KMS, provide the ARN of the master key and ensure that
     * you add a statement to your key's policy to give Amazon SES permission to use
     * it. For more information about giving permissions, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
     * SES Developer Guide</a>.</p> </li> </ul> <p>For more information about key
     * policies, see the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
     * KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not
     * encrypt your emails.</p> <important> <p>Your mail is encrypted by Amazon SES
     * using the Amazon S3 encryption client before the mail is submitted to Amazon S3
     * for storage. It is not encrypted using Amazon S3 server-side encryption. This
     * means that you must use the Amazon S3 encryption client to decrypt the email
     * after retrieving it from Amazon S3, as the service has no access to use your AWS
     * KMS keys for decryption. This encryption client is currently available with the
     * <a href="http://aws.amazon.com/sdk-for-java/">AWS SDK for Java</a> and <a
     * href="http://aws.amazon.com/sdk-for-ruby/">AWS SDK for Ruby</a> only. For more
     * information about client-side encryption using AWS KMS master keys, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
     * S3 Developer Guide</a>.</p> </important>
     */
    inline S3Action& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
