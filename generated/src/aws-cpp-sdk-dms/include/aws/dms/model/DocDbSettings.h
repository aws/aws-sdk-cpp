﻿/**
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
  class DocDbSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DocDbSettings();
    AWS_DATABASEMIGRATIONSERVICE_API DocDbSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DocDbSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name you use to access the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline DocDbSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline DocDbSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline DocDbSettings& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The password for the user account you use to access the DocumentDB source
     * endpoint. </p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline DocDbSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline DocDbSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline DocDbSettings& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the server on the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline DocDbSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline DocDbSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline DocDbSettings& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port value for the DocumentDB source endpoint. </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DocDbSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The database name on the DocumentDB source endpoint. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DocDbSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DocDbSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DocDbSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies either document or table mode. </p> <p>Default value is
     * <code>"none"</code>. Specify <code>"none"</code> to use document mode. Specify
     * <code>"one"</code> to use table mode.</p>
     */
    inline const NestingLevelValue& GetNestingLevel() const{ return m_nestingLevel; }
    inline bool NestingLevelHasBeenSet() const { return m_nestingLevelHasBeenSet; }
    inline void SetNestingLevel(const NestingLevelValue& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = value; }
    inline void SetNestingLevel(NestingLevelValue&& value) { m_nestingLevelHasBeenSet = true; m_nestingLevel = std::move(value); }
    inline DocDbSettings& WithNestingLevel(const NestingLevelValue& value) { SetNestingLevel(value); return *this;}
    inline DocDbSettings& WithNestingLevel(NestingLevelValue&& value) { SetNestingLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the document ID. Use this setting when <code>NestingLevel</code>
     * is set to <code>"none"</code>. </p> <p>Default value is <code>"false"</code>.
     * </p>
     */
    inline bool GetExtractDocId() const{ return m_extractDocId; }
    inline bool ExtractDocIdHasBeenSet() const { return m_extractDocIdHasBeenSet; }
    inline void SetExtractDocId(bool value) { m_extractDocIdHasBeenSet = true; m_extractDocId = value; }
    inline DocDbSettings& WithExtractDocId(bool value) { SetExtractDocId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the number of documents to preview to determine the document
     * organization. Use this setting when <code>NestingLevel</code> is set to
     * <code>"one"</code>. </p> <p>Must be a positive value greater than
     * <code>0</code>. Default value is <code>1000</code>.</p>
     */
    inline int GetDocsToInvestigate() const{ return m_docsToInvestigate; }
    inline bool DocsToInvestigateHasBeenSet() const { return m_docsToInvestigateHasBeenSet; }
    inline void SetDocsToInvestigate(int value) { m_docsToInvestigateHasBeenSet = true; m_docsToInvestigate = value; }
    inline DocDbSettings& WithDocsToInvestigate(int value) { SetDocsToInvestigate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier that is used to encrypt the content on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * then DMS uses your default encryption key. KMS creates the default encryption
     * key for your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DocDbSettings& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DocDbSettings& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DocDbSettings& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the DocumentDB endpoint.</p>  <p>You can specify one of two sets of values
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
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }
    inline DocDbSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    inline DocDbSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}
    inline DocDbSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the DocumentDB endpoint
     * connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }
    inline DocDbSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}
    inline DocDbSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}
    inline DocDbSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, DMS retrieves the entire document from the DocumentDB
     * source during migration. This may cause a migration failure if the server
     * response exceeds bandwidth limits. To fetch only updates and deletes during
     * migration, set this parameter to <code>false</code>.</p>
     */
    inline bool GetUseUpdateLookUp() const{ return m_useUpdateLookUp; }
    inline bool UseUpdateLookUpHasBeenSet() const { return m_useUpdateLookUpHasBeenSet; }
    inline void SetUseUpdateLookUp(bool value) { m_useUpdateLookUpHasBeenSet = true; m_useUpdateLookUp = value; }
    inline DocDbSettings& WithUseUpdateLookUp(bool value) { SetUseUpdateLookUp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, DMS replicates data to shard collections. DMS only uses
     * this setting if the target endpoint is a DocumentDB elastic cluster.</p> <p>When
     * this setting is <code>true</code>, note the following:</p> <ul> <li> <p>You must
     * set <code>TargetTablePrepMode</code> to <code>nothing</code>.</p> </li> <li>
     * <p>DMS automatically sets <code>useUpdateLookup</code> to
     * <code>false</code>.</p> </li> </ul>
     */
    inline bool GetReplicateShardCollections() const{ return m_replicateShardCollections; }
    inline bool ReplicateShardCollectionsHasBeenSet() const { return m_replicateShardCollectionsHasBeenSet; }
    inline void SetReplicateShardCollections(bool value) { m_replicateShardCollectionsHasBeenSet = true; m_replicateShardCollections = value; }
    inline DocDbSettings& WithReplicateShardCollections(bool value) { SetReplicateShardCollections(value); return *this;}
    ///@}
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

    NestingLevelValue m_nestingLevel;
    bool m_nestingLevelHasBeenSet = false;

    bool m_extractDocId;
    bool m_extractDocIdHasBeenSet = false;

    int m_docsToInvestigate;
    bool m_docsToInvestigateHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    bool m_useUpdateLookUp;
    bool m_useUpdateLookUpHasBeenSet = false;

    bool m_replicateShardCollections;
    bool m_replicateShardCollectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
