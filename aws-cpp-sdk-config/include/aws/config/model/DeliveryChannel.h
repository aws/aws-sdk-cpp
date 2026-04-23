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
   * <p>The channel through which AWS Config delivers notifications and updated
   * configuration states.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliveryChannel">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DeliveryChannel
  {
  public:
    DeliveryChannel();
    DeliveryChannel(Aws::Utils::Json::JsonView jsonValue);
    DeliveryChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery channel. By default, AWS Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline DeliveryChannel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline DeliveryChannel& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
     */
    inline DeliveryChannel& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which AWS Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another AWS account, that bucket must have policies that grant access
     * permissions to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the AWS Config Developer Guide.</p>
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
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which AWS Config
     * sends notifications about configuration changes.</p> <p>If you choose a topic
     * from another account, the topic must have policies that grant access permissions
     * to AWS Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the AWS Config Developer Guide.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}


    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline const ConfigSnapshotDeliveryProperties& GetConfigSnapshotDeliveryProperties() const{ return m_configSnapshotDeliveryProperties; }

    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline bool ConfigSnapshotDeliveryPropertiesHasBeenSet() const { return m_configSnapshotDeliveryPropertiesHasBeenSet; }

    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = value; }

    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = std::move(value); }

    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { SetConfigSnapshotDeliveryProperties(value); return *this;}

    /**
     * <p>The options for how often AWS Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { SetConfigSnapshotDeliveryProperties(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet;

    ConfigSnapshotDeliveryProperties m_configSnapshotDeliveryProperties;
    bool m_configSnapshotDeliveryPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
