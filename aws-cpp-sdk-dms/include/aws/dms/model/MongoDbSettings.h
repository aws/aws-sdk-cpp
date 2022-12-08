/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/AuthTypeValue.h>
#include <aws/dms/model/AuthMechanismValue.h>
#include <aws/dms/model/NestingLevelValue.h>
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
   * <p>Provides information that defines a MongoDB endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MongoDbSettings">AWS
   * API Reference</a></p>
   */
  class MongoDbSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbSettings();
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name you use to access the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline MongoDbSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline MongoDbSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p> The password for the user account you use to access the MongoDB source
     * endpoint. </p>
     */
    inline MongoDbSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The port value for the MongoDB source endpoint. </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p> The port value for the MongoDB source endpoint. </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p> The port value for the MongoDB source endpoint. </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port value for the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The database name on the MongoDB source endpoint. </p>
     */
    inline MongoDbSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline const AuthTypeValue& GetAuthType() const{ return m_authType; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline void SetAuthType(const AuthTypeValue& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline void SetAuthType(AuthTypeValue&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline MongoDbSettings& WithAuthType(const AuthTypeValue& value) { SetAuthType(value); return *this;}

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>When when set to <code>"no"</code>, user name and password parameters are not
     * used and can be empty. </p>
     */
    inline MongoDbSettings& WithAuthType(AuthTypeValue&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline const AuthMechanismValue& GetAuthMechanism() const{ return m_authMechanism; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline bool AuthMechanismHasBeenSet() const { return m_authMechanismHasBeenSet; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline void SetAuthMechanism(const AuthMechanismValue& value) { m_authMechanismHasBeenSet = true; m_authMechanism = value; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline void SetAuthMechanism(AuthMechanismValue&& value) { m_authMechanismHasBeenSet = true; m_authMechanism = std::move(value); }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline MongoDbSettings& WithAuthMechanism(const AuthMechanismValue& value) { SetAuthMechanism(value); return *this;}

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>For the default value, in MongoDB version 2.x,
     * <code>"default"</code> is <code>"mongodb_cr"</code>. For MongoDB version 3.x or
     * later, <code>"default"</code> is <code>"scram_sha_1"</code>. This setting isn't
     * used when <code>AuthType</code> is set to <code>"no"</code>.</p>
     */
    inline MongoDbSettings& WithAuthMechanism(AuthMechanismValue&& value) { SetAuthMechanism(std::move(value)); return *this;}


    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline const NestingLevelValue& GetNestingLevel() const{ return m_nestingLevel; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline bool NestingLevelHasBeenSet() const { return m_nestingLevelHasBeenSet; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline void SetNestingLevel(const NestingLevelValue& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = value; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline void SetNestingLevel(NestingLevelValue&& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = std::move(value); }

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline MongoDbSettings& WithNestingLevel(const NestingLevelValue& value) { SetNestingLevel(value); return *this;}

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline MongoDbSettings& WithNestingLevel(NestingLevelValue&& value) { SetNestingLevel(std::move(value)); return *this;}


    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline const Aws::String& GetExtractDocId() const{ return m_extractDocId; }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline bool ExtractDocIdHasBeenSet() const { return m_extractDocIdHasBeenSet; }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline void SetExtractDocId(const Aws::String& value) { m_extractDocIdHasBeenSet = true; m_extractDocId = value; }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline void SetExtractDocId(Aws::String&& value) { m_extractDocIdHasBeenSet = true; m_extractDocId = std::move(value); }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline void SetExtractDocId(const char* value) { m_extractDocIdHasBeenSet = true; m_extractDocId.assign(value); }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline MongoDbSettings& WithExtractDocId(const Aws::String& value) { SetExtractDocId(value); return *this;}

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline MongoDbSettings& WithExtractDocId(Aws::String&& value) { SetExtractDocId(std::move(value)); return *this;}

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline MongoDbSettings& WithExtractDocId(const char* value) { SetExtractDocId(value); return *this;}


    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline const Aws::String& GetDocsToInvestigate() const{ return m_docsToInvestigate; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline bool DocsToInvestigateHasBeenSet() const { return m_docsToInvestigateHasBeenSet; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline void SetDocsToInvestigate(const Aws::String& value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = value; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline void SetDocsToInvestigate(Aws::String&& value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = std::move(value); }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline void SetDocsToInvestigate(const char* value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate.assign(value); }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(const Aws::String& value) { SetDocsToInvestigate(value); return *this;}

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(Aws::String&& value) { SetDocsToInvestigate(std::move(value)); return *this;}

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(const char* value) { SetDocsToInvestigate(value); return *this;}


    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline const Aws::String& GetAuthSource() const{ return m_authSource; }

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline bool AuthSourceHasBeenSet() const { return m_authSourceHasBeenSet; }

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline void SetAuthSource(const Aws::String& value) { m_authSourceHasBeenSet = true; m_authSource = value; }

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline void SetAuthSource(Aws::String&& value) { m_authSourceHasBeenSet = true; m_authSource = std::move(value); }

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline void SetAuthSource(const char* value) { m_authSourceHasBeenSet = true; m_authSource.assign(value); }

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline MongoDbSettings& WithAuthSource(const Aws::String& value) { SetAuthSource(value); return *this;}

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline MongoDbSettings& WithAuthSource(Aws::String&& value) { SetAuthSource(std::move(value)); return *this;}

    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline MongoDbSettings& WithAuthSource(const char* value) { SetAuthSource(value); return *this;}


    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline MongoDbSettings& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline MongoDbSettings& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline MongoDbSettings& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline MongoDbSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline MongoDbSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MongoDB endpoint.</p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline MongoDbSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}


    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline MongoDbSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline MongoDbSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MongoDB endpoint connection
     * details.</p>
     */
    inline MongoDbSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    AuthTypeValue m_authType;
    bool m_authTypeHasBeenSet = false;

    AuthMechanismValue m_authMechanism;
    bool m_authMechanismHasBeenSet = false;

    NestingLevelValue m_nestingLevel;
    bool m_nestingLevelHasBeenSet = false;

    Aws::String m_extractDocId;
    bool m_extractDocIdHasBeenSet = false;

    Aws::String m_docsToInvestigate;
    bool m_docsToInvestigateHasBeenSet = false;

    Aws::String m_authSource;
    bool m_authSourceHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
