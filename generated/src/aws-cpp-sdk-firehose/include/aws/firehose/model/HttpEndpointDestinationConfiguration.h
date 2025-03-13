/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/HttpEndpointConfiguration.h>
#include <aws/firehose/model/HttpEndpointBufferingHints.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/HttpEndpointRequestConfiguration.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/HttpEndpointRetryOptions.h>
#include <aws/firehose/model/HttpEndpointS3BackupMode.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
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
   * <p>Describes the configuration of the HTTP endpoint destination.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpEndpointDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API HttpEndpointDestinationConfiguration() = default;
    AWS_FIREHOSE_API HttpEndpointDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the HTTP endpoint selected as the destination.</p>
     */
    inline const HttpEndpointConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = HttpEndpointConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = HttpEndpointConfiguration>
    HttpEndpointDestinationConfiguration& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options that can be used before data is delivered to the
     * specified destination. Firehose treats these options as hints, and it might
     * choose to use more optimal values. The <code>SizeInMBs</code> and
     * <code>IntervalInSeconds</code> parameters are optional. However, if you specify
     * a value for one of them, you must also provide a value for the other. </p>
     */
    inline const HttpEndpointBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = HttpEndpointBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = HttpEndpointBufferingHints>
    HttpEndpointDestinationConfiguration& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    HttpEndpointDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the request sent to the HTTP endpoint that is specified
     * as the destination.</p>
     */
    inline const HttpEndpointRequestConfiguration& GetRequestConfiguration() const { return m_requestConfiguration; }
    inline bool RequestConfigurationHasBeenSet() const { return m_requestConfigurationHasBeenSet; }
    template<typename RequestConfigurationT = HttpEndpointRequestConfiguration>
    void SetRequestConfiguration(RequestConfigurationT&& value) { m_requestConfigurationHasBeenSet = true; m_requestConfiguration = std::forward<RequestConfigurationT>(value); }
    template<typename RequestConfigurationT = HttpEndpointRequestConfiguration>
    HttpEndpointDestinationConfiguration& WithRequestConfiguration(RequestConfigurationT&& value) { SetRequestConfiguration(std::forward<RequestConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    HttpEndpointDestinationConfiguration& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Firehose uses this IAM role for all the permissions that the delivery stream
     * needs.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    HttpEndpointDestinationConfiguration& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the retry behavior in case Firehose is unable to deliver data to
     * the specified HTTP endpoint destination, or if it doesn't receive a valid
     * acknowledgment of receipt from the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = HttpEndpointRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = HttpEndpointRetryOptions>
    HttpEndpointDestinationConfiguration& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the S3 bucket backup options for the data that Firehose delivers to
     * the HTTP endpoint destination. You can back up all documents
     * (<code>AllData</code>) or only the documents that Firehose could not deliver to
     * the specified HTTP endpoint destination (<code>FailedDataOnly</code>).</p>
     */
    inline HttpEndpointS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(HttpEndpointS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline HttpEndpointDestinationConfiguration& WithS3BackupMode(HttpEndpointS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    HttpEndpointDestinationConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for HTTP Endpoint
     * destination. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    HttpEndpointDestinationConfiguration& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}
  private:

    HttpEndpointConfiguration m_endpointConfiguration;
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

    HttpEndpointS3BackupMode m_s3BackupMode{HttpEndpointS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
