/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RegionType.h>
#include <aws/ds/model/DirectoryStage.h>
#include <aws/ds/model/DirectoryVpcSettings.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>The replicated Region information for a directory.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegionDescription">AWS
   * API Reference</a></p>
   */
  class RegionDescription
  {
  public:
    AWS_DIRECTORYSERVICE_API RegionDescription() = default;
    AWS_DIRECTORYSERVICE_API RegionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RegionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    RegionDescription& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    RegionDescription& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline RegionType GetRegionType() const { return m_regionType; }
    inline bool RegionTypeHasBeenSet() const { return m_regionTypeHasBeenSet; }
    inline void SetRegionType(RegionType value) { m_regionTypeHasBeenSet = true; m_regionType = value; }
    inline RegionDescription& WithRegionType(RegionType value) { SetRegionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline DirectoryStage GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DirectoryStage value) { m_statusHasBeenSet = true; m_status = value; }
    inline RegionDescription& WithStatus(DirectoryStage value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const DirectoryVpcSettings& GetVpcSettings() const { return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    void SetVpcSettings(VpcSettingsT&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::forward<VpcSettingsT>(value); }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    RegionDescription& WithVpcSettings(VpcSettingsT&& value) { SetVpcSettings(std::forward<VpcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of domain controllers in the specified Region for the
     * specified directory.</p>
     */
    inline int GetDesiredNumberOfDomainControllers() const { return m_desiredNumberOfDomainControllers; }
    inline bool DesiredNumberOfDomainControllersHasBeenSet() const { return m_desiredNumberOfDomainControllersHasBeenSet; }
    inline void SetDesiredNumberOfDomainControllers(int value) { m_desiredNumberOfDomainControllersHasBeenSet = true; m_desiredNumberOfDomainControllers = value; }
    inline RegionDescription& WithDesiredNumberOfDomainControllers(int value) { SetDesiredNumberOfDomainControllers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    RegionDescription& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusLastUpdatedDateTime() const { return m_statusLastUpdatedDateTime; }
    inline bool StatusLastUpdatedDateTimeHasBeenSet() const { return m_statusLastUpdatedDateTimeHasBeenSet; }
    template<typename StatusLastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetStatusLastUpdatedDateTime(StatusLastUpdatedDateTimeT&& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = std::forward<StatusLastUpdatedDateTimeT>(value); }
    template<typename StatusLastUpdatedDateTimeT = Aws::Utils::DateTime>
    RegionDescription& WithStatusLastUpdatedDateTime(StatusLastUpdatedDateTimeT&& value) { SetStatusLastUpdatedDateTime(std::forward<StatusLastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    RegionDescription& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    RegionType m_regionType{RegionType::NOT_SET};
    bool m_regionTypeHasBeenSet = false;

    DirectoryStage m_status{DirectoryStage::NOT_SET};
    bool m_statusHasBeenSet = false;

    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    int m_desiredNumberOfDomainControllers{0};
    bool m_desiredNumberOfDomainControllersHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_statusLastUpdatedDateTime{};
    bool m_statusLastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
