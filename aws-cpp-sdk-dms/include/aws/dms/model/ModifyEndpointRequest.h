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
  class AWS_DATABASEMIGRATIONSERVICE_API ModifyEndpointRequest : public DatabaseMigrationServiceRequest
  {
  public:
    ModifyEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyEndpoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline ModifyEndpointRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ModifyEndpointRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ModifyEndpointRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyEndpointRequest& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyEndpointRequest& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyEndpointRequest& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline ModifyEndpointRequest& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline ModifyEndpointRequest& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndpointType, include <code>"mysql"</code>, <code>"oracle"</code>,
     * <code>"postgres"</code>, <code>"mariadb"</code>, <code>"aurora"</code>,
     * <code>"aurora-postgresql"</code>, <code>"redshift"</code>, <code>"s3"</code>,
     * <code>"db2"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, and <code>"neptune"</code>.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password to be used to login to the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline ModifyEndpointRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline ModifyEndpointRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline ModifyEndpointRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The port used by the endpoint database.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port used by the endpoint database.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port used by the endpoint database.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port used by the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the endpoint database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline ModifyEndpointRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const{ return m_extraConnectionAttributes; }

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::move(value); }

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline void SetExtraConnectionAttributes(const char* value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes.assign(value); }

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline ModifyEndpointRequest& WithExtraConnectionAttributes(const Aws::String& value) { SetExtraConnectionAttributes(value); return *this;}

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline ModifyEndpointRequest& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(std::move(value)); return *this;}

    /**
     * <p>Additional attributes associated with the connection. To reset this
     * parameter, pass the empty string ("") as an argument.</p>
     */
    inline ModifyEndpointRequest& WithExtraConnectionAttributes(const char* value) { SetExtraConnectionAttributes(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline ModifyEndpointRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline ModifyEndpointRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline ModifyEndpointRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }

    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }

    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline ModifyEndpointRequest& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}

    /**
     * <p>The SSL mode used to connect to the endpoint. The default value is
     * <code>none</code>.</p>
     */
    inline ModifyEndpointRequest& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline ModifyEndpointRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline ModifyEndpointRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role you want to use
     * to modify the endpoint. </p>
     */
    inline ModifyEndpointRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


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
    inline ModifyEndpointRequest& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}

    /**
     * <p>The external table definition.</p>
     */
    inline ModifyEndpointRequest& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}

    /**
     * <p>The external table definition.</p>
     */
    inline ModifyEndpointRequest& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}


    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const{ return m_dynamoDbSettings; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline void SetDynamoDbSettings(const DynamoDbSettings& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline void SetDynamoDbSettings(DynamoDbSettings&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithDynamoDbSettings(const DynamoDbSettings& value) { SetDynamoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithDynamoDbSettings(DynamoDbSettings&& value) { SetDynamoDbSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const S3Settings& GetS3Settings() const{ return m_s3Settings; }

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetS3Settings(const S3Settings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetS3Settings(S3Settings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithS3Settings(const S3Settings& value) { SetS3Settings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithS3Settings(S3Settings&& value) { SetS3Settings(std::move(value)); return *this;}


    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const{ return m_dmsTransferSettings; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline bool DmsTransferSettingsHasBeenSet() const { return m_dmsTransferSettingsHasBeenSet; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline void SetDmsTransferSettings(const DmsTransferSettings& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = value; }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline void SetDmsTransferSettings(DmsTransferSettings&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::move(value); }

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline ModifyEndpointRequest& WithDmsTransferSettings(const DmsTransferSettings& value) { SetDmsTransferSettings(value); return *this;}

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Attributes include the following:</p> <ul> <li> <p>serviceAccessRoleArn
     * - The AWS Identity and Access Management (IAM) role that has permission to
     * access the Amazon S3 bucket.</p> </li> <li> <p>BucketName - The name of the S3
     * bucket to use.</p> </li> <li> <p>compressionType - An optional parameter to use
     * GZIP to compress the target files. Either set this parameter to NONE (the
     * default) or don't use it to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax for these settings is as follows:
     * <code>ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</code> </p> <p>JSON syntax for these
     * settings is as follows: <code>{ "ServiceAccessRoleArn": "string", "BucketName":
     * "string", "CompressionType": "none"|"gzip" } </code> </p>
     */
    inline ModifyEndpointRequest& WithDmsTransferSettings(DmsTransferSettings&& value) { SetDmsTransferSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const{ return m_mongoDbSettings; }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline void SetMongoDbSettings(const MongoDbSettings& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = value; }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline void SetMongoDbSettings(MongoDbSettings&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMongoDbSettings(const MongoDbSettings& value) { SetMongoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMongoDbSettings(MongoDbSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const KinesisSettings& GetKinesisSettings() const{ return m_kinesisSettings; }

    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetKinesisSettings(const KinesisSettings& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = value; }

    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetKinesisSettings(KinesisSettings&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithKinesisSettings(const KinesisSettings& value) { SetKinesisSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target endpoint for Amazon Kinesis Data
     * Streams. For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html">Using
     * Amazon Kinesis Data Streams as a Target for AWS Database Migration Service</a>
     * in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithKinesisSettings(KinesisSettings&& value) { SetKinesisSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline const KafkaSettings& GetKafkaSettings() const{ return m_kafkaSettings; }

    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline bool KafkaSettingsHasBeenSet() const { return m_kafkaSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline void SetKafkaSettings(const KafkaSettings& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = value; }

    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline void SetKafkaSettings(KafkaSettings&& value) { m_kafkaSettingsHasBeenSet = true; m_kafkaSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithKafkaSettings(const KafkaSettings& value) { SetKafkaSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Apache Kafka endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithKafkaSettings(KafkaSettings&& value) { SetKafkaSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const{ return m_elasticsearchSettings; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetElasticsearchSettings(const ElasticsearchSettings& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = value; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetElasticsearchSettings(ElasticsearchSettings&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithElasticsearchSettings(const ElasticsearchSettings& value) { SetElasticsearchSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithElasticsearchSettings(ElasticsearchSettings&& value) { SetElasticsearchSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline const NeptuneSettings& GetNeptuneSettings() const{ return m_neptuneSettings; }

    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline bool NeptuneSettingsHasBeenSet() const { return m_neptuneSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline void SetNeptuneSettings(const NeptuneSettings& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline void SetNeptuneSettings(NeptuneSettings&& value) { m_neptuneSettingsHasBeenSet = true; m_neptuneSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithNeptuneSettings(const NeptuneSettings& value) { SetNeptuneSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon Neptune endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.EndpointSettings">Specifying
     * Endpoint Settings for Amazon Neptune as a Target</a> in the <i>AWS Database
     * Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithNeptuneSettings(NeptuneSettings&& value) { SetNeptuneSettings(std::move(value)); return *this;}


    
    inline const RedshiftSettings& GetRedshiftSettings() const{ return m_redshiftSettings; }

    
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }

    
    inline void SetRedshiftSettings(const RedshiftSettings& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = value; }

    
    inline void SetRedshiftSettings(RedshiftSettings&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::move(value); }

    
    inline ModifyEndpointRequest& WithRedshiftSettings(const RedshiftSettings& value) { SetRedshiftSettings(value); return *this;}

    
    inline ModifyEndpointRequest& WithRedshiftSettings(RedshiftSettings&& value) { SetRedshiftSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const PostgreSQLSettings& GetPostgreSQLSettings() const{ return m_postgreSQLSettings; }

    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool PostgreSQLSettingsHasBeenSet() const { return m_postgreSQLSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetPostgreSQLSettings(const PostgreSQLSettings& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = value; }

    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetPostgreSQLSettings(PostgreSQLSettings&& value) { m_postgreSQLSettingsHasBeenSet = true; m_postgreSQLSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithPostgreSQLSettings(const PostgreSQLSettings& value) { SetPostgreSQLSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source and target PostgreSQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * connection attributes when using PostgreSQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.PostgreSQL.ConnectionAttrib">
     * Extra connection attributes when using PostgreSQL as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithPostgreSQLSettings(PostgreSQLSettings&& value) { SetPostgreSQLSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const MySQLSettings& GetMySQLSettings() const{ return m_mySQLSettings; }

    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool MySQLSettingsHasBeenSet() const { return m_mySQLSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetMySQLSettings(const MySQLSettings& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = value; }

    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetMySQLSettings(MySQLSettings&& value) { m_mySQLSettingsHasBeenSet = true; m_mySQLSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMySQLSettings(const MySQLSettings& value) { SetMySQLSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source and target MySQL endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MySQL.ConnectionAttrib">Extra
     * connection attributes when using MySQL as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.MySQL.ConnectionAttrib">Extra
     * connection attributes when using a MySQL-compatible database as a target for AWS
     * DMS</a> in the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMySQLSettings(MySQLSettings&& value) { SetMySQLSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const OracleSettings& GetOracleSettings() const{ return m_oracleSettings; }

    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetOracleSettings(const OracleSettings& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = value; }

    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetOracleSettings(OracleSettings&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithOracleSettings(const OracleSettings& value) { SetOracleSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source and target Oracle endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.ConnectionAttrib">Extra
     * connection attributes when using Oracle as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Oracle.ConnectionAttrib">
     * Extra connection attributes when using Oracle as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithOracleSettings(OracleSettings&& value) { SetOracleSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const SybaseSettings& GetSybaseSettings() const{ return m_sybaseSettings; }

    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool SybaseSettingsHasBeenSet() const { return m_sybaseSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetSybaseSettings(const SybaseSettings& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = value; }

    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetSybaseSettings(SybaseSettings&& value) { m_sybaseSettingsHasBeenSet = true; m_sybaseSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithSybaseSettings(const SybaseSettings& value) { SetSybaseSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source and target SAP ASE endpoint. For
     * information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SAP.ConnectionAttrib">Extra
     * connection attributes when using SAP ASE as a target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithSybaseSettings(SybaseSettings&& value) { SetSybaseSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const MicrosoftSQLServerSettings& GetMicrosoftSQLServerSettings() const{ return m_microsoftSQLServerSettings; }

    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool MicrosoftSQLServerSettingsHasBeenSet() const { return m_microsoftSQLServerSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetMicrosoftSQLServerSettings(const MicrosoftSQLServerSettings& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = value; }

    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetMicrosoftSQLServerSettings(MicrosoftSQLServerSettings&& value) { m_microsoftSQLServerSettingsHasBeenSet = true; m_microsoftSQLServerSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMicrosoftSQLServerSettings(const MicrosoftSQLServerSettings& value) { SetMicrosoftSQLServerSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source and target Microsoft SQL Server
     * endpoint. For information about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.SQLServer.ConnectionAttrib">Extra
     * connection attributes when using SQL Server as a source for AWS DMS</a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.SQLServer.ConnectionAttrib">
     * Extra connection attributes when using SQL Server as a target for AWS DMS</a> in
     * the <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithMicrosoftSQLServerSettings(MicrosoftSQLServerSettings&& value) { SetMicrosoftSQLServerSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const IBMDb2Settings& GetIBMDb2Settings() const{ return m_iBMDb2Settings; }

    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool IBMDb2SettingsHasBeenSet() const { return m_iBMDb2SettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetIBMDb2Settings(const IBMDb2Settings& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = value; }

    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetIBMDb2Settings(IBMDb2Settings&& value) { m_iBMDb2SettingsHasBeenSet = true; m_iBMDb2Settings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithIBMDb2Settings(const IBMDb2Settings& value) { SetIBMDb2Settings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source IBM Db2 LUW endpoint. For information
     * about other available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DB2.ConnectionAttrib">Extra
     * connection attributes when using Db2 LUW as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithIBMDb2Settings(IBMDb2Settings&& value) { SetIBMDb2Settings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline const DocDbSettings& GetDocDbSettings() const{ return m_docDbSettings; }

    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetDocDbSettings(const DocDbSettings& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = value; }

    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline void SetDocDbSettings(DocDbSettings&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithDocDbSettings(const DocDbSettings& value) { SetDocDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source DocumentDB endpoint. For more
     * information about the available settings, see the configuration properties
     * section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.DocumentDB.html">
     * Using DocumentDB as a Target for AWS Database Migration Service</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline ModifyEndpointRequest& WithDocDbSettings(DocDbSettings&& value) { SetDocDbSettings(std::move(value)); return *this;}

  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet;

    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_extraConnectionAttributes;
    bool m_extraConnectionAttributesHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    DmsSslModeValue m_sslMode;
    bool m_sslModeHasBeenSet;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet;

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

    KafkaSettings m_kafkaSettings;
    bool m_kafkaSettingsHasBeenSet;

    ElasticsearchSettings m_elasticsearchSettings;
    bool m_elasticsearchSettingsHasBeenSet;

    NeptuneSettings m_neptuneSettings;
    bool m_neptuneSettingsHasBeenSet;

    RedshiftSettings m_redshiftSettings;
    bool m_redshiftSettingsHasBeenSet;

    PostgreSQLSettings m_postgreSQLSettings;
    bool m_postgreSQLSettingsHasBeenSet;

    MySQLSettings m_mySQLSettings;
    bool m_mySQLSettingsHasBeenSet;

    OracleSettings m_oracleSettings;
    bool m_oracleSettingsHasBeenSet;

    SybaseSettings m_sybaseSettings;
    bool m_sybaseSettingsHasBeenSet;

    MicrosoftSQLServerSettings m_microsoftSQLServerSettings;
    bool m_microsoftSQLServerSettingsHasBeenSet;

    IBMDb2Settings m_iBMDb2Settings;
    bool m_iBMDb2SettingsHasBeenSet;

    DocDbSettings m_docDbSettings;
    bool m_docDbSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
