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
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint();
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }
    inline Endpoint& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}
    inline Endpoint& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}
    inline Endpoint& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline Endpoint& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}
    inline Endpoint& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}
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
    inline const Aws::String& GetEngineName() const{ return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }
    inline Endpoint& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}
    inline Endpoint& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}
    inline Endpoint& WithEngineName(const char* value) { SetEngineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline const Aws::String& GetEngineDisplayName() const{ return m_engineDisplayName; }
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }
    inline void SetEngineDisplayName(const Aws::String& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = value; }
    inline void SetEngineDisplayName(Aws::String&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::move(value); }
    inline void SetEngineDisplayName(const char* value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName.assign(value); }
    inline Endpoint& WithEngineDisplayName(const Aws::String& value) { SetEngineDisplayName(value); return *this;}
    inline Endpoint& WithEngineDisplayName(Aws::String&& value) { SetEngineDisplayName(std::move(value)); return *this;}
    inline Endpoint& WithEngineDisplayName(const char* value) { SetEngineDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline Endpoint& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline Endpoint& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline Endpoint& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline Endpoint& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline Endpoint& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline Endpoint& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline Endpoint& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline Endpoint& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline Endpoint& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const{ return m_extraConnectionAttributes; }
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::move(value); }
    inline void SetExtraConnectionAttributes(const char* value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes.assign(value); }
    inline Endpoint& WithExtraConnectionAttributes(const Aws::String& value) { SetExtraConnectionAttributes(value); return *this;}
    inline Endpoint& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(std::move(value)); return *this;}
    inline Endpoint& WithExtraConnectionAttributes(const char* value) { SetExtraConnectionAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Endpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Endpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Endpoint& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Endpoint& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Endpoint& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Endpoint& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline Endpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline Endpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline Endpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline Endpoint& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline Endpoint& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline Endpoint& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }
    inline Endpoint& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}
    inline Endpoint& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline Endpoint& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline Endpoint& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline Endpoint& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external table definition.</p>
     */
    inline const Aws::String& GetExternalTableDefinition() const{ return m_externalTableDefinition; }
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }
    inline void SetExternalTableDefinition(const Aws::String& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = value; }
    inline void SetExternalTableDefinition(Aws::String&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::move(value); }
    inline void SetExternalTableDefinition(const char* value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition.assign(value); }
    inline Endpoint& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}
    inline Endpoint& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}
    inline Endpoint& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline Endpoint& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline Endpoint& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline Endpoint& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the DynamoDB target endpoint. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const{ return m_dynamoDbSettings; }
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }
    inline void SetDynamoDbSettings(const DynamoDbSettings& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = value; }
    inline void SetDynamoDbSettings(DynamoDbSettings&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::move(value); }
    inline Endpoint& WithDynamoDbSettings(const DynamoDbSettings& value) { SetDynamoDbSettings(value); return *this;}
    inline Endpoint& WithDynamoDbSettings(DynamoDbSettings&& value) { SetDynamoDbSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline const S3Settings& GetS3Settings() const{ return m_s3Settings; }
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }
    inline void SetS3Settings(const S3Settings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }
    inline void SetS3Settings(S3Settings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }
    inline Endpoint& WithS3Settings(const S3Settings& value) { SetS3Settings(value); return *this;}
    inline Endpoint& WithS3Settings(S3Settings&& value) { SetS3Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the DMS Transfer type source. For more information, see the
     * DmsTransferSettings structure. </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const{ return m_dmsTransferSettings; }
    inline bool DmsTransferSettingsHasBeenSet() const { return m_dmsTransferSettingsHasBeenSet; }
    inline void SetDmsTransferSettings(const DmsTransferSettings& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = value; }
    inline void SetDmsTransferSettings(DmsTransferSettings&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::move(value); }
    inline Endpoint& WithDmsTransferSettings(const DmsTransferSettings& value) { SetDmsTransferSettings(value); return *this;}
    inline Endpoint& WithDmsTransferSettings(DmsTransferSettings&& value) { SetDmsTransferSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const{ return m_mongoDbSettings; }
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }
    inline void SetMongoDbSettings(const MongoDbSettings& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = value; }
    inline void SetMongoDbSettings(MongoDbSettings&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::move(value); }
    inline Endpoint& WithMongoDbSettings(const MongoDbSettings& value) { SetMongoDbSettings(value); return *this;}
    inline Endpoint& WithMongoDbSettings(MongoDbSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Kinesis target endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline const KinesisSettings& GetKinesisSettings() const{ return m_kinesisSettings; }
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }
    inline void SetKinesisSettings(const KinesisSettings& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = value; }
    inline void SetKinesisSettings(KinesisSettings&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::move(value); }
    inline Endpoint& WithKinesisSettings(const KinesisSettings& value) { SetKinesisSettings(value); return *this;}
    inline Endpoint& WithKinesisSettings(KinesisSettings&& value) { SetKinesisSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Apache Kafka target endpoint. For more information, see
     * the <code>KafkaSettings</code> structure.</p>
     */
    inline const KafkaSettings& GetKafkaSettings() const{ return m_kafkaSettings; }
    inline bool KafkaSettingsHasBeenSet() const { return m_kafkaSettingsHasBeenSet; }
    inline void SetKafkaSettings(const KafkaSettings& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = value; }
    inline void SetKafkaSettings(KafkaSettings&& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = std::move(value); }
    inline Endpoint& WithKafkaSettings(const KafkaSettings& value) { SetKafkaSettings(value); return *this;}
    inline Endpoint& WithKafkaSettings(KafkaSettings&& value) { SetKafkaSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the OpenSearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const{ return m_elasticsearchSettings; }
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }
    inline void SetElasticsearchSettings(const ElasticsearchSettings& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = value; }
    inline void SetElasticsearchSettings(ElasticsearchSettings&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::move(value); }
    inline Endpoint& WithElasticsearchSettings(const ElasticsearchSettings& value) { SetElasticsearchSettings(value); return *this;}
    inline Endpoint& WithElasticsearchSettings(ElasticsearchSettings&& value) { SetElasticsearchSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Neptune target endpoint. For more information,
     * see the <code>NeptuneSettings</code> structure.</p>
     */
    inline const NeptuneSettings& GetNeptuneSettings() const{ return m_neptuneSettings; }
    inline bool NeptuneSettingsHasBeenSet() const { return m_neptuneSettingsHasBeenSet; }
    inline void SetNeptuneSettings(const NeptuneSettings& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = value; }
    inline void SetNeptuneSettings(NeptuneSettings&& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = std::move(value); }
    inline Endpoint& WithNeptuneSettings(const NeptuneSettings& value) { SetNeptuneSettings(value); return *this;}
    inline Endpoint& WithNeptuneSettings(NeptuneSettings&& value) { SetNeptuneSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the Amazon Redshift endpoint.</p>
     */
    inline const RedshiftSettings& GetRedshiftSettings() const{ return m_redshiftSettings; }
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }
    inline void SetRedshiftSettings(const RedshiftSettings& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = value; }
    inline void SetRedshiftSettings(RedshiftSettings&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::move(value); }
    inline Endpoint& WithRedshiftSettings(const RedshiftSettings& value) { SetRedshiftSettings(value); return *this;}
    inline Endpoint& WithRedshiftSettings(RedshiftSettings&& value) { SetRedshiftSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the PostgreSQL source and target endpoint. For more
     * information, see the <code>PostgreSQLSettings</code> structure.</p>
     */
    inline const PostgreSQLSettings& GetPostgreSQLSettings() const{ return m_postgreSQLSettings; }
    inline bool PostgreSQLSettingsHasBeenSet() const { return m_postgreSQLSettingsHasBeenSet; }
    inline void SetPostgreSQLSettings(const PostgreSQLSettings& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = value; }
    inline void SetPostgreSQLSettings(PostgreSQLSettings&& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = std::move(value); }
    inline Endpoint& WithPostgreSQLSettings(const PostgreSQLSettings& value) { SetPostgreSQLSettings(value); return *this;}
    inline Endpoint& WithPostgreSQLSettings(PostgreSQLSettings&& value) { SetPostgreSQLSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the MySQL source and target endpoint. For more information,
     * see the <code>MySQLSettings</code> structure.</p>
     */
    inline const MySQLSettings& GetMySQLSettings() const{ return m_mySQLSettings; }
    inline bool MySQLSettingsHasBeenSet() const { return m_mySQLSettingsHasBeenSet; }
    inline void SetMySQLSettings(const MySQLSettings& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = value; }
    inline void SetMySQLSettings(MySQLSettings&& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = std::move(value); }
    inline Endpoint& WithMySQLSettings(const MySQLSettings& value) { SetMySQLSettings(value); return *this;}
    inline Endpoint& WithMySQLSettings(MySQLSettings&& value) { SetMySQLSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Oracle source and target endpoint. For more information,
     * see the <code>OracleSettings</code> structure.</p>
     */
    inline const OracleSettings& GetOracleSettings() const{ return m_oracleSettings; }
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }
    inline void SetOracleSettings(const OracleSettings& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = value; }
    inline void SetOracleSettings(OracleSettings&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::move(value); }
    inline Endpoint& WithOracleSettings(const OracleSettings& value) { SetOracleSettings(value); return *this;}
    inline Endpoint& WithOracleSettings(OracleSettings&& value) { SetOracleSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the SAP ASE source and target endpoint. For more
     * information, see the <code>SybaseSettings</code> structure.</p>
     */
    inline const SybaseSettings& GetSybaseSettings() const{ return m_sybaseSettings; }
    inline bool SybaseSettingsHasBeenSet() const { return m_sybaseSettingsHasBeenSet; }
    inline void SetSybaseSettings(const SybaseSettings& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = value; }
    inline void SetSybaseSettings(SybaseSettings&& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = std::move(value); }
    inline Endpoint& WithSybaseSettings(const SybaseSettings& value) { SetSybaseSettings(value); return *this;}
    inline Endpoint& WithSybaseSettings(SybaseSettings&& value) { SetSybaseSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Microsoft SQL Server source and target endpoint. For
     * more information, see the <code>MicrosoftSQLServerSettings</code> structure.</p>
     */
    inline const MicrosoftSQLServerSettings& GetMicrosoftSQLServerSettings() const{ return m_microsoftSQLServerSettings; }
    inline bool MicrosoftSQLServerSettingsHasBeenSet() const { return m_microsoftSQLServerSettingsHasBeenSet; }
    inline void SetMicrosoftSQLServerSettings(const MicrosoftSQLServerSettings& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = value; }
    inline void SetMicrosoftSQLServerSettings(MicrosoftSQLServerSettings&& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = std::move(value); }
    inline Endpoint& WithMicrosoftSQLServerSettings(const MicrosoftSQLServerSettings& value) { SetMicrosoftSQLServerSettings(value); return *this;}
    inline Endpoint& WithMicrosoftSQLServerSettings(MicrosoftSQLServerSettings&& value) { SetMicrosoftSQLServerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the IBM Db2 LUW source endpoint. For more information, see
     * the <code>IBMDb2Settings</code> structure. </p>
     */
    inline const IBMDb2Settings& GetIBMDb2Settings() const{ return m_iBMDb2Settings; }
    inline bool IBMDb2SettingsHasBeenSet() const { return m_iBMDb2SettingsHasBeenSet; }
    inline void SetIBMDb2Settings(const IBMDb2Settings& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = value; }
    inline void SetIBMDb2Settings(IBMDb2Settings&& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = std::move(value); }
    inline Endpoint& WithIBMDb2Settings(const IBMDb2Settings& value) { SetIBMDb2Settings(value); return *this;}
    inline Endpoint& WithIBMDb2Settings(IBMDb2Settings&& value) { SetIBMDb2Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocDbSettings& GetDocDbSettings() const{ return m_docDbSettings; }
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }
    inline void SetDocDbSettings(const DocDbSettings& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = value; }
    inline void SetDocDbSettings(DocDbSettings&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::move(value); }
    inline Endpoint& WithDocDbSettings(const DocDbSettings& value) { SetDocDbSettings(value); return *this;}
    inline Endpoint& WithDocDbSettings(DocDbSettings&& value) { SetDocDbSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Redis target endpoint. For more information, see the
     * <code>RedisSettings</code> structure.</p>
     */
    inline const RedisSettings& GetRedisSettings() const{ return m_redisSettings; }
    inline bool RedisSettingsHasBeenSet() const { return m_redisSettingsHasBeenSet; }
    inline void SetRedisSettings(const RedisSettings& value) { m_redisSettingsHasBeenSet = true; m_redisSettings = value; }
    inline void SetRedisSettings(RedisSettings&& value) { m_redisSettingsHasBeenSet = true; m_redisSettings = std::move(value); }
    inline Endpoint& WithRedisSettings(const RedisSettings& value) { SetRedisSettings(value); return *this;}
    inline Endpoint& WithRedisSettings(RedisSettings&& value) { SetRedisSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings in JSON format for the source GCP MySQL endpoint.</p>
     */
    inline const GcpMySQLSettings& GetGcpMySQLSettings() const{ return m_gcpMySQLSettings; }
    inline bool GcpMySQLSettingsHasBeenSet() const { return m_gcpMySQLSettingsHasBeenSet; }
    inline void SetGcpMySQLSettings(const GcpMySQLSettings& value) { m_gcpMySQLSettingsHasBeenSet = true; m_gcpMySQLSettings = value; }
    inline void SetGcpMySQLSettings(GcpMySQLSettings&& value) { m_gcpMySQLSettingsHasBeenSet = true; m_gcpMySQLSettings = std::move(value); }
    inline Endpoint& WithGcpMySQLSettings(const GcpMySQLSettings& value) { SetGcpMySQLSettings(value); return *this;}
    inline Endpoint& WithGcpMySQLSettings(GcpMySQLSettings&& value) { SetGcpMySQLSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the Amazon Timestream target endpoint. For more information,
     * see the <code>TimestreamSettings</code> structure.</p>
     */
    inline const TimestreamSettings& GetTimestreamSettings() const{ return m_timestreamSettings; }
    inline bool TimestreamSettingsHasBeenSet() const { return m_timestreamSettingsHasBeenSet; }
    inline void SetTimestreamSettings(const TimestreamSettings& value) { m_timestreamSettingsHasBeenSet = true; m_timestreamSettings = value; }
    inline void SetTimestreamSettings(TimestreamSettings&& value) { m_timestreamSettingsHasBeenSet = true; m_timestreamSettings = std::move(value); }
    inline Endpoint& WithTimestreamSettings(const TimestreamSettings& value) { SetTimestreamSettings(value); return *this;}
    inline Endpoint& WithTimestreamSettings(TimestreamSettings&& value) { SetTimestreamSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
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

    DmsSslModeValue m_sslMode;
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
