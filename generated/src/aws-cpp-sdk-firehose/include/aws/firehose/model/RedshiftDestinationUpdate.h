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
    AWS_FIREHOSE_API RedshiftDestinationUpdate();
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
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline RedshiftDestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline RedshiftDestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline RedshiftDestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database connection string.</p>
     */
    inline const Aws::String& GetClusterJDBCURL() const{ return m_clusterJDBCURL; }
    inline bool ClusterJDBCURLHasBeenSet() const { return m_clusterJDBCURLHasBeenSet; }
    inline void SetClusterJDBCURL(const Aws::String& value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL = value; }
    inline void SetClusterJDBCURL(Aws::String&& value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL = std::move(value); }
    inline void SetClusterJDBCURL(const char* value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL.assign(value); }
    inline RedshiftDestinationUpdate& WithClusterJDBCURL(const Aws::String& value) { SetClusterJDBCURL(value); return *this;}
    inline RedshiftDestinationUpdate& WithClusterJDBCURL(Aws::String&& value) { SetClusterJDBCURL(std::move(value)); return *this;}
    inline RedshiftDestinationUpdate& WithClusterJDBCURL(const char* value) { SetClusterJDBCURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline const CopyCommand& GetCopyCommand() const{ return m_copyCommand; }
    inline bool CopyCommandHasBeenSet() const { return m_copyCommandHasBeenSet; }
    inline void SetCopyCommand(const CopyCommand& value) { m_copyCommandHasBeenSet = true; m_copyCommand = value; }
    inline void SetCopyCommand(CopyCommand&& value) { m_copyCommandHasBeenSet = true; m_copyCommand = std::move(value); }
    inline RedshiftDestinationUpdate& WithCopyCommand(const CopyCommand& value) { SetCopyCommand(value); return *this;}
    inline RedshiftDestinationUpdate& WithCopyCommand(CopyCommand&& value) { SetCopyCommand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline RedshiftDestinationUpdate& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline RedshiftDestinationUpdate& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline RedshiftDestinationUpdate& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline RedshiftDestinationUpdate& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline RedshiftDestinationUpdate& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline RedshiftDestinationUpdate& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline const RedshiftRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const RedshiftRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(RedshiftRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline RedshiftDestinationUpdate& WithRetryOptions(const RedshiftRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline RedshiftDestinationUpdate& WithRetryOptions(RedshiftRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <code>RedshiftDestinationUpdate.S3Update</code> because the Amazon Redshift
     * <code>COPY</code> operation that reads from the S3 bucket doesn't support these
     * compression formats.</p>
     */
    inline const S3DestinationUpdate& GetS3Update() const{ return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    inline void SetS3Update(const S3DestinationUpdate& value) { m_s3UpdateHasBeenSet = true; m_s3Update = value; }
    inline void SetS3Update(S3DestinationUpdate&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::move(value); }
    inline RedshiftDestinationUpdate& WithS3Update(const S3DestinationUpdate& value) { SetS3Update(value); return *this;}
    inline RedshiftDestinationUpdate& WithS3Update(S3DestinationUpdate&& value) { SetS3Update(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline RedshiftDestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline RedshiftDestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can update a Firehose stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the Firehose stream to disable
     * it. </p>
     */
    inline const RedshiftS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const RedshiftS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(RedshiftS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline RedshiftDestinationUpdate& WithS3BackupMode(const RedshiftS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline RedshiftDestinationUpdate& WithS3BackupMode(RedshiftS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline const S3DestinationUpdate& GetS3BackupUpdate() const{ return m_s3BackupUpdate; }
    inline bool S3BackupUpdateHasBeenSet() const { return m_s3BackupUpdateHasBeenSet; }
    inline void SetS3BackupUpdate(const S3DestinationUpdate& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = value; }
    inline void SetS3BackupUpdate(S3DestinationUpdate&& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = std::move(value); }
    inline RedshiftDestinationUpdate& WithS3BackupUpdate(const S3DestinationUpdate& value) { SetS3BackupUpdate(value); return *this;}
    inline RedshiftDestinationUpdate& WithS3BackupUpdate(S3DestinationUpdate&& value) { SetS3BackupUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline RedshiftDestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline RedshiftDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for Amazon Redshift.
     * </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const{ return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    inline void SetSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = value; }
    inline void SetSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::move(value); }
    inline RedshiftDestinationUpdate& WithSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { SetSecretsManagerConfiguration(value); return *this;}
    inline RedshiftDestinationUpdate& WithSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { SetSecretsManagerConfiguration(std::move(value)); return *this;}
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

    RedshiftS3BackupMode m_s3BackupMode;
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
