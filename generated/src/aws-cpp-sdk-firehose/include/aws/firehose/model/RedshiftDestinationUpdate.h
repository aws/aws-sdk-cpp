/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/CopyCommand.h>
#include <aws/firehose/model/RedshiftRetryOptions.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/RedshiftS3BackupMode.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
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
   * <p>Describes an update for a destination in Amazon Redshift.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/RedshiftDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class RedshiftDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API RedshiftDestinationUpdate() = default;
    AWS_FIREHOSE_API RedshiftDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API RedshiftDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    RedshiftDestinationUpdate& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database connection string.</p>
     */
    inline const Aws::String& GetClusterJDBCURL() const { return m_clusterJDBCURL; }
    inline bool ClusterJDBCURLHasBeenSet() const { return m_clusterJDBCURLHasBeenSet; }
    template<typename ClusterJDBCURLT = Aws::String>
    void SetClusterJDBCURL(ClusterJDBCURLT&& value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL = std::forward<ClusterJDBCURLT>(value); }
    template<typename ClusterJDBCURLT = Aws::String>
    RedshiftDestinationUpdate& WithClusterJDBCURL(ClusterJDBCURLT&& value) { SetClusterJDBCURL(std::forward<ClusterJDBCURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline const CopyCommand& GetCopyCommand() const { return m_copyCommand; }
    inline bool CopyCommandHasBeenSet() const { return m_copyCommandHasBeenSet; }
    template<typename CopyCommandT = CopyCommand>
    void SetCopyCommand(CopyCommandT&& value) { m_copyCommandHasBeenSet = true; m_copyCommand = std::forward<CopyCommandT>(value); }
    template<typename CopyCommandT = CopyCommand>
    RedshiftDestinationUpdate& WithCopyCommand(CopyCommandT&& value) { SetCopyCommand(std::forward<CopyCommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    RedshiftDestinationUpdate& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user password.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    RedshiftDestinationUpdate& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline const RedshiftRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = RedshiftRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = RedshiftRetryOptions>
    RedshiftDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <code>RedshiftDestinationUpdate.S3Update</code> because the Amazon Redshift
     * <code>COPY</code> operation that reads from the S3 bucket doesn't support these
     * compression formats.</p>
     */
    inline const S3DestinationUpdate& GetS3Update() const { return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    template<typename S3UpdateT = S3DestinationUpdate>
    void SetS3Update(S3UpdateT&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::forward<S3UpdateT>(value); }
    template<typename S3UpdateT = S3DestinationUpdate>
    RedshiftDestinationUpdate& WithS3Update(S3UpdateT&& value) { SetS3Update(std::forward<S3UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    RedshiftDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can update a Firehose stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the Firehose stream to disable
     * it. </p>
     */
    inline RedshiftS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(RedshiftS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline RedshiftDestinationUpdate& WithS3BackupMode(RedshiftS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline const S3DestinationUpdate& GetS3BackupUpdate() const { return m_s3BackupUpdate; }
    inline bool S3BackupUpdateHasBeenSet() const { return m_s3BackupUpdateHasBeenSet; }
    template<typename S3BackupUpdateT = S3DestinationUpdate>
    void SetS3BackupUpdate(S3BackupUpdateT&& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = std::forward<S3BackupUpdateT>(value); }
    template<typename S3BackupUpdateT = S3DestinationUpdate>
    RedshiftDestinationUpdate& WithS3BackupUpdate(S3BackupUpdateT&& value) { SetS3BackupUpdate(std::forward<S3BackupUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    RedshiftDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for Amazon Redshift.
     * </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    RedshiftDestinationUpdate& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_clusterJDBCURL;
    bool m_clusterJDBCURLHasBeenSet = false;

    CopyCommand m_copyCommand;
    bool m_copyCommandHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    RedshiftRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    RedshiftS3BackupMode m_s3BackupMode{RedshiftS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationUpdate m_s3BackupUpdate;
    bool m_s3BackupUpdateHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
