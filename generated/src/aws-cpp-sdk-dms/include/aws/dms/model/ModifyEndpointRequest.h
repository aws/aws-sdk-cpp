/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpointMessage">AWS
   * API Reference</a></p>
   */
  class ModifyEndpointRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyEndpoint"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    ModifyEndpointRequest& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

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
    ModifyEndpointRequest& WithEndpointIdentifier(EndpointIdentifierT&& value) { SetEndpointIdentifier(std::forward<EndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline ReplicationEndpointTypeValue GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(ReplicationEndpointTypeValue value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline ModifyEndpointRequest& WithEndpointType(ReplicationEndpointTypeValue value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    ModifyEndpointRequest& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ModifyEndpointRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    ModifyEndpointRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    ModifyEndpointRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port used by the endpoint database.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyEndpointRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint database. For a MySQL source or target endpoint, do
     * not specify DatabaseName.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    ModifyEndpointRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const { return m_extraConnectionAttributes; }
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }
    template<typename ExtraConnectionAttributesT = Aws::String>
    void SetExtraConnectionAttributes(ExtraConnectionAttributesT&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::forward<ExtraConnectionAttributesT>(value); }
    template<typename ExtraConnectionAttributesT = Aws::String>
    ModifyEndpointRequest& WithExtraConnectionAttributes(ExtraConnectionAttributesT&& value) { SetExtraConnectionAttributes(std::forward<ExtraConnectionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    ModifyEndpointRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline DmsSslModeValue GetSslMode() const { return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(DmsSslModeValue value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline ModifyEndpointRequest& WithSslMode(DmsSslModeValue value) { SetSslMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the IAM role you want to use to modify
     * the endpoint. The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    ModifyEndpointRequest& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
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
    ModifyEndpointRequest& WithExternalTableDefinition(ExternalTableDefinitionT&& value) { SetExternalTableDefinition(std::forward<ExternalTableDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html#CHAP_Target.DynamoDB.ObjectMapping">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>Database Migration
     * Service User Guide.</i> </p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const { return m_dynamoDbSettings; }
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }
    template<typename DynamoDbSettingsT = DynamoDbSettings>
    void SetDynamoDbSettings(DynamoDbSettingsT&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::forward<DynamoDbSettingsT>(value); }
    template<typename DynamoDbSettingsT = DynamoDbSettings>
    ModifyEndpointRequest& WithDynamoDbSettings(DynamoDbSettingsT&& value) { SetDynamoDbSettings(std::forward<DynamoDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const S3Settings& GetS3Settings() const { return m_s3Settings; }
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }
    template<typename S3SettingsT = S3Settings>
    void SetS3Settings(S3SettingsT&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::forward<S3SettingsT>(value); }
    template<typename S3SettingsT = S3Settings>
    ModifyEndpointRequest& WithS3Settings(S3SettingsT&& value) { SetS3Settings(std::forward<S3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The Amazon Resource Name (ARN) used by the service access IAM role. The role
     * must allow the <code>iam:PassRole</code> action.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> </ul> <p>Shorthand syntax for these
     * settings is as follows: <code>ServiceAccessRoleArn=string
     * ,BucketName=string</code> </p> <p>JSON syntax for these settings is as follows:
     * <code>{ "ServiceAccessRoleArn": "string", "BucketName": "string"} </code> </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const { return m_dmsTransferSettings; }
    inline bool DmsTransferSettingsHasBeenSet() const { return m_dmsTransferSettingsHasBeenSet; }
    template<typename DmsTransferSettingsT = DmsTransferSettings>
    void SetDmsTransferSettings(DmsTransferSettingsT&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::forward<DmsTransferSettingsT>(value); }
    template<typename DmsTransferSettingsT = DmsTransferSettings>
    ModifyEndpointRequest& WithDmsTransferSettings(DmsTransferSettingsT&& value) { SetDmsTransferSettings(std::forward<DmsTransferSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html#CHAP_Source.MongoDB.Configuration">Endpoint
     * configuration settings when using MongoDB as a source for Database Migration
     * Service</a> in the <i>Database Migration Service User Guide.</i> </p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const { return m_mongoDbSettings; }
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }
    template<typename MongoDbSettingsT = MongoDbSettings>
    void SetMongoDbSettings(MongoDbSettingsT&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::forward<MongoDbSettingsT>(value); }
    template<typename MongoDbSettingsT = MongoDbSettings>
    ModifyEndpointRequest& WithMongoDbSettings(MongoDbSettingsT&& value) { SetMongoDbSettings(std::forward<MongoDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping">Using
     * object mapping to migrate data to a Kinesis data stream</a> in the <i>Database
     * Migration Service User Guide.</i> </p>
     */
    inline const KinesisSettings& GetKinesisSettings() const { return m_kinesisSettings; }
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }
    template<typename KinesisSettingsT = KinesisSettings>
    void SetKinesisSettings(KinesisSettingsT&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::forward<KinesisSettingsT>(value); }
    template<typename KinesisSettingsT = KinesisSettings>
    ModifyEndpointRequest& WithKinesisSettings(KinesisSettingsT&& value) { SetKinesisSettings(std::forward<KinesisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html#CHAP_Target.Kafka.ObjectMapping">Using
     * object mapping to migrate data to a Kafka topic</a> in the <i>Database Migration
     * Service User Guide.</i> </p>
     */
    inline const KafkaSettings& GetKafkaSettings() const { return m_kafkaSettings; }
    inline bool KafkaSettingsHasBeenSet() const { return m_kafkaSettingsHasBeenSet; }
    template<typename KafkaSettingsT = KafkaSettings>
    void SetKafkaSettings(KafkaSettingsT&& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = std::forward<KafkaSettingsT>(value); }
    template<typename KafkaSettingsT = KafkaSettings>
    ModifyEndpointRequest& WithKafkaSettings(KafkaSettingsT&& value) { SetKafkaSettings(std::forward<KafkaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target OpenSearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using OpenSearch as a Target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const { return m_elasticsearchSettings; }
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }
    template<typename ElasticsearchSettingsT = ElasticsearchSettings>
    void SetElasticsearchSettings(ElasticsearchSettingsT&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::forward<ElasticsearchSettingsT>(value); }
    template<typename ElasticsearchSettingsT = ElasticsearchSettings>
    ModifyEndpointRequest& WithElasticsearchSettings(ElasticsearchSettingsT&& value) { SetElasticsearchSettings(std::forward<ElasticsearchSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * graph-mapping rules using Gremlin and R2RML for Amazon Neptune as a target</a>
     * in the <i>Database Migration Service User Guide.</i> </p>
     */
    inline const NeptuneSettings& GetNeptuneSettings() const { return m_neptuneSettings; }
    inline bool NeptuneSettingsHasBeenSet() const { return m_neptuneSettingsHasBeenSet; }
    template<typename NeptuneSettingsT = NeptuneSettings>
    void SetNeptuneSettings(NeptuneSettingsT&& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = std::forward<NeptuneSettingsT>(value); }
    template<typename NeptuneSettingsT = NeptuneSettings>
    ModifyEndpointRequest& WithNeptuneSettings(NeptuneSettingsT&& value) { SetNeptuneSettings(std::forward<NeptuneSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftSettings& GetRedshiftSettings() const { return m_redshiftSettings; }
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }
    template<typename RedshiftSettingsT = RedshiftSettings>
    void SetRedshiftSettings(RedshiftSettingsT&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::forward<RedshiftSettingsT>(value); }
    template<typename RedshiftSettingsT = RedshiftSettings>
    ModifyEndpointRequest& WithRedshiftSettings(RedshiftSettingsT&& value) { SetRedshiftSettings(std::forward<RedshiftSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.html#CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const PostgreSQLSettings& GetPostgreSQLSettings() const { return m_postgreSQLSettings; }
    inline bool PostgreSQLSettingsHasBeenSet() const { return m_postgreSQLSettingsHasBeenSet; }
    template<typename PostgreSQLSettingsT = PostgreSQLSettings>
    void SetPostgreSQLSettings(PostgreSQLSettingsT&& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = std::forward<PostgreSQLSettingsT>(value); }
    template<typename PostgreSQLSettingsT = PostgreSQLSettings>
    ModifyEndpointRequest& WithPostgreSQLSettings(PostgreSQLSettingsT&& value) { SetPostgreSQLSettings(std::forward<PostgreSQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.html#CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.html#CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for
     * DMS</a> in the <i>Database Migration Service User Guide.</i> </p>
     */
    inline const MySQLSettings& GetMySQLSettings() const { return m_mySQLSettings; }
    inline bool MySQLSettingsHasBeenSet() const { return m_mySQLSettingsHasBeenSet; }
    template<typename MySQLSettingsT = MySQLSettings>
    void SetMySQLSettings(MySQLSettingsT&& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = std::forward<MySQLSettingsT>(value); }
    template<typename MySQLSettingsT = MySQLSettings>
    ModifyEndpointRequest& WithMySQLSettings(MySQLSettingsT&& value) { SetMySQLSettings(std::forward<MySQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.html#CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const OracleSettings& GetOracleSettings() const { return m_oracleSettings; }
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }
    template<typename OracleSettingsT = OracleSettings>
    void SetOracleSettings(OracleSettingsT&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::forward<OracleSettingsT>(value); }
    template<typename OracleSettingsT = OracleSettings>
    ModifyEndpointRequest& WithOracleSettings(OracleSettingsT&& value) { SetOracleSettings(std::forward<OracleSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.html#CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.html#CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const SybaseSettings& GetSybaseSettings() const { return m_sybaseSettings; }
    inline bool SybaseSettingsHasBeenSet() const { return m_sybaseSettingsHasBeenSet; }
    template<typename SybaseSettingsT = SybaseSettings>
    void SetSybaseSettings(SybaseSettingsT&& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = std::forward<SybaseSettingsT>(value); }
    template<typename SybaseSettingsT = SybaseSettings>
    ModifyEndpointRequest& WithSybaseSettings(SybaseSettingsT&& value) { SetSybaseSettings(std::forward<SybaseSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.html#CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.html#CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const MicrosoftSQLServerSettings& GetMicrosoftSQLServerSettings() const { return m_microsoftSQLServerSettings; }
    inline bool MicrosoftSQLServerSettingsHasBeenSet() const { return m_microsoftSQLServerSettingsHasBeenSet; }
    template<typename MicrosoftSQLServerSettingsT = MicrosoftSQLServerSettings>
    void SetMicrosoftSQLServerSettings(MicrosoftSQLServerSettingsT&& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = std::forward<MicrosoftSQLServerSettingsT>(value); }
    template<typename MicrosoftSQLServerSettingsT = MicrosoftSQLServerSettings>
    ModifyEndpointRequest& WithMicrosoftSQLServerSettings(MicrosoftSQLServerSettingsT&& value) { SetMicrosoftSQLServerSettings(std::forward<MicrosoftSQLServerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.html#CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for DMS</a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const IBMDb2Settings& GetIBMDb2Settings() const { return m_iBMDb2Settings; }
    inline bool IBMDb2SettingsHasBeenSet() const { return m_iBMDb2SettingsHasBeenSet; }
    template<typename IBMDb2SettingsT = IBMDb2Settings>
    void SetIBMDb2Settings(IBMDb2SettingsT&& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = std::forward<IBMDb2SettingsT>(value); }
    template<typename IBMDb2SettingsT = IBMDb2Settings>
    ModifyEndpointRequest& WithIBMDb2Settings(IBMDb2SettingsT&& value) { SetIBMDb2Settings(std::forward<IBMDb2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for Database Migration Service </a> in the
     * <i>Database Migration Service User Guide.</i> </p>
     */
    inline const DocDbSettings& GetDocDbSettings() const { return m_docDbSettings; }
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }
    template<typename DocDbSettingsT = DocDbSettings>
    void SetDocDbSettings(DocDbSettingsT&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::forward<DocDbSettingsT>(value); }
    template<typename DocDbSettingsT = DocDbSettings>
    ModifyEndpointRequest& WithDocDbSettings(DocDbSettingsT&& value) { SetDocDbSettings(std::forward<DocDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the Redis target endpoint.</p>
     */
    inline const RedisSettings& GetRedisSettings() const { return m_redisSettings; }
    inline bool RedisSettingsHasBeenSet() const { return m_redisSettingsHasBeenSet; }
    template<typename RedisSettingsT = RedisSettings>
    void SetRedisSettings(RedisSettingsT&& value) { m_redisSettingsHasBeenSet = true; m_redisSettings = std::forward<RedisSettingsT>(value); }
    template<typename RedisSettingsT = RedisSettings>
    ModifyEndpointRequest& WithRedisSettings(RedisSettingsT&& value) { SetRedisSettings(std::forward<RedisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this attribute is Y, the current call to <code>ModifyEndpoint</code>
     * replaces all existing endpoint settings with the exact settings that you specify
     * in this call. If this attribute is N, the current call to
     * <code>ModifyEndpoint</code> does two things: </p> <ul> <li> <p>It replaces any
     * endpoint settings that already exist with new values, for settings with the same
     * names.</p> </li> <li> <p>It creates new endpoint settings that you specify in
     * the call, for settings with different names. </p> </li> </ul> <p>For example, if
     * you call <code>create-endpoint ... --endpoint-settings '{"a":1}' ...</code>, the
     * endpoint has the following endpoint settings: <code>'{"a":1}'</code>. If you
     * then call <code>modify-endpoint ... --endpoint-settings '{"b":2}' ...</code> for
     * the same endpoint, the endpoint has the following settings:
     * <code>'{"a":1,"b":2}'</code>. </p> <p>However, suppose that you follow this with
     * a call to <code>modify-endpoint ... --endpoint-settings '{"b":2}'
     * --exact-settings ...</code> for that same endpoint again. Then the endpoint has
     * the following settings: <code>'{"b":2}'</code>. All existing settings are
     * replaced with the exact settings that you specify. </p>
     */
    inline bool GetExactSettings() const { return m_exactSettings; }
    inline bool ExactSettingsHasBeenSet() const { return m_exactSettingsHasBeenSet; }
    inline void SetExactSettings(bool value) { m_exactSettingsHasBeenSet = true; m_exactSettings = value; }
    inline ModifyEndpointRequest& WithExactSettings(bool value) { SetExactSettings(value); return *this;}
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
    ModifyEndpointRequest& WithGcpMySQLSettings(GcpMySQLSettingsT&& value) { SetGcpMySQLSettings(std::forward<GcpMySQLSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the target Amazon Timestream endpoint.</p>
     */
    inline const TimestreamSettings& GetTimestreamSettings() const { return m_timestreamSettings; }
    inline bool TimestreamSettingsHasBeenSet() const { return m_timestreamSettingsHasBeenSet; }
    template<typename TimestreamSettingsT = TimestreamSettings>
    void SetTimestreamSettings(TimestreamSettingsT&& value) { m_timestreamSettingsHasBeenSet = true; m_timestreamSettings = std::forward<TimestreamSettingsT>(value); }
    template<typename TimestreamSettingsT = TimestreamSettings>
    ModifyEndpointRequest& WithTimestreamSettings(TimestreamSettingsT&& value) { SetTimestreamSettings(std::forward<TimestreamSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    ReplicationEndpointTypeValue m_endpointType{ReplicationEndpointTypeValue::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_extraConnectionAttributes;
    bool m_extraConnectionAttributesHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    DmsSslModeValue m_sslMode{DmsSslModeValue::NOT_SET};
    bool m_sslModeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet = false;

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

    bool m_exactSettings{false};
    bool m_exactSettingsHasBeenSet = false;

    GcpMySQLSettings m_gcpMySQLSettings;
    bool m_gcpMySQLSettingsHasBeenSet = false;

    TimestreamSettings m_timestreamSettings;
    bool m_timestreamSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
