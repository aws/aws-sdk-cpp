/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/SnowflakeRoleConfiguration.h>
#include <aws/firehose/model/SnowflakeDataLoadingOption.h>
#include <aws/firehose/model/SnowflakeVpcConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/SnowflakeRetryOptions.h>
#include <aws/firehose/model/SnowflakeS3BackupMode.h>
#include <aws/firehose/model/S3DestinationDescription.h>
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
   * <p>Optional Snowflake destination description</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeDestinationDescription">AWS
   * API Reference</a></p>
   */
  class SnowflakeDestinationDescription
  {
  public:
    AWS_FIREHOSE_API SnowflakeDestinationDescription();
    AWS_FIREHOSE_API SnowflakeDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline const Aws::String& GetAccountUrl() const{ return m_accountUrl; }
    inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }
    inline void SetAccountUrl(const Aws::String& value) { m_accountUrlHasBeenSet = true; m_accountUrl = value; }
    inline void SetAccountUrl(Aws::String&& value) { m_accountUrlHasBeenSet = true; m_accountUrl = std::move(value); }
    inline void SetAccountUrl(const char* value) { m_accountUrlHasBeenSet = true; m_accountUrl.assign(value); }
    inline SnowflakeDestinationDescription& WithAccountUrl(const Aws::String& value) { SetAccountUrl(value); return *this;}
    inline SnowflakeDestinationDescription& WithAccountUrl(Aws::String&& value) { SetAccountUrl(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithAccountUrl(const char* value) { SetAccountUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline SnowflakeDestinationDescription& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline SnowflakeDestinationDescription& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline SnowflakeDestinationDescription& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline SnowflakeDestinationDescription& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline SnowflakeDestinationDescription& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline SnowflakeDestinationDescription& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline SnowflakeDestinationDescription& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline SnowflakeDestinationDescription& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline const SnowflakeRoleConfiguration& GetSnowflakeRoleConfiguration() const{ return m_snowflakeRoleConfiguration; }
    inline bool SnowflakeRoleConfigurationHasBeenSet() const { return m_snowflakeRoleConfigurationHasBeenSet; }
    inline void SetSnowflakeRoleConfiguration(const SnowflakeRoleConfiguration& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = value; }
    inline void SetSnowflakeRoleConfiguration(SnowflakeRoleConfiguration&& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = std::move(value); }
    inline SnowflakeDestinationDescription& WithSnowflakeRoleConfiguration(const SnowflakeRoleConfiguration& value) { SetSnowflakeRoleConfiguration(value); return *this;}
    inline SnowflakeDestinationDescription& WithSnowflakeRoleConfiguration(SnowflakeRoleConfiguration&& value) { SetSnowflakeRoleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline const SnowflakeDataLoadingOption& GetDataLoadingOption() const{ return m_dataLoadingOption; }
    inline bool DataLoadingOptionHasBeenSet() const { return m_dataLoadingOptionHasBeenSet; }
    inline void SetDataLoadingOption(const SnowflakeDataLoadingOption& value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = value; }
    inline void SetDataLoadingOption(SnowflakeDataLoadingOption&& value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = std::move(value); }
    inline SnowflakeDestinationDescription& WithDataLoadingOption(const SnowflakeDataLoadingOption& value) { SetDataLoadingOption(value); return *this;}
    inline SnowflakeDestinationDescription& WithDataLoadingOption(SnowflakeDataLoadingOption&& value) { SetDataLoadingOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the record metadata column</p>
     */
    inline const Aws::String& GetMetaDataColumnName() const{ return m_metaDataColumnName; }
    inline bool MetaDataColumnNameHasBeenSet() const { return m_metaDataColumnNameHasBeenSet; }
    inline void SetMetaDataColumnName(const Aws::String& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = value; }
    inline void SetMetaDataColumnName(Aws::String&& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = std::move(value); }
    inline void SetMetaDataColumnName(const char* value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName.assign(value); }
    inline SnowflakeDestinationDescription& WithMetaDataColumnName(const Aws::String& value) { SetMetaDataColumnName(value); return *this;}
    inline SnowflakeDestinationDescription& WithMetaDataColumnName(Aws::String&& value) { SetMetaDataColumnName(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithMetaDataColumnName(const char* value) { SetMetaDataColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the record content column</p>
     */
    inline const Aws::String& GetContentColumnName() const{ return m_contentColumnName; }
    inline bool ContentColumnNameHasBeenSet() const { return m_contentColumnNameHasBeenSet; }
    inline void SetContentColumnName(const Aws::String& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = value; }
    inline void SetContentColumnName(Aws::String&& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = std::move(value); }
    inline void SetContentColumnName(const char* value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName.assign(value); }
    inline SnowflakeDestinationDescription& WithContentColumnName(const Aws::String& value) { SetContentColumnName(value); return *this;}
    inline SnowflakeDestinationDescription& WithContentColumnName(Aws::String&& value) { SetContentColumnName(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithContentColumnName(const char* value) { SetContentColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline const SnowflakeVpcConfiguration& GetSnowflakeVpcConfiguration() const{ return m_snowflakeVpcConfiguration; }
    inline bool SnowflakeVpcConfigurationHasBeenSet() const { return m_snowflakeVpcConfigurationHasBeenSet; }
    inline void SetSnowflakeVpcConfiguration(const SnowflakeVpcConfiguration& value) { m_snowflakeVpcConfigurationHasBeenSet = true; m_snowflakeVpcConfiguration = value; }
    inline void SetSnowflakeVpcConfiguration(SnowflakeVpcConfiguration&& value) { m_snowflakeVpcConfigurationHasBeenSet = true; m_snowflakeVpcConfiguration = std::move(value); }
    inline SnowflakeDestinationDescription& WithSnowflakeVpcConfiguration(const SnowflakeVpcConfiguration& value) { SetSnowflakeVpcConfiguration(value); return *this;}
    inline SnowflakeDestinationDescription& WithSnowflakeVpcConfiguration(SnowflakeVpcConfiguration&& value) { SetSnowflakeVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline SnowflakeDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline SnowflakeDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline SnowflakeDestinationDescription& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline SnowflakeDestinationDescription& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline SnowflakeDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline SnowflakeDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline SnowflakeDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline const SnowflakeRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const SnowflakeRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(SnowflakeRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline SnowflakeDestinationDescription& WithRetryOptions(const SnowflakeRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline SnowflakeDestinationDescription& WithRetryOptions(SnowflakeRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline const SnowflakeS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const SnowflakeS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(SnowflakeS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline SnowflakeDestinationDescription& WithS3BackupMode(const SnowflakeS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline SnowflakeDestinationDescription& WithS3BackupMode(SnowflakeS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }
    inline SnowflakeDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}
    inline SnowflakeDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for Snowflake. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const{ return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    inline void SetSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = value; }
    inline void SetSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::move(value); }
    inline SnowflakeDestinationDescription& WithSecretsManagerConfiguration(const SecretsManagerConfiguration& value) { SetSecretsManagerConfiguration(value); return *this;}
    inline SnowflakeDestinationDescription& WithSecretsManagerConfiguration(SecretsManagerConfiguration&& value) { SetSecretsManagerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the buffering to perform before delivering data to the Snowflake
     * destination. If you do not specify any value, Firehose uses the default values.
     * </p>
     */
    inline const SnowflakeBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const SnowflakeBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(SnowflakeBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline SnowflakeDestinationDescription& WithBufferingHints(const SnowflakeBufferingHints& value) { SetBufferingHints(value); return *this;}
    inline SnowflakeDestinationDescription& WithBufferingHints(SnowflakeBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountUrl;
    bool m_accountUrlHasBeenSet = false;

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

    SnowflakeDataLoadingOption m_dataLoadingOption;
    bool m_dataLoadingOptionHasBeenSet = false;

    Aws::String m_metaDataColumnName;
    bool m_metaDataColumnNameHasBeenSet = false;

    Aws::String m_contentColumnName;
    bool m_contentColumnNameHasBeenSet = false;

    SnowflakeVpcConfiguration m_snowflakeVpcConfiguration;
    bool m_snowflakeVpcConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SnowflakeRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    SnowflakeS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;

    SnowflakeBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
