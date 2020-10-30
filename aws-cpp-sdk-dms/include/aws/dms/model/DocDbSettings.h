/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information that defines a DocumentDB endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DocDbSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DocDbSettings
  {
  public:
    DocDbSettings();
    DocDbSettings(Aws::Utils::Json::JsonView jsonValue);
    DocDbSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline DocDbSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline DocDbSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline DocDbSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The port value for the DocumentDB source endpoint. </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p> The port value for the DocumentDB source endpoint. </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p> The port value for the DocumentDB source endpoint. </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port value for the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline DocDbSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline DocDbSettings& WithNestingLevel(const NestingLevelValue& value) { SetNestingLevel(value); return *this;}

    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline DocDbSettings& WithNestingLevel(NestingLevelValue&& value) { SetNestingLevel(std::move(value)); return *this;}


    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline bool GetExtractDocId() const{ return m_extractDocId; }

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
    inline void SetExtractDocId(bool value) { m_extractDocIdHasBeenSet = true; m_extractDocId = value; }

    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline DocDbSettings& WithExtractDocId(bool value) { SetExtractDocId(value); return *this;}


    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline int GetDocsToInvestigate() const{ return m_docsToInvestigate; }

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
    inline void SetDocsToInvestigate(int value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = value; }

    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline DocDbSettings& WithDocsToInvestigate(int value) { SetDocsToInvestigate(value); return *this;}


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
    inline DocDbSettings& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline DocDbSettings& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier that is used to encrypt the content on the
     * replication instance. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then AWS DMS uses your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline DocDbSettings& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

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

    NestingLevelValue m_nestingLevel;
    bool m_nestingLevelHasBeenSet;

    bool m_extractDocId;
    bool m_extractDocIdHasBeenSet;

    int m_docsToInvestigate;
    bool m_docsToInvestigateHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
