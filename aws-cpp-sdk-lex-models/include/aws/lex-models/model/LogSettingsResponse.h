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
   * <p>The settings for conversation logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/LogSettingsResponse">AWS
   * API Reference</a></p>
   */
  class LogSettingsResponse
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsResponse();
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline LogSettingsResponse& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of logging that is enabled.</p>
     */
    inline LogSettingsResponse& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline LogSettingsResponse& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination where logs are delivered.</p>
     */
    inline LogSettingsResponse& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline LogSettingsResponse& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline LogSettingsResponse& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the key used to encrypt audio logs in an S3
     * bucket.</p>
     */
    inline LogSettingsResponse& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline LogSettingsResponse& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline LogSettingsResponse& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs are delivered.</p>
     */
    inline LogSettingsResponse& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline const Aws::String& GetResourcePrefix() const{ return m_resourcePrefix; }

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline bool ResourcePrefixHasBeenSet() const { return m_resourcePrefixHasBeenSet; }

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline void SetResourcePrefix(const Aws::String& value) { m_resourcePrefixHasBeenSet = true; m_resourcePrefix = value; }

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline void SetResourcePrefix(Aws::String&& value) { m_resourcePrefixHasBeenSet = true; m_resourcePrefix = std::move(value); }

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline void SetResourcePrefix(const char* value) { m_resourcePrefixHasBeenSet = true; m_resourcePrefix.assign(value); }

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline LogSettingsResponse& WithResourcePrefix(const Aws::String& value) { SetResourcePrefix(value); return *this;}

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline LogSettingsResponse& WithResourcePrefix(Aws::String&& value) { SetResourcePrefix(std::move(value)); return *this;}

    /**
     * <p>The resource prefix is the first part of the S3 object key within the S3
     * bucket that you specified to contain audio logs. For CloudWatch Logs it is the
     * prefix of the log stream name within the log group that you specified. </p>
     */
    inline LogSettingsResponse& WithResourcePrefix(const char* value) { SetResourcePrefix(value); return *this;}

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourcePrefix;
    bool m_resourcePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
