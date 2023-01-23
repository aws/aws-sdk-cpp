/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/LogType.h>
#include <aws/lex-models/model/Destination.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Settings used to configure delivery mode and destination for conversation
   * logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/LogSettingsRequest">AWS
   * API Reference</a></p>
   */
  class LogSettingsRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest();
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline LogSettingsRequest& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline LogSettingsRequest& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline LogSettingsRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline LogSettingsRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline LogSettingsRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline LogSettingsRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline LogSettingsRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline LogSettingsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline LogSettingsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline LogSettingsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
