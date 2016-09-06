/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(const Aws::Utils::Json::JsonValue& jsonValue);
    Endpoint& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

    /**
     * <p>The database endpoint identifier. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

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
    inline Endpoint& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(value); return *this;}

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
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline Endpoint& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline Endpoint& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The database engine name.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The database engine name.</p>
     */
    inline Endpoint& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name.</p>
     */
    inline Endpoint& WithEngineName(Aws::String&& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name.</p>
     */
    inline Endpoint& WithEngineName(const char* value) { SetEngineName(value); return *this;}

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name used to connect to the endpoint.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

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
    inline Endpoint& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

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
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server at the endpoint.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

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
    inline Endpoint& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

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
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database at the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

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
    inline Endpoint& WithDatabaseName(Aws::String&& value) { SetDatabaseName(value); return *this;}

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
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

    /**
     * <p>Additional connection attributes used to connect to the endpoint.</p>
     */
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

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
    inline Endpoint& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(value); return *this;}

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
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline Endpoint& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline Endpoint& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
     */
    inline Endpoint& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier that will be used to encrypt the connection
     * parameters. If you do not specify a value for the KmsKeyId parameter, then AWS
     * DMS will use your default encryption key. AWS KMS creates the default encryption
     * key for your AWS account. Your AWS account has a different default encryption
     * key for each AWS region.</p>
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
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

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
    inline Endpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(value); return *this;}

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
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) used for SSL connection to the endpoint.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

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
    inline Endpoint& WithCertificateArn(Aws::String&& value) { SetCertificateArn(value); return *this;}

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
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The SSL mode used to connect to the endpoint.</p> <p>SSL mode can be one of
     * four values: none, require, verify-ca, verify-full. </p> <p>The default value is
     * none.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

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
    inline Endpoint& WithSslMode(DmsSslModeValue&& value) { SetSslMode(value); return *this;}

  private:
    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet;
    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet;
    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;
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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
