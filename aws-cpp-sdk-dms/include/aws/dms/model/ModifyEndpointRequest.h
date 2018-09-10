﻿/*
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
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReplicationEndpointTypeValue.h>
#include <aws/dms/model/DmsSslModeValue.h>
#include <aws/dms/model/DynamoDbSettings.h>
#include <aws/dms/model/S3Settings.h>
#include <aws/dms/model/DmsTransferSettings.h>
#include <aws/dms/model/MongoDbSettings.h>
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
    inline ModifyEndpointRequest& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline ModifyEndpointRequest& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline ModifyEndpointRequest& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


    /**
     * <p>The type of endpoint.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }

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
    inline ModifyEndpointRequest& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline ModifyEndpointRequest& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * EndPointType, include mysql, oracle, postgres, mariadb, aurora,
     * aurora-postgresql, redshift, s3, db2, azuredb, sybase, sybase, dynamodb,
     * mongodb, and sqlserver.</p>
     */
    inline ModifyEndpointRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The user name to be used to login to the endpoint database.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

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
     * <p>The SSL mode to be used.</p> <p>SSL mode can be one of four values: none,
     * require, verify-ca, verify-full. </p> <p>The default value is none.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }

    /**
     * <p>The SSL mode to be used.</p> <p>SSL mode can be one of four values: none,
     * require, verify-ca, verify-full. </p> <p>The default value is none.</p>
     */
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The SSL mode to be used.</p> <p>SSL mode can be one of four values: none,
     * require, verify-ca, verify-full. </p> <p>The default value is none.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p>The SSL mode to be used.</p> <p>SSL mode can be one of four values: none,
     * require, verify-ca, verify-full. </p> <p>The default value is none.</p>
     */
    inline ModifyEndpointRequest& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}

    /**
     * <p>The SSL mode to be used.</p> <p>SSL mode can be one of four values: none,
     * require, verify-ca, verify-full. </p> <p>The default value is none.</p>
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
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see the <b>Using Object Mapping to
     * Migrate Data to DynamoDB</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">
     * Using an Amazon DynamoDB Database as a Target for AWS Database Migration
     * Service</a>. </p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const{ return m_dynamoDbSettings; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see the <b>Using Object Mapping to
     * Migrate Data to DynamoDB</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">
     * Using an Amazon DynamoDB Database as a Target for AWS Database Migration
     * Service</a>. </p>
     */
    inline void SetDynamoDbSettings(const DynamoDbSettings& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see the <b>Using Object Mapping to
     * Migrate Data to DynamoDB</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">
     * Using an Amazon DynamoDB Database as a Target for AWS Database Migration
     * Service</a>. </p>
     */
    inline void SetDynamoDbSettings(DynamoDbSettings&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see the <b>Using Object Mapping to
     * Migrate Data to DynamoDB</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">
     * Using an Amazon DynamoDB Database as a Target for AWS Database Migration
     * Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithDynamoDbSettings(const DynamoDbSettings& value) { SetDynamoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see the <b>Using Object Mapping to
     * Migrate Data to DynamoDB</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">
     * Using an Amazon DynamoDB Database as a Target for AWS Database Migration
     * Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithDynamoDbSettings(DynamoDbSettings&& value) { SetDynamoDbSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target S3 endpoint. For more information
     * about the available settings, see the <b>Extra Connection Attributes</b> section
     * at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline const S3Settings& GetS3Settings() const{ return m_s3Settings; }

    /**
     * <p>Settings in JSON format for the target S3 endpoint. For more information
     * about the available settings, see the <b>Extra Connection Attributes</b> section
     * at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline void SetS3Settings(const S3Settings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }

    /**
     * <p>Settings in JSON format for the target S3 endpoint. For more information
     * about the available settings, see the <b>Extra Connection Attributes</b> section
     * at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline void SetS3Settings(S3Settings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target S3 endpoint. For more information
     * about the available settings, see the <b>Extra Connection Attributes</b> section
     * at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithS3Settings(const S3Settings& value) { SetS3Settings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target S3 endpoint. For more information
     * about the available settings, see the <b>Extra Connection Attributes</b> section
     * at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithS3Settings(S3Settings&& value) { SetS3Settings(std::move(value)); return *this;}


    /**
     * <p> The settings in JSON format for the DMS Transfer type source endpoint. </p>
     * <p>Attributes include:</p> <ul> <li> <p>serviceAccessRoleArn - The IAM role that
     * has permission to access the Amazon S3 bucket.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> <li> <p>compressionType - An
     * optional parameter to use GZIP to compress the target files. Set to NONE (the
     * default) or do not use to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax: ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</p> <p>JSON syntax:</p> <p> {
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </p>
     */
    inline const DmsTransferSettings& GetDmsTransferSettings() const{ return m_dmsTransferSettings; }

    /**
     * <p> The settings in JSON format for the DMS Transfer type source endpoint. </p>
     * <p>Attributes include:</p> <ul> <li> <p>serviceAccessRoleArn - The IAM role that
     * has permission to access the Amazon S3 bucket.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> <li> <p>compressionType - An
     * optional parameter to use GZIP to compress the target files. Set to NONE (the
     * default) or do not use to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax: ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</p> <p>JSON syntax:</p> <p> {
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </p>
     */
    inline void SetDmsTransferSettings(const DmsTransferSettings& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = value; }

    /**
     * <p> The settings in JSON format for the DMS Transfer type source endpoint. </p>
     * <p>Attributes include:</p> <ul> <li> <p>serviceAccessRoleArn - The IAM role that
     * has permission to access the Amazon S3 bucket.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> <li> <p>compressionType - An
     * optional parameter to use GZIP to compress the target files. Set to NONE (the
     * default) or do not use to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax: ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</p> <p>JSON syntax:</p> <p> {
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </p>
     */
    inline void SetDmsTransferSettings(DmsTransferSettings&& value) { m_dmsTransferSettingsHasBeenSet = true; m_dmsTransferSettings = std::move(value); }

    /**
     * <p> The settings in JSON format for the DMS Transfer type source endpoint. </p>
     * <p>Attributes include:</p> <ul> <li> <p>serviceAccessRoleArn - The IAM role that
     * has permission to access the Amazon S3 bucket.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> <li> <p>compressionType - An
     * optional parameter to use GZIP to compress the target files. Set to NONE (the
     * default) or do not use to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax: ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</p> <p>JSON syntax:</p> <p> {
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </p>
     */
    inline ModifyEndpointRequest& WithDmsTransferSettings(const DmsTransferSettings& value) { SetDmsTransferSettings(value); return *this;}

    /**
     * <p> The settings in JSON format for the DMS Transfer type source endpoint. </p>
     * <p>Attributes include:</p> <ul> <li> <p>serviceAccessRoleArn - The IAM role that
     * has permission to access the Amazon S3 bucket.</p> </li> <li> <p>BucketName -
     * The name of the S3 bucket to use.</p> </li> <li> <p>compressionType - An
     * optional parameter to use GZIP to compress the target files. Set to NONE (the
     * default) or do not use to leave the files uncompressed.</p> </li> </ul>
     * <p>Shorthand syntax: ServiceAccessRoleArn=string
     * ,BucketName=string,CompressionType=string</p> <p>JSON syntax:</p> <p> {
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </p>
     */
    inline ModifyEndpointRequest& WithDmsTransferSettings(DmsTransferSettings&& value) { SetDmsTransferSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the <b>Configuration Properties When Using
     * MongoDB as a Source for AWS Database Migration Service</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline const MongoDbSettings& GetMongoDbSettings() const{ return m_mongoDbSettings; }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the <b>Configuration Properties When Using
     * MongoDB as a Source for AWS Database Migration Service</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline void SetMongoDbSettings(const MongoDbSettings& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = value; }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the <b>Configuration Properties When Using
     * MongoDB as a Source for AWS Database Migration Service</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline void SetMongoDbSettings(MongoDbSettings&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the <b>Configuration Properties When Using
     * MongoDB as a Source for AWS Database Migration Service</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithMongoDbSettings(const MongoDbSettings& value) { SetMongoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the <b>Configuration Properties When Using
     * MongoDB as a Source for AWS Database Migration Service</b> section at <a
     * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using Amazon S3 as a Target for AWS Database Migration Service</a>. </p>
     */
    inline ModifyEndpointRequest& WithMongoDbSettings(MongoDbSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
