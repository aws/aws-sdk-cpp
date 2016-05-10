/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A logical container used for storing the configuration changes of an AWS
   * resource.</p>
   */
  class AWS_CONFIGSERVICE_API DeliveryChannel
  {
  public:
    DeliveryChannel();
    DeliveryChannel(const Aws::Utils::Json::JsonValue& jsonValue);
    DeliveryChannel& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline DeliveryChannel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline DeliveryChannel& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel. By default, AWS Config automatically
     * assigns the name &quot;default&quot; when creating the delivery channel. You
     * cannot change the assigned name. </p>
     */
    inline DeliveryChannel& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline DeliveryChannel& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline DeliveryChannel& WithS3BucketName(Aws::String&& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used to store configuration history for the
     * delivery channel.</p>
     */
    inline DeliveryChannel& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

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
    inline DeliveryChannel& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannel& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that AWS Config delivers
     * notifications to.</p>
     */
    inline DeliveryChannel& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}

    
    inline const ConfigSnapshotDeliveryProperties& GetConfigSnapshotDeliveryProperties() const{ return m_configSnapshotDeliveryProperties; }

    
    inline void SetConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = value; }

    
    inline void SetConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { m_configSnapshotDeliveryPropertiesHasBeenSet = true; m_configSnapshotDeliveryProperties = value; }

    
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(const ConfigSnapshotDeliveryProperties& value) { SetConfigSnapshotDeliveryProperties(value); return *this;}

    
    inline DeliveryChannel& WithConfigSnapshotDeliveryProperties(ConfigSnapshotDeliveryProperties&& value) { SetConfigSnapshotDeliveryProperties(value); return *this;}

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
