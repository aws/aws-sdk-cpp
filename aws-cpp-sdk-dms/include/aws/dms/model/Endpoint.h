/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/dms/model/ElasticsearchSettings.h>
#include <aws/dms/model/RedshiftSettings.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Endpoint">AWS API
   * Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Endpoint& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Endpoint& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Endpoint& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


    /**
     * <p>The type of endpoint.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint.</p>
     */
    inline Endpoint& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline Endpoint& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline Endpoint& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline Endpoint& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline Endpoint& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline const Aws::String& GetEngineDisplayName() const{ return m_engineDisplayName; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(const Aws::String& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = value; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(Aws::String&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::move(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(const char* value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName.assign(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline Endpoint& WithEngineDisplayName(const Aws::String& value) { SetEngineDisplayName(value); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline Endpoint& WithEngineDisplayName(Aws::String&& value) { SetEngineDisplayName(std::move(value)); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline Endpoint& WithEngineDisplayName(const char* value) { SetEngineDisplayName(value); return *this;}


    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline Endpoint& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline Endpoint& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline Endpoint& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline Endpoint& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline Endpoint& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline Endpoint& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value used to access the endpoint.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline Endpoint& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline Endpoint& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline Endpoint& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const{ return m_extraConnectionAttributes; }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::move(value); }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline void SetExtraConnectionAttributes(const char* value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes.assign(value); }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline Endpoint& WithExtraConnectionAttributes(const Aws::String& value) { SetExtraConnectionAttributes(value); return *this;}

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline Endpoint& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(std::move(value)); return *this;}

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline Endpoint& WithExtraConnectionAttributes(const char* value) { SetExtraConnectionAttributes(value); return *this;}


    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline Endpoint& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline Endpoint& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline Endpoint& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline Endpoint& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline Endpoint& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline Endpoint& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline Endpoint& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline Endpoint& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline Endpoint& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline Endpoint& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used by the service access IAM role.</p>
     */
    inline Endpoint& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The external table definition.</p>
     */
    inline const Aws::String& GetExternalTableDefinition() const{ return m_externalTableDefinition; }

    /**
     * <p>The external table definition.</p>
     */
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }

    /**
     * <p>The external table definition.</p>
     */
    inline void SetExternalTableDefinition(const Aws::String& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = value; }

    /**
     * <p>The external table definition.</p>
     */
    inline void SetExternalTableDefinition(Aws::String&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::move(value); }

    /**
     * <p>The external table definition.</p>
     */
    inline void SetExternalTableDefinition(const char* value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition.assign(value); }

    /**
     * <p>The external table definition.</p>
     */
    inline Endpoint& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}

    /**
     * <p>The external table definition.</p>
     */
    inline Endpoint& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}

    /**
     * <p>The external table definition.</p>
     */
    inline Endpoint& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}


    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline Endpoint& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline Endpoint& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p> Value returned by a call to CreateEndpoint that can be used for
     * cross-account validation. Use it on a subsequent call to CreateEndpoint to
     * create the endpoint with a cross-account. </p>
     */
    inline Endpoint& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const{ return m_dynamoDbSettings; }

    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }

    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline void SetDynamoDbSettings(const DynamoDbSettings& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = value; }

    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline void SetDynamoDbSettings(DynamoDbSettings&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::move(value); }

    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline Endpoint& WithDynamoDbSettings(const DynamoDbSettings& value) { SetDynamoDbSettings(value); return *this;}

    /**
     * <p>The settings for the target DynamoDB database. For more information, see the
     * <code>DynamoDBSettings</code> structure.</p>
     */
    inline Endpoint& WithDynamoDbSettings(DynamoDbSettings&& value) { SetDynamoDbSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline const S3Settings& GetS3Settings() const{ return m_s3Settings; }

    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }

    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline void SetS3Settings(const S3Settings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }

    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline void SetS3Settings(S3Settings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }

    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline Endpoint& WithS3Settings(const S3Settings& value) { SetS3Settings(value); return *this;}

    /**
     * <p>The settings for the S3 target endpoint. For more information, see the
     * <code>S3Settings</code> structure.</p>
     */
    inline Endpoint& WithS3Settings(S3Settings&& value) { SetS3Settings(std::move(value)); return *this;}


    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const{ return m_dmsTransferSettings; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline bool DmsTransferSettingsHasBeenSet() const { return m_dmsTransferSettingsHasBeenSet; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline void SetDmsTransferSettings(const DmsTransferSettings& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = value; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline void SetDmsTransferSettings(DmsTransferSettings&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::move(value); }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline Endpoint& WithDmsTransferSettings(const DmsTransferSettings& value) { SetDmsTransferSettings(value); return *this;}

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value.</p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline Endpoint& WithDmsTransferSettings(DmsTransferSettings&& value) { SetDmsTransferSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const{ return m_mongoDbSettings; }

    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }

    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline void SetMongoDbSettings(const MongoDbSettings& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = value; }

    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline void SetMongoDbSettings(MongoDbSettings&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::move(value); }

    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline Endpoint& WithMongoDbSettings(const MongoDbSettings& value) { SetMongoDbSettings(value); return *this;}

    /**
     * <p>The settings for the MongoDB source endpoint. For more information, see the
     * <code>MongoDbSettings</code> structure.</p>
     */
    inline Endpoint& WithMongoDbSettings(MongoDbSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline const KinesisSettings& GetKinesisSettings() const{ return m_kinesisSettings; }

    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }

    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline void SetKinesisSettings(const KinesisSettings& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = value; }

    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline void SetKinesisSettings(KinesisSettings&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::move(value); }

    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline Endpoint& WithKinesisSettings(const KinesisSettings& value) { SetKinesisSettings(value); return *this;}

    /**
     * <p>The settings for the Amazon Kinesis source endpoint. For more information,
     * see the <code>KinesisSettings</code> structure.</p>
     */
    inline Endpoint& WithKinesisSettings(KinesisSettings&& value) { SetKinesisSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const{ return m_elasticsearchSettings; }

    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }

    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline void SetElasticsearchSettings(const ElasticsearchSettings& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = value; }

    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline void SetElasticsearchSettings(ElasticsearchSettings&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::move(value); }

    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline Endpoint& WithElasticsearchSettings(const ElasticsearchSettings& value) { SetElasticsearchSettings(value); return *this;}

    /**
     * <p>The settings for the Elasticsearch source endpoint. For more information, see
     * the <code>ElasticsearchSettings</code> structure.</p>
     */
    inline Endpoint& WithElasticsearchSettings(ElasticsearchSettings&& value) { SetElasticsearchSettings(std::move(value)); return *this;}


    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline const RedshiftSettings& GetRedshiftSettings() const{ return m_redshiftSettings; }

    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }

    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline void SetRedshiftSettings(const RedshiftSettings& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = value; }

    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline void SetRedshiftSettings(RedshiftSettings&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::move(value); }

    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline Endpoint& WithRedshiftSettings(const RedshiftSettings& value) { SetRedshiftSettings(value); return *this;}

    /**
     * <p>Settings for the Amazon Redshift endpoint</p>
     */
    inline Endpoint& WithRedshiftSettings(RedshiftSettings&& value) { SetRedshiftSettings(std::move(value)); return *this;}

  private:

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet;

    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_extraConnectionAttributes;
    bool m_extraConnectionAttributesHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    DmsSslModeValue m_sslMode;
    bool m_sslModeHasBeenSet;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    DynamoDbSettings m_dynamoDbSettings;
    bool m_dynamoDbSettingsHasBeenSet;

    S3Settings m_s3Settings;
    bool m_s3SettingsHasBeenSet;

    DmsTransferSettings m_dmsTransferSettings;
    bool m_dmsTransferSettingsHasBeenSet;

    MongoDbSettings m_mongoDbSettings;
    bool m_mongoDbSettingsHasBeenSet;

    KinesisSettings m_kinesisSettings;
    bool m_kinesisSettingsHasBeenSet;

    ElasticsearchSettings m_elasticsearchSettings;
    bool m_elasticsearchSettingsHasBeenSet;

    RedshiftSettings m_redshiftSettings;
    bool m_redshiftSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
