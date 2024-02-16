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
#include <aws/firehose/model/S3DestinationConfiguration.h>
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
   * <p>Configure Snowflake destination</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class SnowflakeDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration();
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline const Aws::String& GetAccountUrl() const{ return m_accountUrl; }

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline void SetAccountUrl(const Aws::String& value) { m_accountUrlHasBeenSet = true; m_accountUrl = value; }

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline void SetAccountUrl(Aws::String&& value) { m_accountUrlHasBeenSet = true; m_accountUrl = std::move(value); }

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline void SetAccountUrl(const char* value) { m_accountUrlHasBeenSet = true; m_accountUrl.assign(value); }

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline SnowflakeDestinationConfiguration& WithAccountUrl(const Aws::String& value) { SetAccountUrl(value); return *this;}

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline SnowflakeDestinationConfiguration& WithAccountUrl(Aws::String&& value) { SetAccountUrl(std::move(value)); return *this;}

    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline SnowflakeDestinationConfiguration& WithAccountUrl(const char* value) { SetAccountUrl(value); return *this;}


    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}


    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetKeyPassphrase() const{ return m_keyPassphrase; }

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline bool KeyPassphraseHasBeenSet() const { return m_keyPassphraseHasBeenSet; }

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetKeyPassphrase(const Aws::String& value) { m_keyPassphraseHasBeenSet = true; m_keyPassphrase = value; }

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetKeyPassphrase(Aws::String&& value) { m_keyPassphraseHasBeenSet = true; m_keyPassphrase = std::move(value); }

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline void SetKeyPassphrase(const char* value) { m_keyPassphraseHasBeenSet = true; m_keyPassphrase.assign(value); }

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithKeyPassphrase(const Aws::String& value) { SetKeyPassphrase(value); return *this;}

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithKeyPassphrase(Aws::String&& value) { SetKeyPassphrase(std::move(value)); return *this;}

    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline SnowflakeDestinationConfiguration& WithKeyPassphrase(const char* value) { SetKeyPassphrase(value); return *this;}


    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline SnowflakeDestinationConfiguration& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline SnowflakeDestinationConfiguration& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline SnowflakeDestinationConfiguration& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline SnowflakeDestinationConfiguration& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline SnowflakeDestinationConfiguration& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline SnowflakeDestinationConfiguration& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline SnowflakeDestinationConfiguration& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline SnowflakeDestinationConfiguration& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline SnowflakeDestinationConfiguration& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline SnowflakeDestinationConfiguration& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline SnowflakeDestinationConfiguration& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline SnowflakeDestinationConfiguration& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline const SnowflakeRoleConfiguration& GetSnowflakeRoleConfiguration() const{ return m_snowflakeRoleConfiguration; }

    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline bool SnowflakeRoleConfigurationHasBeenSet() const { return m_snowflakeRoleConfigurationHasBeenSet; }

    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline void SetSnowflakeRoleConfiguration(const SnowflakeRoleConfiguration& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = value; }

    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline void SetSnowflakeRoleConfiguration(SnowflakeRoleConfiguration&& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = std::move(value); }

    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline SnowflakeDestinationConfiguration& WithSnowflakeRoleConfiguration(const SnowflakeRoleConfiguration& value) { SetSnowflakeRoleConfiguration(value); return *this;}

    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline SnowflakeDestinationConfiguration& WithSnowflakeRoleConfiguration(SnowflakeRoleConfiguration&& value) { SetSnowflakeRoleConfiguration(std::move(value)); return *this;}


    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline const SnowflakeDataLoadingOption& GetDataLoadingOption() const{ return m_dataLoadingOption; }

    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline bool DataLoadingOptionHasBeenSet() const { return m_dataLoadingOptionHasBeenSet; }

    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline void SetDataLoadingOption(const SnowflakeDataLoadingOption& value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = value; }

    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline void SetDataLoadingOption(SnowflakeDataLoadingOption&& value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = std::move(value); }

    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline SnowflakeDestinationConfiguration& WithDataLoadingOption(const SnowflakeDataLoadingOption& value) { SetDataLoadingOption(value); return *this;}

    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline SnowflakeDestinationConfiguration& WithDataLoadingOption(SnowflakeDataLoadingOption&& value) { SetDataLoadingOption(std::move(value)); return *this;}


    /**
     * <p>The name of the record metadata column</p>
     */
    inline const Aws::String& GetMetaDataColumnName() const{ return m_metaDataColumnName; }

    /**
     * <p>The name of the record metadata column</p>
     */
    inline bool MetaDataColumnNameHasBeenSet() const { return m_metaDataColumnNameHasBeenSet; }

    /**
     * <p>The name of the record metadata column</p>
     */
    inline void SetMetaDataColumnName(const Aws::String& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = value; }

    /**
     * <p>The name of the record metadata column</p>
     */
    inline void SetMetaDataColumnName(Aws::String&& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = std::move(value); }

    /**
     * <p>The name of the record metadata column</p>
     */
    inline void SetMetaDataColumnName(const char* value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName.assign(value); }

    /**
     * <p>The name of the record metadata column</p>
     */
    inline SnowflakeDestinationConfiguration& WithMetaDataColumnName(const Aws::String& value) { SetMetaDataColumnName(value); return *this;}

    /**
     * <p>The name of the record metadata column</p>
     */
    inline SnowflakeDestinationConfiguration& WithMetaDataColumnName(Aws::String&& value) { SetMetaDataColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the record metadata column</p>
     */
    inline SnowflakeDestinationConfiguration& WithMetaDataColumnName(const char* value) { SetMetaDataColumnName(value); return *this;}


    /**
     * <p>The name of the record content column</p>
     */
    inline const Aws::String& GetContentColumnName() const{ return m_contentColumnName; }

    /**
     * <p>The name of the record content column</p>
     */
    inline bool ContentColumnNameHasBeenSet() const { return m_contentColumnNameHasBeenSet; }

    /**
     * <p>The name of the record content column</p>
     */
    inline void SetContentColumnName(const Aws::String& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = value; }

    /**
     * <p>The name of the record content column</p>
     */
    inline void SetContentColumnName(Aws::String&& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = std::move(value); }

    /**
     * <p>The name of the record content column</p>
     */
    inline void SetContentColumnName(const char* value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName.assign(value); }

    /**
     * <p>The name of the record content column</p>
     */
    inline SnowflakeDestinationConfiguration& WithContentColumnName(const Aws::String& value) { SetContentColumnName(value); return *this;}

    /**
     * <p>The name of the record content column</p>
     */
    inline SnowflakeDestinationConfiguration& WithContentColumnName(Aws::String&& value) { SetContentColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the record content column</p>
     */
    inline SnowflakeDestinationConfiguration& WithContentColumnName(const char* value) { SetContentColumnName(value); return *this;}


    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline const SnowflakeVpcConfiguration& GetSnowflakeVpcConfiguration() const{ return m_snowflakeVpcConfiguration; }

    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline bool SnowflakeVpcConfigurationHasBeenSet() const { return m_snowflakeVpcConfigurationHasBeenSet; }

    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline void SetSnowflakeVpcConfiguration(const SnowflakeVpcConfiguration& value) { m_snowflakeVpcConfigurationHasBeenSet = true; m_snowflakeVpcConfiguration = value; }

    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline void SetSnowflakeVpcConfiguration(SnowflakeVpcConfiguration&& value) { m_snowflakeVpcConfigurationHasBeenSet = true; m_snowflakeVpcConfiguration = std::move(value); }

    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline SnowflakeDestinationConfiguration& WithSnowflakeVpcConfiguration(const SnowflakeVpcConfiguration& value) { SetSnowflakeVpcConfiguration(value); return *this;}

    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline SnowflakeDestinationConfiguration& WithSnowflakeVpcConfiguration(SnowflakeVpcConfiguration&& value) { SetSnowflakeVpcConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline SnowflakeDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline SnowflakeDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline SnowflakeDestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline SnowflakeDestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline SnowflakeDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline SnowflakeDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline SnowflakeDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline const SnowflakeRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline void SetRetryOptions(const SnowflakeRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline void SetRetryOptions(SnowflakeRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline SnowflakeDestinationConfiguration& WithRetryOptions(const SnowflakeRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline SnowflakeDestinationConfiguration& WithRetryOptions(SnowflakeRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline const SnowflakeS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline void SetS3BackupMode(const SnowflakeS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline void SetS3BackupMode(SnowflakeS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline SnowflakeDestinationConfiguration& WithS3BackupMode(const SnowflakeS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline SnowflakeDestinationConfiguration& WithS3BackupMode(SnowflakeS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    
    inline SnowflakeDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}

    
    inline SnowflakeDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}

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

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
