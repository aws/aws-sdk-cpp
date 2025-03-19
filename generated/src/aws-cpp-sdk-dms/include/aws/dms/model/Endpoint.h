/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReplicationEndpointTypeValue.h>
#include <aws/dms/model/DmsSslModeValue.h>
#include <aws/dms/model/DynamoDbSettings.h>
#include <aws/dms/model/S3Settings.h>
#include <aws/dms/model/DmsTransferSettings.h>
#include <aws/dms/model/MongoDbSettings.h>
#include <aws/dms/model/KinesisSettings.h>
#include <aws/dms/model/KafkaSettings.h>
#include <aws/dms/model/ElasticsearchSettings.h>
#include <aws/dms/model/NeptuneSettings.h>
#include <aws/dms/model/RedshiftSettings.h>
#include <aws/dms/model/PostgreSQLSettings.h>
#include <aws/dms/model/MySQLSettings.h>
#include <aws/dms/model/OracleSettings.h>
#include <aws/dms/model/SybaseSettings.h>
#include <aws/dms/model/MicrosoftSQLServerSettings.h>
#include <aws/dms/model/IBMDb2Settings.h>
#include <aws/dms/model/DocDbSettings.h>
#include <aws/dms/model/RedisSettings.h>
#include <aws/dms/model/GcpMySQLSettings.h>
#include <aws/dms/model/TimestreamSettings.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes an endpoint of a database instance in response to operations such
   * as the following:</p> <ul> <li> <p> <code>CreateEndpoint</code> </p> </li> <li>
   * <p> <code>DescribeEndpoint</code> </p> </li> <li> <p>
   * <code>ModifyEndpoint</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Endpoint">AWS API
   * Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint() = default;
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const { return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    template<typename EndpointIdentifierT = Aws::String>
    void SetEndpointIdentifier(EndpointIdentifierT&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::forward<EndpointIdentifierT>(value); }
    template<typename EndpointIdentifierT = Aws::String>
    Endpoint& WithEndpointIdentifier(EndpointIdentifierT&& value) { SetEndpointIdentifier(std::forward<EndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline ReplicationEndpointTypeValue GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(ReplicationEndpointTypeValue value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline Endpoint& WithEndpointType(ReplicationEndpointTypeValue value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"redshift-serverless"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"db2-zos"</code>, <code>"azuredb"</code>,
     * <code>"sybase"</code>, <code>"dynamodb"</code>, <code>"mongodb"</code>,
     * <code>"kinesis"</code>, <code>"kafka"</code>, <code>"elasticsearch"</code>,
     * <code>"documentdb"</code>, <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    Endpoint& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline const Aws::String& GetEngineDisplayName() const { return m_engineDisplayName; }
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }
    template<typename EngineDisplayNameT = Aws::String>
    void SetEngineDisplayName(EngineDisplayNameT&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::forward<EngineDisplayNameT>(value); }
    template<typename EngineDisplayNameT = Aws::String>
    Endpoint& WithEngineDisplayName(EngineDisplayNameT&& value) { SetEngineDisplayName(std::forward<EngineDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    Endpoint& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    Endpoint& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    Endpoint& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const { return m_extraConnectionAttributes; }
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }
    template<typename ExtraConnectionAttributesT = Aws::String>
    void SetExtraConnectionAttributes(ExtraConnectionAttributesT&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::forward<ExtraConnectionAttributesT>(value); }
    template<typename ExtraConnectionAttributesT = Aws::String>
    Endpoint& WithExtraConnectionAttributes(ExtraConnectionAttributesT&& value) { SetExtraConnectionAttributes(std::forward<ExtraConnectionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Endpoint& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An KMS key identifier that is used to encrypt the connection parameters for
     * the endpoint.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Endpoint& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    Endpoint& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    Endpoint& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline DmsSslModeValue GetSslMode() const { return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(DmsSslModeValue value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline Endpoint& WithSslMode(DmsSslModeValue value) { SetSslMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    Endpoint& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external table definition.</p>
     */
    inline const Aws::String& GetExternalTableDefinition() const { return m_externalTableDefinition; }
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }
    template<typename ExternalTableDefinitionT = Aws::String>
    void SetExternalTableDefinition(ExternalTableDefinitionT&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::forward<ExternalTableDefinitionT>(value); }
    template<typename ExternalTableDefinitionT = Aws::String>
    Endpoint& WithExternalTableDefinition(ExternalTableDefinitionT&& value) { SetExternalTableDefinition(std::forward<ExternalTableDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    Endpoint& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the DynamoDB target endpoint. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const { return m_dynamoDbSettings; }
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }
    template<typename DynamoDbSettingsT = DynamoDbSettings>
    void SetDynamoDbSettings(DynamoDbSettingsT&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::forward<DynamoDbSettingsT>(value); }
    template<typename DynamoDbSettingsT = DynamoDbSettings>
    Endpoint& WithDynamoDbSettings(DynamoDbSettingsT&& value) { SetDynamoDbSettings(std::forward<DynamoDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline const S3Settings& GetS3Settings() const { return m_s3Settings; }
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }
    template<typename S3SettingsT = S3Settings>
    void SetS3Settings(S3SettingsT&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::forward<S3SettingsT>(value); }
    template<typename S3SettingsT = S3Settings>
    Endpoint& WithS3Settings(S3SettingsT&& value) { SetS3Settings(std::forward<S3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the DMS Transfer type source. For more information, see the
     * DmsTransferSettings structure. </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const { return m_dmsTransferSettings; }
    inline bool DmsTransferSettingsHasBeenSet() const { return m_dmsTransferSettingsHasBeenSet; }
    template<typename DmsTransferSettingsT = DmsTransferSettings>
    void SetDmsTransferSettings(DmsTransferSettingsT&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::forward<DmsTransferSettingsT>(value); }
    template<typename DmsTransferSettingsT = DmsTransferSettings>
    Endpoint& WithDmsTransferSettings(DmsTransferSettingsT&& value) { SetDmsTransferSettings(std::forward<DmsTransferSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const { return m_mongoDbSettings; }
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }
    template<typename MongoDbSettingsT = MongoDbSettings>
    void SetMongoDbSettings(MongoDbSettingsT&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::forward<MongoDbSettingsT>(value); }
    template<typename MongoDbSettingsT = MongoDbSettings>
    Endpoint& WithMongoDbSettings(MongoDbSettingsT&& value) { SetMongoDbSettings(std::forward<MongoDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Kinesis target endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline const KinesisSettings& GetKinesisSettings() const { return m_kinesisSettings; }
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }
    template<typename KinesisSettingsT = KinesisSettings>
    void SetKinesisSettings(KinesisSettingsT&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::forward<KinesisSettingsT>(value); }
    template<typename KinesisSettingsT = KinesisSettings>
    Endpoint& WithKinesisSettings(KinesisSettingsT&& value) { SetKinesisSettings(std::forward<KinesisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Apache Kafka target endpoint. For more information, see
     * the <code>KafkaSettings</code> structure.</p>
     */
    inline const KafkaSettings& GetKafkaSettings() const { return m_kafkaSettings; }
    inline bool KafkaSettingsHasBeenSet() const { return m_kafkaSettingsHasBeenSet; }
    template<typename KafkaSettingsT = KafkaSettings>
    void SetKafkaSettings(KafkaSettingsT&& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = std::forward<KafkaSettingsT>(value); }
    template<typename KafkaSettingsT = KafkaSettings>
    Endpoint& WithKafkaSettings(KafkaSettingsT&& value) { SetKafkaSettings(std::forward<KafkaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the OpenSearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const { return m_elasticsearchSettings; }
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }
    template<typename ElasticsearchSettingsT = ElasticsearchSettings>
    void SetElasticsearchSettings(ElasticsearchSettingsT&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::forward<ElasticsearchSettingsT>(value); }
    template<typename ElasticsearchSettingsT = ElasticsearchSettings>
    Endpoint& WithElasticsearchSettings(ElasticsearchSettingsT&& value) { SetElasticsearchSettings(std::forward<ElasticsearchSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Neptune target endpoint. For more information,
     * see the <code>NeptuneSettings</code> structure.</p>
     */
    inline const NeptuneSettings& GetNeptuneSettings() const { return m_neptuneSettings; }
    inline bool NeptuneSettingsHasBeenSet() const { return m_neptuneSettingsHasBeenSet; }
    template<typename NeptuneSettingsT = NeptuneSettings>
    void SetNeptuneSettings(NeptuneSettingsT&& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = std::forward<NeptuneSettingsT>(value); }
    template<typename NeptuneSettingsT = NeptuneSettings>
    Endpoint& WithNeptuneSettings(NeptuneSettingsT&& value) { SetNeptuneSettings(std::forward<NeptuneSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the Amazon Redshift endpoint.</p>
     */
    inline const RedshiftSettings& GetRedshiftSettings() const { return m_redshiftSettings; }
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }
    template<typename RedshiftSettingsT = RedshiftSettings>
    void SetRedshiftSettings(RedshiftSettingsT&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::forward<RedshiftSettingsT>(value); }
    template<typename RedshiftSettingsT = RedshiftSettings>
    Endpoint& WithRedshiftSettings(RedshiftSettingsT&& value) { SetRedshiftSettings(std::forward<RedshiftSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the PostgreSQL source and target endpoint. For more
     * information, see the <code>PostgreSQLSettings</code> structure.</p>
     */
    inline const PostgreSQLSettings& GetPostgreSQLSettings() const { return m_postgreSQLSettings; }
    inline bool PostgreSQLSettingsHasBeenSet() const { return m_postgreSQLSettingsHasBeenSet; }
    template<typename PostgreSQLSettingsT = PostgreSQLSettings>
    void SetPostgreSQLSettings(PostgreSQLSettingsT&& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = std::forward<PostgreSQLSettingsT>(value); }
    template<typename PostgreSQLSettingsT = PostgreSQLSettings>
    Endpoint& WithPostgreSQLSettings(PostgreSQLSettingsT&& value) { SetPostgreSQLSettings(std::forward<PostgreSQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the MySQL source and target endpoint. For more information,
     * see the <code>MySQLSettings</code> structure.</p>
     */
    inline const MySQLSettings& GetMySQLSettings() const { return m_mySQLSettings; }
    inline bool MySQLSettingsHasBeenSet() const { return m_mySQLSettingsHasBeenSet; }
    template<typename MySQLSettingsT = MySQLSettings>
    void SetMySQLSettings(MySQLSettingsT&& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = std::forward<MySQLSettingsT>(value); }
    template<typename MySQLSettingsT = MySQLSettings>
    Endpoint& WithMySQLSettings(MySQLSettingsT&& value) { SetMySQLSettings(std::forward<MySQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Oracle source and target endpoint. For more information,
     * see the <code>OracleSettings</code> structure.</p>
     */
    inline const OracleSettings& GetOracleSettings() const { return m_oracleSettings; }
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }
    template<typename OracleSettingsT = OracleSettings>
    void SetOracleSettings(OracleSettingsT&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::forward<OracleSettingsT>(value); }
    template<typename OracleSettingsT = OracleSettings>
    Endpoint& WithOracleSettings(OracleSettingsT&& value) { SetOracleSettings(std::forward<OracleSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the SAP ASE source and target endpoint. For more
     * information, see the <code>SybaseSettings</code> structure.</p>
     */
    inline const SybaseSettings& GetSybaseSettings() const { return m_sybaseSettings; }
    inline bool SybaseSettingsHasBeenSet() const { return m_sybaseSettingsHasBeenSet; }
    template<typename SybaseSettingsT = SybaseSettings>
    void SetSybaseSettings(SybaseSettingsT&& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = std::forward<SybaseSettingsT>(value); }
    template<typename SybaseSettingsT = SybaseSettings>
    Endpoint& WithSybaseSettings(SybaseSettingsT&& value) { SetSybaseSettings(std::forward<SybaseSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Microsoft SQL Server source and target endpoint. For
     * more information, see the <code>MicrosoftSQLServerSettings</code> structure.</p>
     */
    inline const MicrosoftSQLServerSettings& GetMicrosoftSQLServerSettings() const { return m_microsoftSQLServerSettings; }
    inline bool MicrosoftSQLServerSettingsHasBeenSet() const { return m_microsoftSQLServerSettingsHasBeenSet; }
    template<typename MicrosoftSQLServerSettingsT = MicrosoftSQLServerSettings>
    void SetMicrosoftSQLServerSettings(MicrosoftSQLServerSettingsT&& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = std::forward<MicrosoftSQLServerSettingsT>(value); }
    template<typename MicrosoftSQLServerSettingsT = MicrosoftSQLServerSettings>
    Endpoint& WithMicrosoftSQLServerSettings(MicrosoftSQLServerSettingsT&& value) { SetMicrosoftSQLServerSettings(std::forward<MicrosoftSQLServerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the IBM Db2 LUW source endpoint. For more information, see
     * the <code>IBMDb2Settings</code> structure. </p>
     */
    inline const IBMDb2Settings& GetIBMDb2Settings() const { return m_iBMDb2Settings; }
    inline bool IBMDb2SettingsHasBeenSet() const { return m_iBMDb2SettingsHasBeenSet; }
    template<typename IBMDb2SettingsT = IBMDb2Settings>
    void SetIBMDb2Settings(IBMDb2SettingsT&& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = std::forward<IBMDb2SettingsT>(value); }
    template<typename IBMDb2SettingsT = IBMDb2Settings>
    Endpoint& WithIBMDb2Settings(IBMDb2SettingsT&& value) { SetIBMDb2Settings(std::forward<IBMDb2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocDbSettings& GetDocDbSettings() const { return m_docDbSettings; }
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }
    template<typename DocDbSettingsT = DocDbSettings>
    void SetDocDbSettings(DocDbSettingsT&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::forward<DocDbSettingsT>(value); }
    template<typename DocDbSettingsT = DocDbSettings>
    Endpoint& WithDocDbSettings(DocDbSettingsT&& value) { SetDocDbSettings(std::forward<DocDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Redis target endpoint. For more information, see the
     * <code>RedisSettings</code> structure.</p>
     */
    inline const RedisSettings& GetRedisSettings() const { return m_redisSettings; }
    inline bool RedisSettingsHasBeenSet() const { return m_redisSettingsHasBeenSet; }
    template<typename RedisSettingsT = RedisSettings>
    void SetRedisSettings(RedisSettingsT&& value) { m_redisSettingsHasBeenSet = true; m_redisSettings = std::forward<RedisSettingsT>(value); }
    template<typename RedisSettingsT = RedisSettings>
    Endpoint& WithRedisSettings(RedisSettingsT&& value) { SetRedisSettings(std::forward<RedisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source GCP MySQL endpoint.</p>
     */
    inline const GcpMySQLSettings& GetGcpMySQLSettings() const { return m_gcpMySQLSettings; }
    inline bool GcpMySQLSettingsHasBeenSet() const { return m_gcpMySQLSettingsHasBeenSet; }
    template<typename GcpMySQLSettingsT = GcpMySQLSettings>
    void SetGcpMySQLSettings(GcpMySQLSettingsT&& value) { m_gcpMySQLSettingsHasBeenSet = true; m_gcpMySQLSettings = std::forward<GcpMySQLSettingsT>(value); }
    template<typename GcpMySQLSettingsT = GcpMySQLSettings>
    Endpoint& WithGcpMySQLSettings(GcpMySQLSettingsT&& value) { SetGcpMySQLSettings(std::forward<GcpMySQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Timestream target endpoint. For more information,
     * see the <code>TimestreamSettings</code> structure.</p>
     */
    inline const TimestreamSettings& GetTimestreamSettings() const { return m_timestreamSettings; }
    inline bool TimestreamSettingsHasBeenSet() const { return m_timestreamSettingsHasBeenSet; }
    template<typename TimestreamSettingsT = TimestreamSettings>
    void SetTimestreamSettings(TimestreamSettingsT&& value) { m_timestreamSettingsHasBeenSet = true; m_timestreamSettings = std::forward<TimestreamSettingsT>(value); }
    template<typename TimestreamSettingsT = TimestreamSettings>
    Endpoint& WithTimestreamSettings(TimestreamSettingsT&& value) { SetTimestreamSettings(std::forward<TimestreamSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    ReplicationEndpointTypeValue m_endpointType{ReplicationEndpointTypeValue::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_extraConnectionAttributes;
    bool m_extraConnectionAttributesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    DmsSslModeValue m_sslMode{DmsSslModeValue::NOT_SET};
    bool m_sslModeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    DynamoDbSettings m_dynamoDbSettings;
    bool m_dynamoDbSettingsHasBeenSet = false;

    S3Settings m_s3Settings;
    bool m_s3SettingsHasBeenSet = false;

    DmsTransferSettings m_dmsTransferSettings;
    bool m_dmsTransferSettingsHasBeenSet = false;

    MongoDbSettings m_mongoDbSettings;
    bool m_mongoDbSettingsHasBeenSet = false;

    KinesisSettings m_kinesisSettings;
    bool m_kinesisSettingsHasBeenSet = false;

    KafkaSettings m_kafkaSettings;
    bool m_kafkaSettingsHasBeenSet = false;

    ElasticsearchSettings m_elasticsearchSettings;
    bool m_elasticsearchSettingsHasBeenSet = false;

    NeptuneSettings m_neptuneSettings;
    bool m_neptuneSettingsHasBeenSet = false;

    RedshiftSettings m_redshiftSettings;
    bool m_redshiftSettingsHasBeenSet = false;

    PostgreSQLSettings m_postgreSQLSettings;
    bool m_postgreSQLSettingsHasBeenSet = false;

    MySQLSettings m_mySQLSettings;
    bool m_mySQLSettingsHasBeenSet = false;

    OracleSettings m_oracleSettings;
    bool m_oracleSettingsHasBeenSet = false;

    SybaseSettings m_sybaseSettings;
    bool m_sybaseSettingsHasBeenSet = false;

    MicrosoftSQLServerSettings m_microsoftSQLServerSettings;
    bool m_microsoftSQLServerSettingsHasBeenSet = false;

    IBMDb2Settings m_iBMDb2Settings;
    bool m_iBMDb2SettingsHasBeenSet = false;

    DocDbSettings m_docDbSettings;
    bool m_docDbSettingsHasBeenSet = false;

    RedisSettings m_redisSettings;
    bool m_redisSettingsHasBeenSet = false;

    GcpMySQLSettings m_gcpMySQLSettings;
    bool m_gcpMySQLSettingsHasBeenSet = false;

    TimestreamSettings m_timestreamSettings;
    bool m_timestreamSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
