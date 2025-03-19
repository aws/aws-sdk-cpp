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
    AWS_CONFIGSERVICE_API DeliveryChannel() = default;
    AWS_CONFIGSERVICE_API DeliveryChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DeliveryChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the delivery channel. By default, Config assigns the name
     * "default" when creating the delivery channel. To change the delivery channel
     * name, you must use the DeleteDeliveryChannel action to delete your current
     * delivery channel, and then you must use the PutDeliveryChannel command to create
     * a delivery channel that has the desired name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeliveryChannel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to which Config delivers configuration
     * snapshots and configuration history files.</p> <p>If you specify a bucket that
     * belongs to another Amazon Web Services account, that bucket must have policies
     * that grant access permissions to Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-policy.html">Permissions
     * for the Amazon S3 Bucket</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    DeliveryChannel& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    DeliveryChannel& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS ) KMS key
     * (KMS key) used to encrypt objects delivered by Config. Must belong to the same
     * Region as the destination S3 bucket.</p>
     */
    inline const Aws::String& GetS3KmsKeyArn() const { return m_s3KmsKeyArn; }
    inline bool S3KmsKeyArnHasBeenSet() const { return m_s3KmsKeyArnHasBeenSet; }
    template<typename S3KmsKeyArnT = Aws::String>
    void SetS3KmsKeyArn(S3KmsKeyArnT&& value) { m_s3KmsKeyArnHasBeenSet = true; m_s3KmsKeyArn = std::forward<S3KmsKeyArnT>(value); }
    template<typename S3KmsKeyArnT = Aws::String>
    DeliveryChannel& WithS3KmsKeyArn(S3KmsKeyArnT&& value) { SetS3KmsKeyArn(std::forward<S3KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which Config sends
     * notifications about configuration changes.</p> <p>If you choose a topic from
     * another account, the topic must have policies that grant access permissions to
     * Config. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/sns-topic-policy.html">Permissions
     * for the Amazon SNS Topic</a> in the <i>Config Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const { return m_snsTopicARN; }
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }
    template<typename SnsTopicARNT = Aws::String>
    void SetSnsTopicARN(SnsTopicARNT&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::forward<SnsTopicARNT>(value); }
    template<typename SnsTopicARNT = Aws::String>
    DeliveryChannel& WithSnsTopicARN(SnsTopicARNT&& value) { SetSnsTopicARN(std::forward<SnsTopicARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for how often Config delivers configuration snapshots to the
     * Amazon S3 bucket.</p>
     */
    inline const ConfigSnapshotDeliveryProperties& GetConfigSnapshotDeliveryProperties() const { return m_configSnapshotDeliveryProperties; }
    inline bool ConfigSnapshotDeliveryPropertiesHasBeenSet() const { return m_configSnapshotDeliveryPropertiesHasBeenSet; }
    template<typename ConfigSnapshotDeliveryPropertiesT = ConfigSnapshotDeliveryProperties>
    void SetConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryPropertiesT&& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = std::forward<ConfigSnapshotDeliveryPropertiesT>(value); }
    template<typename ConfigSnapshotDeliveryPropertiesT = ConfigSnapshotDeliveryProperties>
    DeliveryChannel& WithConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryPropertiesT&& value) { SetConfigSnapshotDeliveryProperties(std::forward<ConfigSnapshotDeliveryPropertiesT>(value)); return *this;}
    ///@}
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
