/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information that defines an IBM Db2 LUW endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/IBMDb2Settings">AWS
   * API Reference</a></p>
   */
  class IBMDb2Settings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings();
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline IBMDb2Settings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline IBMDb2Settings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline IBMDb2Settings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Endpoint connection password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline IBMDb2Settings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline IBMDb2Settings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline IBMDb2Settings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Endpoint TCP port. The default value is 50000.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Endpoint TCP port. The default value is 50000.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Endpoint TCP port. The default value is 50000.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Endpoint TCP port. The default value is 50000.</p>
     */
    inline IBMDb2Settings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline IBMDb2Settings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline IBMDb2Settings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline IBMDb2Settings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Enables ongoing replication (CDC) as a BOOLEAN value. The default is
     * true.</p>
     */
    inline bool GetSetDataCaptureChanges() const{ return m_setDataCaptureChanges; }

    /**
     * <p>Enables ongoing replication (CDC) as a BOOLEAN value. The default is
     * true.</p>
     */
    inline bool SetDataCaptureChangesHasBeenSet() const { return m_setDataCaptureChangesHasBeenSet; }

    /**
     * <p>Enables ongoing replication (CDC) as a BOOLEAN value. The default is
     * true.</p>
     */
    inline void SetSetDataCaptureChanges(bool value) { m_setDataCaptureChangesHasBeenSet = true; m_setDataCaptureChanges = value; }

    /**
     * <p>Enables ongoing replication (CDC) as a BOOLEAN value. The default is
     * true.</p>
     */
    inline IBMDb2Settings& WithSetDataCaptureChanges(bool value) { SetSetDataCaptureChanges(value); return *this;}


    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline const Aws::String& GetCurrentLsn() const{ return m_currentLsn; }

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline bool CurrentLsnHasBeenSet() const { return m_currentLsnHasBeenSet; }

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline void SetCurrentLsn(const Aws::String& value) { m_currentLsnHasBeenSet = true; m_currentLsn = value; }

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline void SetCurrentLsn(Aws::String&& value) { m_currentLsnHasBeenSet = true; m_currentLsn = std::move(value); }

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline void SetCurrentLsn(const char* value) { m_currentLsnHasBeenSet = true; m_currentLsn.assign(value); }

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline IBMDb2Settings& WithCurrentLsn(const Aws::String& value) { SetCurrentLsn(value); return *this;}

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline IBMDb2Settings& WithCurrentLsn(Aws::String&& value) { SetCurrentLsn(std::move(value)); return *this;}

    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline IBMDb2Settings& WithCurrentLsn(const char* value) { SetCurrentLsn(value); return *this;}


    /**
     * <p>Maximum number of bytes per read, as a NUMBER value. The default is 64
     * KB.</p>
     */
    inline int GetMaxKBytesPerRead() const{ return m_maxKBytesPerRead; }

    /**
     * <p>Maximum number of bytes per read, as a NUMBER value. The default is 64
     * KB.</p>
     */
    inline bool MaxKBytesPerReadHasBeenSet() const { return m_maxKBytesPerReadHasBeenSet; }

    /**
     * <p>Maximum number of bytes per read, as a NUMBER value. The default is 64
     * KB.</p>
     */
    inline void SetMaxKBytesPerRead(int value) { m_maxKBytesPerReadHasBeenSet = true; m_maxKBytesPerRead = value; }

    /**
     * <p>Maximum number of bytes per read, as a NUMBER value. The default is 64
     * KB.</p>
     */
    inline IBMDb2Settings& WithMaxKBytesPerRead(int value) { SetMaxKBytesPerRead(value); return *this;}


    /**
     * <p>Endpoint connection user name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline IBMDb2Settings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline IBMDb2Settings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline IBMDb2Settings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
    inline IBMDb2Settings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
    inline IBMDb2Settings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
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
    inline IBMDb2Settings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}


    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline IBMDb2Settings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline IBMDb2Settings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline IBMDb2Settings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}


    /**
     * <p>The amount of time (in milliseconds) before DMS times out operations
     * performed by DMS on the Db2 target. The default value is 1200 (20 minutes).</p>
     */
    inline int GetLoadTimeout() const{ return m_loadTimeout; }

    /**
     * <p>The amount of time (in milliseconds) before DMS times out operations
     * performed by DMS on the Db2 target. The default value is 1200 (20 minutes).</p>
     */
    inline bool LoadTimeoutHasBeenSet() const { return m_loadTimeoutHasBeenSet; }

    /**
     * <p>The amount of time (in milliseconds) before DMS times out operations
     * performed by DMS on the Db2 target. The default value is 1200 (20 minutes).</p>
     */
    inline void SetLoadTimeout(int value) { m_loadTimeoutHasBeenSet = true; m_loadTimeout = value; }

    /**
     * <p>The amount of time (in milliseconds) before DMS times out operations
     * performed by DMS on the Db2 target. The default value is 1200 (20 minutes).</p>
     */
    inline IBMDb2Settings& WithLoadTimeout(int value) { SetLoadTimeout(value); return *this;}


    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk on the DMS replication instance. The default value is
     * 1024 (1 MB).</p>
     */
    inline int GetWriteBufferSize() const{ return m_writeBufferSize; }

    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk on the DMS replication instance. The default value is
     * 1024 (1 MB).</p>
     */
    inline bool WriteBufferSizeHasBeenSet() const { return m_writeBufferSizeHasBeenSet; }

    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk on the DMS replication instance. The default value is
     * 1024 (1 MB).</p>
     */
    inline void SetWriteBufferSize(int value) { m_writeBufferSizeHasBeenSet = true; m_writeBufferSize = value; }

    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk on the DMS replication instance. The default value is
     * 1024 (1 MB).</p>
     */
    inline IBMDb2Settings& WithWriteBufferSize(int value) { SetWriteBufferSize(value); return *this;}


    /**
     * <p>Specifies the maximum size (in KB) of .csv files used to transfer data to Db2
     * LUW.</p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }

    /**
     * <p>Specifies the maximum size (in KB) of .csv files used to transfer data to Db2
     * LUW.</p>
     */
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }

    /**
     * <p>Specifies the maximum size (in KB) of .csv files used to transfer data to Db2
     * LUW.</p>
     */
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }

    /**
     * <p>Specifies the maximum size (in KB) of .csv files used to transfer data to Db2
     * LUW.</p>
     */
    inline IBMDb2Settings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}


    /**
     * <p>If true, DMS saves any .csv files to the Db2 LUW target that were used to
     * replicate data. DMS uses these files for analysis and troubleshooting.</p>
     * <p>The default value is false. </p>
     */
    inline bool GetKeepCsvFiles() const{ return m_keepCsvFiles; }

    /**
     * <p>If true, DMS saves any .csv files to the Db2 LUW target that were used to
     * replicate data. DMS uses these files for analysis and troubleshooting.</p>
     * <p>The default value is false. </p>
     */
    inline bool KeepCsvFilesHasBeenSet() const { return m_keepCsvFilesHasBeenSet; }

    /**
     * <p>If true, DMS saves any .csv files to the Db2 LUW target that were used to
     * replicate data. DMS uses these files for analysis and troubleshooting.</p>
     * <p>The default value is false. </p>
     */
    inline void SetKeepCsvFiles(bool value) { m_keepCsvFilesHasBeenSet = true; m_keepCsvFiles = value; }

    /**
     * <p>If true, DMS saves any .csv files to the Db2 LUW target that were used to
     * replicate data. DMS uses these files for analysis and troubleshooting.</p>
     * <p>The default value is false. </p>
     */
    inline IBMDb2Settings& WithKeepCsvFiles(bool value) { SetKeepCsvFiles(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    bool m_setDataCaptureChanges;
    bool m_setDataCaptureChangesHasBeenSet = false;

    Aws::String m_currentLsn;
    bool m_currentLsnHasBeenSet = false;

    int m_maxKBytesPerRead;
    bool m_maxKBytesPerReadHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    int m_loadTimeout;
    bool m_loadTimeoutHasBeenSet = false;

    int m_writeBufferSize;
    bool m_writeBufferSizeHasBeenSet = false;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet = false;

    bool m_keepCsvFiles;
    bool m_keepCsvFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
