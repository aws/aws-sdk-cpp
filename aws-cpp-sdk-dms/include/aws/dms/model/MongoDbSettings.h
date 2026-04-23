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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MongoDbSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API MongoDbSettings
  {
  public:
    MongoDbSettings();
    MongoDbSettings(Aws::Utils::Json::JsonView jsonValue);
    MongoDbSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline const AuthTypeValue& GetAuthType() const{ return m_authType; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline void SetAuthType(const AuthTypeValue& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline void SetAuthType(AuthTypeValue&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline MongoDbSettings& WithAuthType(const AuthTypeValue& value) { SetAuthType(value); return *this;}

    /**
     * <p> The authentication type you use to access the MongoDB source endpoint.</p>
     * <p>Valid values: NO, PASSWORD </p> <p>When NO is selected, user name and
     * password parameters are not used and can be empty. </p>
     */
    inline MongoDbSettings& WithAuthType(AuthTypeValue&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline const AuthMechanismValue& GetAuthMechanism() const{ return m_authMechanism; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline bool AuthMechanismHasBeenSet() const { return m_authMechanismHasBeenSet; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline void SetAuthMechanism(const AuthMechanismValue& value) { m_authMechanismHasBeenSet = true; m_authMechanism = value; }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline void SetAuthMechanism(AuthMechanismValue&& value) { m_authMechanismHasBeenSet = true; m_authMechanism = std::move(value); }

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline MongoDbSettings& WithAuthMechanism(const AuthMechanismValue& value) { SetAuthMechanism(value); return *this;}

    /**
     * <p> The authentication mechanism you use to access the MongoDB source
     * endpoint.</p> <p>Valid values: DEFAULT, MONGODB_CR, SCRAM_SHA_1 </p> <p>DEFAULT
     * – For MongoDB version 2.x, use MONGODB_CR. For MongoDB version 3.x, use
     * SCRAM_SHA_1. This attribute is not used when authType=No.</p>
     */
    inline MongoDbSettings& WithAuthMechanism(AuthMechanismValue&& value) { SetAuthMechanism(std::move(value)); return *this;}


    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline const NestingLevelValue& GetNestingLevel() const{ return m_nestingLevel; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline bool NestingLevelHasBeenSet() const { return m_nestingLevelHasBeenSet; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline void SetNestingLevel(const NestingLevelValue& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = value; }

    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline void SetNestingLevel(NestingLevelValue&& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = std::move(value); }

    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline MongoDbSettings& WithNestingLevel(const NestingLevelValue& value) { SetNestingLevel(value); return *this;}

    /**
     * <p> Specifies either document or table mode. </p> <p>Valid values: NONE, ONE</p>
     * <p>Default value is NONE. Specify NONE to use document mode. Specify ONE to use
     * table mode.</p>
     */
    inline MongoDbSettings& WithNestingLevel(NestingLevelValue&& value) { SetNestingLevel(std::move(value)); return *this;}


    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline const Aws::String& GetExtractDocId() const{ return m_extractDocId; }

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline bool ExtractDocIdHasBeenSet() const { return m_extractDocIdHasBeenSet; }

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline void SetExtractDocId(const Aws::String& value) { m_extractDocIdHasBeenSet = true; m_extractDocId = value; }

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline void SetExtractDocId(Aws::String&& value) { m_extractDocIdHasBeenSet = true; m_extractDocId = std::move(value); }

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline void SetExtractDocId(const char* value) { m_extractDocIdHasBeenSet = true; m_extractDocId.assign(value); }

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline MongoDbSettings& WithExtractDocId(const Aws::String& value) { SetExtractDocId(value); return *this;}

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline MongoDbSettings& WithExtractDocId(Aws::String&& value) { SetExtractDocId(std::move(value)); return *this;}

    /**
     * <p> Specifies the document ID. Use this attribute when <code>NestingLevel</code>
     * is set to NONE. </p> <p>Default value is false. </p>
     */
    inline MongoDbSettings& WithExtractDocId(const char* value) { SetExtractDocId(value); return *this;}


    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline const Aws::String& GetDocsToInvestigate() const{ return m_docsToInvestigate; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline bool DocsToInvestigateHasBeenSet() const { return m_docsToInvestigateHasBeenSet; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline void SetDocsToInvestigate(const Aws::String& value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = value; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline void SetDocsToInvestigate(Aws::String&& value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = std::move(value); }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline void SetDocsToInvestigate(const char* value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate.assign(value); }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(const Aws::String& value) { SetDocsToInvestigate(value); return *this;}

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(Aws::String&& value) { SetDocsToInvestigate(std::move(value)); return *this;}

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this attribute when <code>NestingLevel</code> is set to ONE.
     * </p> <p>Must be a positive value greater than 0. Default value is 1000.</p>
     */
    inline MongoDbSettings& WithDocsToInvestigate(const char* value) { SetDocsToInvestigate(value); return *this;}


    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline const Aws::String& GetAuthSource() const{ return m_authSource; }

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline bool AuthSourceHasBeenSet() const { return m_authSourceHasBeenSet; }

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline void SetAuthSource(const Aws::String& value) { m_authSourceHasBeenSet = true; m_authSource = value; }

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline void SetAuthSource(Aws::String&& value) { m_authSourceHasBeenSet = true; m_authSource = std::move(value); }

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline void SetAuthSource(const char* value) { m_authSourceHasBeenSet = true; m_authSource.assign(value); }

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline MongoDbSettings& WithAuthSource(const Aws::String& value) { SetAuthSource(value); return *this;}

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline MongoDbSettings& WithAuthSource(Aws::String&& value) { SetAuthSource(std::move(value)); return *this;}

    /**
     * <p> The MongoDB database name. This attribute is not used when
     * <code>authType=NO</code>. </p> <p>The default is admin.</p>
     */
    inline MongoDbSettings& WithAuthSource(const char* value) { SetAuthSource(value); return *this;}


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
    inline MongoDbSettings& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline MongoDbSettings& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline MongoDbSettings& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

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

    AuthTypeValue m_authType;
    bool m_authTypeHasBeenSet;

    AuthMechanismValue m_authMechanism;
    bool m_authMechanismHasBeenSet;

    NestingLevelValue m_nestingLevel;
    bool m_nestingLevelHasBeenSet;

    Aws::String m_extractDocId;
    bool m_extractDocIdHasBeenSet;

    Aws::String m_docsToInvestigate;
    bool m_docsToInvestigateHasBeenSet;

    Aws::String m_authSource;
    bool m_authSourceHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
