/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReleaseStatusValues.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides information about a replication instance version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/EngineVersion">AWS
   * API Reference</a></p>
   */
  class EngineVersion
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion();
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the replication instance.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline EngineVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline EngineVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline EngineVersion& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the replication instance version. Valid values are
     * <code>DEPRECATED</code>, <code>DEFAULT_VERSION</code>, and
     * <code>ACTIVE</code>.</p>
     */
    inline const Aws::String& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const Aws::String& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(Aws::String&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline void SetLifecycle(const char* value) { m_lifecycleHasBeenSet = true; m_lifecycle.assign(value); }
    inline EngineVersion& WithLifecycle(const Aws::String& value) { SetLifecycle(value); return *this;}
    inline EngineVersion& WithLifecycle(Aws::String&& value) { SetLifecycle(std::move(value)); return *this;}
    inline EngineVersion& WithLifecycle(const char* value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release status of the replication instance version.</p>
     */
    inline const ReleaseStatusValues& GetReleaseStatus() const{ return m_releaseStatus; }
    inline bool ReleaseStatusHasBeenSet() const { return m_releaseStatusHasBeenSet; }
    inline void SetReleaseStatus(const ReleaseStatusValues& value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = value; }
    inline void SetReleaseStatus(ReleaseStatusValues&& value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = std::move(value); }
    inline EngineVersion& WithReleaseStatus(const ReleaseStatusValues& value) { SetReleaseStatus(value); return *this;}
    inline EngineVersion& WithReleaseStatus(ReleaseStatusValues&& value) { SetReleaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance version became publicly available.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchDate() const{ return m_launchDate; }
    inline bool LaunchDateHasBeenSet() const { return m_launchDateHasBeenSet; }
    inline void SetLaunchDate(const Aws::Utils::DateTime& value) { m_launchDateHasBeenSet = true; m_launchDate = value; }
    inline void SetLaunchDate(Aws::Utils::DateTime&& value) { m_launchDateHasBeenSet = true; m_launchDate = std::move(value); }
    inline EngineVersion& WithLaunchDate(const Aws::Utils::DateTime& value) { SetLaunchDate(value); return *this;}
    inline EngineVersion& WithLaunchDate(Aws::Utils::DateTime&& value) { SetLaunchDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance will be automatically upgraded. This
     * setting only applies if the <code>auto-minor-version</code> setting is
     * enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoUpgradeDate() const{ return m_autoUpgradeDate; }
    inline bool AutoUpgradeDateHasBeenSet() const { return m_autoUpgradeDateHasBeenSet; }
    inline void SetAutoUpgradeDate(const Aws::Utils::DateTime& value) { m_autoUpgradeDateHasBeenSet = true; m_autoUpgradeDate = value; }
    inline void SetAutoUpgradeDate(Aws::Utils::DateTime&& value) { m_autoUpgradeDateHasBeenSet = true; m_autoUpgradeDate = std::move(value); }
    inline EngineVersion& WithAutoUpgradeDate(const Aws::Utils::DateTime& value) { SetAutoUpgradeDate(value); return *this;}
    inline EngineVersion& WithAutoUpgradeDate(Aws::Utils::DateTime&& value) { SetAutoUpgradeDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance version will be deprecated and can no
     * longer be requested.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }
    inline EngineVersion& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}
    inline EngineVersion& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance will have a version upgrade
     * forced.</p>
     */
    inline const Aws::Utils::DateTime& GetForceUpgradeDate() const{ return m_forceUpgradeDate; }
    inline bool ForceUpgradeDateHasBeenSet() const { return m_forceUpgradeDateHasBeenSet; }
    inline void SetForceUpgradeDate(const Aws::Utils::DateTime& value) { m_forceUpgradeDateHasBeenSet = true; m_forceUpgradeDate = value; }
    inline void SetForceUpgradeDate(Aws::Utils::DateTime&& value) { m_forceUpgradeDateHasBeenSet = true; m_forceUpgradeDate = std::move(value); }
    inline EngineVersion& WithForceUpgradeDate(const Aws::Utils::DateTime& value) { SetForceUpgradeDate(value); return *this;}
    inline EngineVersion& WithForceUpgradeDate(Aws::Utils::DateTime&& value) { SetForceUpgradeDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of valid replication instance versions that you can upgrade to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableUpgrades() const{ return m_availableUpgrades; }
    inline bool AvailableUpgradesHasBeenSet() const { return m_availableUpgradesHasBeenSet; }
    inline void SetAvailableUpgrades(const Aws::Vector<Aws::String>& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades = value; }
    inline void SetAvailableUpgrades(Aws::Vector<Aws::String>&& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades = std::move(value); }
    inline EngineVersion& WithAvailableUpgrades(const Aws::Vector<Aws::String>& value) { SetAvailableUpgrades(value); return *this;}
    inline EngineVersion& WithAvailableUpgrades(Aws::Vector<Aws::String>&& value) { SetAvailableUpgrades(std::move(value)); return *this;}
    inline EngineVersion& AddAvailableUpgrades(const Aws::String& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades.push_back(value); return *this; }
    inline EngineVersion& AddAvailableUpgrades(Aws::String&& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades.push_back(std::move(value)); return *this; }
    inline EngineVersion& AddAvailableUpgrades(const char* value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    ReleaseStatusValues m_releaseStatus;
    bool m_releaseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_launchDate;
    bool m_launchDateHasBeenSet = false;

    Aws::Utils::DateTime m_autoUpgradeDate;
    bool m_autoUpgradeDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;

    Aws::Utils::DateTime m_forceUpgradeDate;
    bool m_forceUpgradeDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_availableUpgrades;
    bool m_availableUpgradesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
