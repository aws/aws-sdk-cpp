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
  class AWS_LIGHTSAIL_API PendingModifiedRelationalDatabaseValues
  {
  public:
    PendingModifiedRelationalDatabaseValues();
    PendingModifiedRelationalDatabaseValues(Aws::Utils::Json::JsonView jsonValue);
    PendingModifiedRelationalDatabaseValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The password for the master user of the database.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user of the database.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled.</p>
     */
    inline bool GetBackupRetentionEnabled() const{ return m_backupRetentionEnabled; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled.</p>
     */
    inline bool BackupRetentionEnabledHasBeenSet() const { return m_backupRetentionEnabledHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled.</p>
     */
    inline void SetBackupRetentionEnabled(bool value) { m_backupRetentionEnabledHasBeenSet = true; m_backupRetentionEnabled = value; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled.</p>
     */
    inline PendingModifiedRelationalDatabaseValues& WithBackupRetentionEnabled(bool value) { SetBackupRetentionEnabled(value); return *this;}

  private:

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_backupRetentionEnabled;
    bool m_backupRetentionEnabledHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
