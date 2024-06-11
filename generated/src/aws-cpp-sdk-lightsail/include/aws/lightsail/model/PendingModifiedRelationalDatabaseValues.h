﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a pending database value modification.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PendingModifiedRelationalDatabaseValues">AWS
   * API Reference</a></p>
   */
  class PendingModifiedRelationalDatabaseValues
  {
  public:
    AWS_LIGHTSAIL_API PendingModifiedRelationalDatabaseValues();
    AWS_LIGHTSAIL_API PendingModifiedRelationalDatabaseValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PendingModifiedRelationalDatabaseValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password for the master user of the database.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled.</p>
     */
    inline bool GetBackupRetentionEnabled() const{ return m_backupRetentionEnabled; }
    inline bool BackupRetentionEnabledHasBeenSet() const { return m_backupRetentionEnabledHasBeenSet; }
    inline void SetBackupRetentionEnabled(bool value) { m_backupRetentionEnabledHasBeenSet = true; m_backupRetentionEnabled = value; }
    inline PendingModifiedRelationalDatabaseValues& WithBackupRetentionEnabled(bool value) { SetBackupRetentionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_backupRetentionEnabled;
    bool m_backupRetentionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
