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
  class AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings
  {
  public:
    IBMDb2Settings();
    IBMDb2Settings(Aws::Utils::Json::JsonView jsonValue);
    IBMDb2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    bool m_setDataCaptureChanges;
    bool m_setDataCaptureChangesHasBeenSet;

    Aws::String m_currentLsn;
    bool m_currentLsnHasBeenSet;

    int m_maxKBytesPerRead;
    bool m_maxKBytesPerReadHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
