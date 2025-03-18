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
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion() = default;
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EngineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the replication instance.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    EngineVersion& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the replication instance version. Valid values are
     * <code>DEPRECATED</code>, <code>DEFAULT_VERSION</code>, and
     * <code>ACTIVE</code>.</p>
     */
    inline const Aws::String& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Aws::String>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Aws::String>
    EngineVersion& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release status of the replication instance version.</p>
     */
    inline ReleaseStatusValues GetReleaseStatus() const { return m_releaseStatus; }
    inline bool ReleaseStatusHasBeenSet() const { return m_releaseStatusHasBeenSet; }
    inline void SetReleaseStatus(ReleaseStatusValues value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = value; }
    inline EngineVersion& WithReleaseStatus(ReleaseStatusValues value) { SetReleaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance version became publicly available.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchDate() const { return m_launchDate; }
    inline bool LaunchDateHasBeenSet() const { return m_launchDateHasBeenSet; }
    template<typename LaunchDateT = Aws::Utils::DateTime>
    void SetLaunchDate(LaunchDateT&& value) { m_launchDateHasBeenSet = true; m_launchDate = std::forward<LaunchDateT>(value); }
    template<typename LaunchDateT = Aws::Utils::DateTime>
    EngineVersion& WithLaunchDate(LaunchDateT&& value) { SetLaunchDate(std::forward<LaunchDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance will be automatically upgraded. This
     * setting only applies if the <code>auto-minor-version</code> setting is
     * enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoUpgradeDate() const { return m_autoUpgradeDate; }
    inline bool AutoUpgradeDateHasBeenSet() const { return m_autoUpgradeDateHasBeenSet; }
    template<typename AutoUpgradeDateT = Aws::Utils::DateTime>
    void SetAutoUpgradeDate(AutoUpgradeDateT&& value) { m_autoUpgradeDateHasBeenSet = true; m_autoUpgradeDate = std::forward<AutoUpgradeDateT>(value); }
    template<typename AutoUpgradeDateT = Aws::Utils::DateTime>
    EngineVersion& WithAutoUpgradeDate(AutoUpgradeDateT&& value) { SetAutoUpgradeDate(std::forward<AutoUpgradeDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance version will be deprecated and can no
     * longer be requested.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    EngineVersion& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the replication instance will have a version upgrade
     * forced.</p>
     */
    inline const Aws::Utils::DateTime& GetForceUpgradeDate() const { return m_forceUpgradeDate; }
    inline bool ForceUpgradeDateHasBeenSet() const { return m_forceUpgradeDateHasBeenSet; }
    template<typename ForceUpgradeDateT = Aws::Utils::DateTime>
    void SetForceUpgradeDate(ForceUpgradeDateT&& value) { m_forceUpgradeDateHasBeenSet = true; m_forceUpgradeDate = std::forward<ForceUpgradeDateT>(value); }
    template<typename ForceUpgradeDateT = Aws::Utils::DateTime>
    EngineVersion& WithForceUpgradeDate(ForceUpgradeDateT&& value) { SetForceUpgradeDate(std::forward<ForceUpgradeDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of valid replication instance versions that you can upgrade to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableUpgrades() const { return m_availableUpgrades; }
    inline bool AvailableUpgradesHasBeenSet() const { return m_availableUpgradesHasBeenSet; }
    template<typename AvailableUpgradesT = Aws::Vector<Aws::String>>
    void SetAvailableUpgrades(AvailableUpgradesT&& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades = std::forward<AvailableUpgradesT>(value); }
    template<typename AvailableUpgradesT = Aws::Vector<Aws::String>>
    EngineVersion& WithAvailableUpgrades(AvailableUpgradesT&& value) { SetAvailableUpgrades(std::forward<AvailableUpgradesT>(value)); return *this;}
    template<typename AvailableUpgradesT = Aws::String>
    EngineVersion& AddAvailableUpgrades(AvailableUpgradesT&& value) { m_availableUpgradesHasBeenSet = true; m_availableUpgrades.emplace_back(std::forward<AvailableUpgradesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    ReleaseStatusValues m_releaseStatus{ReleaseStatusValues::NOT_SET};
    bool m_releaseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_launchDate{};
    bool m_launchDateHasBeenSet = false;

    Aws::Utils::DateTime m_autoUpgradeDate{};
    bool m_autoUpgradeDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate{};
    bool m_deprecationDateHasBeenSet = false;

    Aws::Utils::DateTime m_forceUpgradeDate{};
    bool m_forceUpgradeDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_availableUpgrades;
    bool m_availableUpgradesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
