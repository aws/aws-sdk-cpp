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
    AWS_DIRECTORYSERVICE_API RegionDescription();
    AWS_DIRECTORYSERVICE_API RegionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RegionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegionDescription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegionDescription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegionDescription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline RegionDescription& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline RegionDescription& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region. For example, <code>us-east-1</code>.</p>
     */
    inline RegionDescription& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline const RegionType& GetRegionType() const{ return m_regionType; }

    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline bool RegionTypeHasBeenSet() const { return m_regionTypeHasBeenSet; }

    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline void SetRegionType(const RegionType& value) { m_regionTypeHasBeenSet = true; m_regionType = value; }

    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline void SetRegionType(RegionType&& value) { m_regionTypeHasBeenSet = true; m_regionType = std::move(value); }

    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline RegionDescription& WithRegionType(const RegionType& value) { SetRegionType(value); return *this;}

    /**
     * <p>Specifies whether the Region is the primary Region or an additional
     * Region.</p>
     */
    inline RegionDescription& WithRegionType(RegionType&& value) { SetRegionType(std::move(value)); return *this;}


    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline const DirectoryStage& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline void SetStatus(const DirectoryStage& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline void SetStatus(DirectoryStage&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline RegionDescription& WithStatus(const DirectoryStage& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the replication process for the specified Region.</p>
     */
    inline RegionDescription& WithStatus(DirectoryStage&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const DirectoryVpcSettings& GetVpcSettings() const{ return m_vpcSettings; }

    
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }

    
    inline void SetVpcSettings(const DirectoryVpcSettings& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    
    inline void SetVpcSettings(DirectoryVpcSettings&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }

    
    inline RegionDescription& WithVpcSettings(const DirectoryVpcSettings& value) { SetVpcSettings(value); return *this;}

    
    inline RegionDescription& WithVpcSettings(DirectoryVpcSettings&& value) { SetVpcSettings(std::move(value)); return *this;}


    /**
     * <p>The desired number of domain controllers in the specified Region for the
     * specified directory.</p>
     */
    inline int GetDesiredNumberOfDomainControllers() const{ return m_desiredNumberOfDomainControllers; }

    /**
     * <p>The desired number of domain controllers in the specified Region for the
     * specified directory.</p>
     */
    inline bool DesiredNumberOfDomainControllersHasBeenSet() const { return m_desiredNumberOfDomainControllersHasBeenSet; }

    /**
     * <p>The desired number of domain controllers in the specified Region for the
     * specified directory.</p>
     */
    inline void SetDesiredNumberOfDomainControllers(int value) { m_desiredNumberOfDomainControllersHasBeenSet = true; m_desiredNumberOfDomainControllers = value; }

    /**
     * <p>The desired number of domain controllers in the specified Region for the
     * specified directory.</p>
     */
    inline RegionDescription& WithDesiredNumberOfDomainControllers(int value) { SetDesiredNumberOfDomainControllers(value); return *this;}


    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }

    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }

    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline RegionDescription& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>Specifies when the Region replication began.</p>
     */
    inline RegionDescription& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusLastUpdatedDateTime() const{ return m_statusLastUpdatedDateTime; }

    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline bool StatusLastUpdatedDateTimeHasBeenSet() const { return m_statusLastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline void SetStatusLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline void SetStatusLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline RegionDescription& WithStatusLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStatusLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the Region status was last updated.</p>
     */
    inline RegionDescription& WithStatusLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStatusLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline RegionDescription& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the Region description was last updated.</p>
     */
    inline RegionDescription& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    RegionType m_regionType;
    bool m_regionTypeHasBeenSet = false;

    DirectoryStage m_status;
    bool m_statusHasBeenSet = false;

    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    int m_desiredNumberOfDomainControllers;
    bool m_desiredNumberOfDomainControllersHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_statusLastUpdatedDateTime;
    bool m_statusLastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
