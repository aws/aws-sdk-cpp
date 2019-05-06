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
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReplicationEndpointTypeValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/DmsSslModeValue.h>
#include <aws/dms/model/DynamoDbSettings.h>
#include <aws/dms/model/S3Settings.h>
#include <aws/dms/model/DmsTransferSettings.h>
#include <aws/dms/model/MongoDbSettings.h>
#include <aws/dms/model/KinesisSettings.h>
#include <aws/dms/model/ElasticsearchSettings.h>
#include <aws/dms/model/RedshiftSettings.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpointMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API CreateEndpointRequest : public DatabaseMigrationServiceRequest
  {
  public:
    CreateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateEndpointRequest& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline CreateEndpointRequest& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline CreateEndpointRequest& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


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
    inline CreateEndpointRequest& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline CreateEndpointRequest& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline CreateEndpointRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline CreateEndpointRequest& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The type of engine for the endpoint. Valid values, depending on the
     * <code>EndPointType</code> value, include <code>mysql</code>,
     * <code>oracle</code>, <code>postgres</code>, <code>mariadb</code>,
     * <code>aurora</code>, <code>aurora-postgresql</code>, <code>redshift</code>,
     * <code>s3</code>, <code>db2</code>, <code>azuredb</code>, <code>sybase</code>,
     * <code>dynamodb</code>, <code>mongodb</code>, and <code>sqlserver</code>.</p>
     */
    inline CreateEndpointRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password to be used to log in to the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


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
    inline CreateEndpointRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline CreateEndpointRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server where the endpoint database resides.</p>
     */
    inline CreateEndpointRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


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
    inline CreateEndpointRequest& WithPort(int value) { SetPort(value); return *this;}


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
    inline CreateEndpointRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint database.</p>
     */
    inline CreateEndpointRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const{ return m_extraConnectionAttributes; }

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::move(value); }

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline void SetExtraConnectionAttributes(const char* value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes.assign(value); }

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline CreateEndpointRequest& WithExtraConnectionAttributes(const Aws::String& value) { SetExtraConnectionAttributes(value); return *this;}

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline CreateEndpointRequest& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(std::move(value)); return *this;}

    /**
     * <p>Additional attributes associated with the connection.</p>
     */
    inline CreateEndpointRequest& WithExtraConnectionAttributes(const char* value) { SetExtraConnectionAttributes(value); return *this;}


    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline CreateEndpointRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline CreateEndpointRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier to use to encrypt the connection parameters. If
     * you don't specify a value for the <code>KmsKeyId</code> parameter, then AWS DMS
     * uses your default encryption key. AWS KMS creates the default encryption key for
     * your AWS account. Your AWS account has a different default encryption key for
     * each AWS Region.</p>
     */
    inline CreateEndpointRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline CreateEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline CreateEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline CreateEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be added to the endpoint.</p>
     */
    inline CreateEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline CreateEndpointRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline CreateEndpointRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline CreateEndpointRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }

    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }

    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline CreateEndpointRequest& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}

    /**
     * <p>The Secure Sockets Layer (SSL) mode to use for the SSL connection. The SSL
     * mode can be one of four values: <code>none</code>, <code>require</code>,
     * <code>verify-ca</code>, <code>verify-full</code>. The default value is
     * <code>none</code>.</p>
     */
    inline CreateEndpointRequest& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline CreateEndpointRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline CreateEndpointRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the endpoint. </p>
     */
    inline CreateEndpointRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The external table definition. </p>
     */
    inline const Aws::String& GetExternalTableDefinition() const{ return m_externalTableDefinition; }

    /**
     * <p>The external table definition. </p>
     */
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }

    /**
     * <p>The external table definition. </p>
     */
    inline void SetExternalTableDefinition(const Aws::String& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = value; }

    /**
     * <p>The external table definition. </p>
     */
    inline void SetExternalTableDefinition(Aws::String&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::move(value); }

    /**
     * <p>The external table definition. </p>
     */
    inline void SetExternalTableDefinition(const char* value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition.assign(value); }

    /**
     * <p>The external table definition. </p>
     */
    inline CreateEndpointRequest& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}

    /**
     * <p>The external table definition. </p>
     */
    inline CreateEndpointRequest& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}

    /**
     * <p>The external table definition. </p>
     */
    inline CreateEndpointRequest& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}


    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline const DynamoDbSettings& GetDynamoDbSettings() const{ return m_dynamoDbSettings; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline bool DynamoDbSettingsHasBeenSet() const { return m_dynamoDbSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline void SetDynamoDbSettings(const DynamoDbSettings& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline void SetDynamoDbSettings(DynamoDbSettings&& value) { m_dynamoDbSettingsHasBeenSet = true; m_dynamoDbSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithDynamoDbSettings(const DynamoDbSettings& value) { SetDynamoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon DynamoDB endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.DynamoDB.html">Using
     * Object Mapping to Migrate Data to DynamoDB</a> in the <i>AWS Database Migration
     * Service User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithDynamoDbSettings(DynamoDbSettings&& value) { SetDynamoDbSettings(std::move(value)); return *this;}


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
    inline CreateEndpointRequest& WithS3Settings(const S3Settings& value) { SetS3Settings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon S3 endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring">Extra
     * Connection Attributes When Using Amazon S3 as a Target for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithS3Settings(S3Settings&& value) { SetS3Settings(std::move(value)); return *this;}


    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
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
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
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
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
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
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
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
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline CreateEndpointRequest& WithDmsTransferSettings(const DmsTransferSettings& value) { SetDmsTransferSettings(value); return *this;}

    /**
     * <p>The settings in JSON format for the DMS transfer type of source endpoint.
     * </p> <p>Possible attributes include the following:</p> <ul> <li> <p>
     * <code>serviceAccessRoleArn</code> - The IAM role that has permission to access
     * the Amazon S3 bucket.</p> </li> <li> <p> <code>bucketName</code> - The name of
     * the S3 bucket to use.</p> </li> <li> <p> <code>compressionType</code> - An
     * optional parameter to use GZIP to compress the target files. To use GZIP, set
     * this value to <code>NONE</code> (the default). To keep the files uncompressed,
     * don't use this value. </p> </li> </ul> <p>Shorthand syntax for these attributes
     * is as follows:
     * <code>ServiceAccessRoleArn=string,BucketName=string,CompressionType=string</code>
     * </p> <p>JSON syntax for these attributes is as follows: <code>{
     * "ServiceAccessRoleArn": "string", "BucketName": "string", "CompressionType":
     * "none"|"gzip" } </code> </p>
     */
    inline CreateEndpointRequest& WithDmsTransferSettings(DmsTransferSettings&& value) { SetDmsTransferSettings(std::move(value)); return *this;}


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
    inline CreateEndpointRequest& WithMongoDbSettings(const MongoDbSettings& value) { SetMongoDbSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the source MongoDB endpoint. For more information
     * about the available settings, see the configuration properties section in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.MongoDB.html">
     * Using MongoDB as a Target for AWS Database Migration Service</a> in the <i>AWS
     * Database Migration Service User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithMongoDbSettings(MongoDbSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline const KinesisSettings& GetKinesisSettings() const{ return m_kinesisSettings; }

    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline bool KinesisSettingsHasBeenSet() const { return m_kinesisSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline void SetKinesisSettings(const KinesisSettings& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = value; }

    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline void SetKinesisSettings(KinesisSettings&& value) { m_kinesisSettingsHasBeenSet = true; m_kinesisSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithKinesisSettings(const KinesisSettings& value) { SetKinesisSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Amazon Kinesis Data Streams endpoint.
     * For more information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kinesis.html#CHAP_Target.Kinesis.ObjectMapping
     * ">Using Object Mapping to Migrate Data to a Kinesis Data Stream</a> in the
     * <i>AWS Database Migration User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithKinesisSettings(KinesisSettings&& value) { SetKinesisSettings(std::move(value)); return *this;}


    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline const ElasticsearchSettings& GetElasticsearchSettings() const{ return m_elasticsearchSettings; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline bool ElasticsearchSettingsHasBeenSet() const { return m_elasticsearchSettingsHasBeenSet; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline void SetElasticsearchSettings(const ElasticsearchSettings& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = value; }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline void SetElasticsearchSettings(ElasticsearchSettings&& value) { m_elasticsearchSettingsHasBeenSet = true; m_elasticsearchSettings = std::move(value); }

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithElasticsearchSettings(const ElasticsearchSettings& value) { SetElasticsearchSettings(value); return *this;}

    /**
     * <p>Settings in JSON format for the target Elasticsearch endpoint. For more
     * information about the available settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Elasticsearch.html#CHAP_Target.Elasticsearch.Configuration">Extra
     * Connection Attributes When Using Elasticsearch as a Target for AWS DMS</a> in
     * the <i>AWS Database Migration User Guide.</i> </p>
     */
    inline CreateEndpointRequest& WithElasticsearchSettings(ElasticsearchSettings&& value) { SetElasticsearchSettings(std::move(value)); return *this;}


    
    inline const RedshiftSettings& GetRedshiftSettings() const{ return m_redshiftSettings; }

    
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }

    
    inline void SetRedshiftSettings(const RedshiftSettings& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = value; }

    
    inline void SetRedshiftSettings(RedshiftSettings&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::move(value); }

    
    inline CreateEndpointRequest& WithRedshiftSettings(const RedshiftSettings& value) { SetRedshiftSettings(value); return *this;}

    
    inline CreateEndpointRequest& WithRedshiftSettings(RedshiftSettings&& value) { SetRedshiftSettings(std::move(value)); return *this;}

  private:

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

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

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

    ElasticsearchSettings m_elasticsearchSettings;
    bool m_elasticsearchSettingsHasBeenSet;

    RedshiftSettings m_redshiftSettings;
    bool m_redshiftSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
