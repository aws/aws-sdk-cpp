/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The log configuration for the results of the execute command actions. The
   * logs can be sent to CloudWatch Logs or an Amazon S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExecuteCommandLogConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecuteCommandLogConfiguration
  {
  public:
    AWS_ECS_API ExecuteCommandLogConfiguration();
    AWS_ECS_API ExecuteCommandLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ExecuteCommandLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group to send logs to.</p>  <p>The
     * CloudWatch log group must already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}


    /**
     * <p>Determines whether to use encryption on the CloudWatch logs. If not
     * specified, encryption will be disabled.</p>
     */
    inline bool GetCloudWatchEncryptionEnabled() const{ return m_cloudWatchEncryptionEnabled; }

    /**
     * <p>Determines whether to use encryption on the CloudWatch logs. If not
     * specified, encryption will be disabled.</p>
     */
    inline bool CloudWatchEncryptionEnabledHasBeenSet() const { return m_cloudWatchEncryptionEnabledHasBeenSet; }

    /**
     * <p>Determines whether to use encryption on the CloudWatch logs. If not
     * specified, encryption will be disabled.</p>
     */
    inline void SetCloudWatchEncryptionEnabled(bool value) { m_cloudWatchEncryptionEnabledHasBeenSet = true; m_cloudWatchEncryptionEnabled = value; }

    /**
     * <p>Determines whether to use encryption on the CloudWatch logs. If not
     * specified, encryption will be disabled.</p>
     */
    inline ExecuteCommandLogConfiguration& WithCloudWatchEncryptionEnabled(bool value) { SetCloudWatchEncryptionEnabled(value); return *this;}


    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket to send logs to.</p>  <p>The S3 bucket must
     * already be created.</p> 
     */
    inline ExecuteCommandLogConfiguration& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>Determines whether to use encryption on the S3 logs. If not specified,
     * encryption is not used.</p>
     */
    inline bool GetS3EncryptionEnabled() const{ return m_s3EncryptionEnabled; }

    /**
     * <p>Determines whether to use encryption on the S3 logs. If not specified,
     * encryption is not used.</p>
     */
    inline bool S3EncryptionEnabledHasBeenSet() const { return m_s3EncryptionEnabledHasBeenSet; }

    /**
     * <p>Determines whether to use encryption on the S3 logs. If not specified,
     * encryption is not used.</p>
     */
    inline void SetS3EncryptionEnabled(bool value) { m_s3EncryptionEnabledHasBeenSet = true; m_s3EncryptionEnabled = value; }

    /**
     * <p>Determines whether to use encryption on the S3 logs. If not specified,
     * encryption is not used.</p>
     */
    inline ExecuteCommandLogConfiguration& WithS3EncryptionEnabled(bool value) { SetS3EncryptionEnabled(value); return *this;}


    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline ExecuteCommandLogConfiguration& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline ExecuteCommandLogConfiguration& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>An optional folder in the S3 bucket to place logs in.</p>
     */
    inline ExecuteCommandLogConfiguration& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    bool m_cloudWatchEncryptionEnabled;
    bool m_cloudWatchEncryptionEnabledHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    bool m_s3EncryptionEnabled;
    bool m_s3EncryptionEnabledHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
