﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/HttpEndpointDescription.h>
#include <aws/firehose/model/HttpEndpointBufferingHints.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/HttpEndpointRequestConfiguration.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/HttpEndpointRetryOptions.h>
#include <aws/firehose/model/HttpEndpointS3BackupMode.h>
#include <aws/firehose/model/S3DestinationDescription.h>
#include <aws/firehose/model/SecretsManagerConfiguration.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the HTTP endpoint destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointDestinationDescription">AWS
   * API Reference</a></p>
   */
  class HttpEndpointDestinationDescription
  {
  public:
    AWS_FIREHOSE_API HttpEndpointDestinationDescription();
    AWS_FIREHOSE_API HttpEndpointDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDescription& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const HttpEndpointDescription& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(HttpEndpointDescription&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline HttpEndpointDestinationDescription& WithEndpointConfiguration(const HttpEndpointDescription& value) { SetEndpointConfiguration(value); return *this;}
    inline HttpEndpointDestinationDescription& WithEndpointConfiguration(HttpEndpointDescription&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes buffering options that can be applied to the data before it is
     * delivered to the HTTPS endpoint destination. Firehose teats these options as
     * hints, and it might choose to use more optimal values. The
     * <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are
     * optional. However, if specify a value for one of them, you must also provide a
     * value for the other. </p>
     */
    inline const HttpEndpointBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const HttpEndpointBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(HttpEndpointBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline HttpEndpointDestinationDescription& WithBufferingHints(const HttpEndpointBufferingHints& value) { SetBufferingHints(value); return *this;}
    inline HttpEndpointDestinationDescription& WithBufferingHints(HttpEndpointBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline HttpEndpointDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline HttpEndpointDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of request sent to the HTTP endpoint specified as the
     * destination.</p>
     */
    inline const HttpEndpointRequestConfiguration& GetRequestConfiguration() const{ return m_requestConfiguration; }
    inline bool RequestConfigurationHasBeenSet() const { return m_requestConfigurationHasBeenSet; }
    inline void SetRequestConfiguration(const HttpEndpointRequestConfiguration& value) { m_requestConfigurationHasBeenSet = true; m_requestConfiguration = value; }
    inline void SetRequestConfiguration(HttpEndpointRequestConfiguration&& value) { m_requestConfigurationHasBeenSet = true; m_requestConfiguration = std::move(value); }
    inline HttpEndpointDestinationDescription& WithRequestConfiguration(const HttpEndpointRequestConfiguration& value) { SetRequestConfiguration(value); return *this;}
    inline HttpEndpointDestinationDescription& WithRequestConfiguration(HttpEndpointRequestConfiguration&& value) { SetRequestConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline HttpEndpointDestinationDescription& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline HttpEndpointDestinationDescription& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Firehose uses this IAM role for all the permissions that the delivery stream
     * needs.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline HttpEndpointDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline HttpEndpointDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline HttpEndpointDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the retry behavior in case Firehose is unable to deliver data to
     * the specified HTTP endpoint destination, or if it doesn't receive a valid
     * acknowledgment of receipt from the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const HttpEndpointRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(HttpEndpointRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline HttpEndpointDestinationDescription& WithRetryOptions(const HttpEndpointRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline HttpEndpointDestinationDescription& WithRetryOptions(HttpEndpointRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the S3 bucket backup options for the data that Kinesis Firehose
     * delivers to the HTTP endpoint destination. You can back up all documents
     * (<code>AllData</code>) or only the documents that Firehose could not deliver to
     * the specified HTTP endpoint destination (<code>FailedDataOnly</code>).</p>
     */
    inline const HttpEndpointS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const HttpEndpointS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(HttpEndpointS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline HttpEndpointDestinationDescription& WithS3BackupMode(const HttpEndpointS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline HttpEndpointDestinationDescription& WithS3BackupMode(HttpEndpointS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }
    inline HttpEndpointDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}
    inline HttpEndpointDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for HTTP Endpoint
     * destination. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const{ return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    inline void SetSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = value; }
    inline void SetSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::move(value); }
    inline HttpEndpointDestinationDescription& WithSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { SetSecretsManagerConfiguration(value); return *this;}
    inline HttpEndpointDestinationDescription& WithSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { SetSecretsManagerConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    HttpEndpointDescription m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    HttpEndpointBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    HttpEndpointRequestConfiguration m_requestConfiguration;
    bool m_requestConfigurationHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    HttpEndpointRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    HttpEndpointS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
