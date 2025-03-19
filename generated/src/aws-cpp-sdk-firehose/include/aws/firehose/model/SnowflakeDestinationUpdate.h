/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/SnowflakeRoleConfiguration.h>
#include <aws/firehose/model/SnowflakeDataLoadingOption.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/SnowflakeRetryOptions.h>
#include <aws/firehose/model/SnowflakeS3BackupMode.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/SecretsManagerConfiguration.h>
#include <aws/firehose/model/SnowflakeBufferingHints.h>
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
   * <p>Update to configuration settings</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class SnowflakeDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API SnowflakeDestinationUpdate() = default;
    AWS_FIREHOSE_API SnowflakeDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline const Aws::String& GetAccountUrl() const { return m_accountUrl; }
    inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }
    template<typename AccountUrlT = Aws::String>
    void SetAccountUrl(AccountUrlT&& value) { m_accountUrlHasBeenSet = true; m_accountUrl = std::forward<AccountUrlT>(value); }
    template<typename AccountUrlT = Aws::String>
    SnowflakeDestinationUpdate& WithAccountUrl(AccountUrlT&& value) { SetAccountUrl(std::forward<AccountUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    SnowflakeDestinationUpdate& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetKeyPassphrase() const { return m_keyPassphrase; }
    inline bool KeyPassphraseHasBeenSet() const { return m_keyPassphraseHasBeenSet; }
    template<typename KeyPassphraseT = Aws::String>
    void SetKeyPassphrase(KeyPassphraseT&& value) { m_keyPassphraseHasBeenSet = true; m_keyPassphrase = std::forward<KeyPassphraseT>(value); }
    template<typename KeyPassphraseT = Aws::String>
    SnowflakeDestinationUpdate& WithKeyPassphrase(KeyPassphraseT&& value) { SetKeyPassphrase(std::forward<KeyPassphraseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    SnowflakeDestinationUpdate& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    SnowflakeDestinationUpdate& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    SnowflakeDestinationUpdate& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    SnowflakeDestinationUpdate& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline const SnowflakeRoleConfiguration& GetSnowflakeRoleConfiguration() const { return m_snowflakeRoleConfiguration; }
    inline bool SnowflakeRoleConfigurationHasBeenSet() const { return m_snowflakeRoleConfigurationHasBeenSet; }
    template<typename SnowflakeRoleConfigurationT = SnowflakeRoleConfiguration>
    void SetSnowflakeRoleConfiguration(SnowflakeRoleConfigurationT&& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = std::forward<SnowflakeRoleConfigurationT>(value); }
    template<typename SnowflakeRoleConfigurationT = SnowflakeRoleConfiguration>
    SnowflakeDestinationUpdate& WithSnowflakeRoleConfiguration(SnowflakeRoleConfigurationT&& value) { SetSnowflakeRoleConfiguration(std::forward<SnowflakeRoleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> JSON keys mapped to table column names or choose to split the JSON payload
     * where content is mapped to a record content column and source metadata is mapped
     * to a record metadata column.</p>
     */
    inline SnowflakeDataLoadingOption GetDataLoadingOption() const { return m_dataLoadingOption; }
    inline bool DataLoadingOptionHasBeenSet() const { return m_dataLoadingOptionHasBeenSet; }
    inline void SetDataLoadingOption(SnowflakeDataLoadingOption value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = value; }
    inline SnowflakeDestinationUpdate& WithDataLoadingOption(SnowflakeDataLoadingOption value) { SetDataLoadingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the record metadata column</p>
     */
    inline const Aws::String& GetMetaDataColumnName() const { return m_metaDataColumnName; }
    inline bool MetaDataColumnNameHasBeenSet() const { return m_metaDataColumnNameHasBeenSet; }
    template<typename MetaDataColumnNameT = Aws::String>
    void SetMetaDataColumnName(MetaDataColumnNameT&& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = std::forward<MetaDataColumnNameT>(value); }
    template<typename MetaDataColumnNameT = Aws::String>
    SnowflakeDestinationUpdate& WithMetaDataColumnName(MetaDataColumnNameT&& value) { SetMetaDataColumnName(std::forward<MetaDataColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the content metadata column</p>
     */
    inline const Aws::String& GetContentColumnName() const { return m_contentColumnName; }
    inline bool ContentColumnNameHasBeenSet() const { return m_contentColumnNameHasBeenSet; }
    template<typename ContentColumnNameT = Aws::String>
    void SetContentColumnName(ContentColumnNameT&& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = std::forward<ContentColumnNameT>(value); }
    template<typename ContentColumnNameT = Aws::String>
    SnowflakeDestinationUpdate& WithContentColumnName(ContentColumnNameT&& value) { SetContentColumnName(std::forward<ContentColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    SnowflakeDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    SnowflakeDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    SnowflakeDestinationUpdate& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how long Firehose retries sending data to the New Relic HTTP
     * endpoint. After sending data, Firehose first waits for an acknowledgment from
     * the HTTP endpoint. If an error occurs or the acknowledgment doesn’t arrive
     * within the acknowledgment timeout period, Firehose starts the retry duration
     * counter. It keeps retrying until the retry duration expires. After that,
     * Firehose considers it a data delivery failure and backs up the data to your
     * Amazon S3 bucket. Every time that Firehose sends data to the HTTP endpoint
     * (either the initial attempt or a retry), it restarts the acknowledgement timeout
     * counter and waits for an acknowledgement from the HTTP endpoint. Even if the
     * retry duration expires, Firehose still waits for the acknowledgment until it
     * receives it or the acknowledgement timeout period is reached. If the
     * acknowledgment times out, Firehose determines whether there's time left in the
     * retry counter. If there is time left, it retries again and repeats the logic
     * until it receives an acknowledgment or determines that the retry time has
     * expired. If you don't want Firehose to retry sending data, set this value to
     * 0.</p>
     */
    inline const SnowflakeRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = SnowflakeRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = SnowflakeRetryOptions>
    SnowflakeDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose an S3 backup mode. Once you set the mode as <code>AllData</code>, you
     * can not change it to <code>FailedDataOnly</code>.</p>
     */
    inline SnowflakeS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(SnowflakeS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline SnowflakeDestinationUpdate& WithS3BackupMode(SnowflakeS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationUpdate& GetS3Update() const { return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    template<typename S3UpdateT = S3DestinationUpdate>
    void SetS3Update(S3UpdateT&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::forward<S3UpdateT>(value); }
    template<typename S3UpdateT = S3DestinationUpdate>
    SnowflakeDestinationUpdate& WithS3Update(S3UpdateT&& value) { SetS3Update(std::forward<S3UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the Secrets Manager configuration in Snowflake. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    SnowflakeDestinationUpdate& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the buffering to perform before delivering data to the Snowflake
     * destination. </p>
     */
    inline const SnowflakeBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = SnowflakeBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = SnowflakeBufferingHints>
    SnowflakeDestinationUpdate& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountUrl;
    bool m_accountUrlHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_keyPassphrase;
    bool m_keyPassphraseHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    SnowflakeRoleConfiguration m_snowflakeRoleConfiguration;
    bool m_snowflakeRoleConfigurationHasBeenSet = false;

    SnowflakeDataLoadingOption m_dataLoadingOption{SnowflakeDataLoadingOption::NOT_SET};
    bool m_dataLoadingOptionHasBeenSet = false;

    Aws::String m_metaDataColumnName;
    bool m_metaDataColumnNameHasBeenSet = false;

    Aws::String m_contentColumnName;
    bool m_contentColumnNameHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SnowflakeRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    SnowflakeS3BackupMode m_s3BackupMode{SnowflakeS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;

    SnowflakeBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
