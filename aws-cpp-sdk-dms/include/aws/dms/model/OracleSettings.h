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
   * <p>Provides information that defines an Oracle endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/OracleSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API OracleSettings
  {
  public:
    OracleSettings();
    OracleSettings(Aws::Utils::Json::JsonView jsonValue);
    OracleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmPassword() const{ return m_asmPassword; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmPasswordHasBeenSet() const { return m_asmPasswordHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(const Aws::String& value) { m_asmPasswordHasBeenSet = true; m_asmPassword = value; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(Aws::String&& value) { m_asmPasswordHasBeenSet = true; m_asmPassword = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(const char* value) { m_asmPasswordHasBeenSet = true; m_asmPassword.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(const Aws::String& value) { SetAsmPassword(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(Aws::String&& value) { SetAsmPassword(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(const char* value) { SetAsmPassword(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmServer() const{ return m_asmServer; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmServerHasBeenSet() const { return m_asmServerHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(const Aws::String& value) { m_asmServerHasBeenSet = true; m_asmServer = value; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(Aws::String&& value) { m_asmServerHasBeenSet = true; m_asmServer = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(const char* value) { m_asmServerHasBeenSet = true; m_asmServer.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(const Aws::String& value) { SetAsmServer(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(Aws::String&& value) { SetAsmServer(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(const char* value) { SetAsmServer(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmUser() const{ return m_asmUser; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmUserHasBeenSet() const { return m_asmUserHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(const Aws::String& value) { m_asmUserHasBeenSet = true; m_asmUser = value; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(Aws::String&& value) { m_asmUserHasBeenSet = true; m_asmUser = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(const char* value) { m_asmUserHasBeenSet = true; m_asmUser.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(const Aws::String& value) { SetAsmUser(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(Aws::String&& value) { SetAsmUser(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(const char* value) { SetAsmUser(value); return *this;}


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
    inline OracleSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline OracleSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline OracleSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline OracleSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline OracleSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline OracleSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Endpoint TCP port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline OracleSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline const Aws::String& GetSecurityDbEncryption() const{ return m_securityDbEncryption; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline bool SecurityDbEncryptionHasBeenSet() const { return m_securityDbEncryptionHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(const Aws::String& value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption = value; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(Aws::String&& value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(const char* value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption.assign(value); }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(const Aws::String& value) { SetSecurityDbEncryption(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(Aws::String&& value) { SetSecurityDbEncryption(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(const char* value) { SetSecurityDbEncryption(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline const Aws::String& GetSecurityDbEncryptionName() const{ return m_securityDbEncryptionName; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline bool SecurityDbEncryptionNameHasBeenSet() const { return m_securityDbEncryptionNameHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(const Aws::String& value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName = value; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(Aws::String&& value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(const char* value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName.assign(value); }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(const Aws::String& value) { SetSecurityDbEncryptionName(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(Aws::String&& value) { SetSecurityDbEncryptionName(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for AWS DMS</a> in the
     * <i>AWS Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(const char* value) { SetSecurityDbEncryptionName(value); return *this;}


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
    inline OracleSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline OracleSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline OracleSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


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
    inline OracleSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline OracleSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline OracleSettings& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_asmPassword;
    bool m_asmPasswordHasBeenSet;

    Aws::String m_asmServer;
    bool m_asmServerHasBeenSet;

    Aws::String m_asmUser;
    bool m_asmUserHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_securityDbEncryption;
    bool m_securityDbEncryptionHasBeenSet;

    Aws::String m_securityDbEncryptionName;
    bool m_securityDbEncryptionNameHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
