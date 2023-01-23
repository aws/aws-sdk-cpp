/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigSnapshotDeliveryProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The channel through which Config delivers notifications and updated
   * configuration states.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliveryChannel">AWS
   * API Reference</a></p>
   */
  class DeliveryChannel
  {
  public:
    AWS_CONFIGSERVICE_API DeliveryChannel();
    AWS_CONFIGSERVICE_API DeliveryChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DeliveryChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline const Aws::String& GetS3KmsKeyArn() const{ return m_s3KmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline bool S3KmsKeyArnHasBeenSet() const { return m_s3KmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline void SetS3KmsKeyArn(const Aws::String& value) { m_s3KmsKeyArnHasBeenSet = true; m_s3KmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline void SetS3KmsKeyArn(Aws::String&& value) { m_s3KmsKeyArnHasBeenSet = true; m_s3KmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline void SetS3KmsKeyArn(const char* value) { m_s3KmsKeyArnHasBeenSet = true; m_s3KmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KmsKeyArn(const Aws::String& value) { SetS3KmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KmsKeyArn(Aws::String&& value) { SetS3KmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KmsKeyArn(const char* value) { SetS3KmsKeyArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}


    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline const ConfigSnapshotDeliveryProperties& GetConfigSnapshotDeliveryProperties() const{ return m_configSnapshotDeliveryProperties; }

    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline bool ConfigSnapshotDeliveryPropertiesHasBeenSet() const { return m_configSnapshotDeliveryPropertiesHasBeenSet; }

    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = value; }

    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = std::move(value); }

    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { SetConfigSnapshotDeliveryProperties(value); return *this;}

    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { SetConfigSnapshotDeliveryProperties(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::String m_s3KmsKeyArn;
    bool m_s3KmsKeyArnHasBeenSet = false;

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet = false;

    ConfigSnapshotDeliveryProperties m_configSnapshotDeliveryProperties;
    bool m_configSnapshotDeliveryPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
