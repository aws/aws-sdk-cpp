/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetStatus.h>
#include <aws/deadline/model/AutoScalingStatus.h>
#include <aws/deadline/model/FleetConfiguration.h>
#include <aws/deadline/model/HostConfiguration.h>
#include <aws/deadline/model/FleetCapabilities.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetFleetResult
  {
  public:
    AWS_DEADLINE_API GetFleetResult() = default;
    AWS_DEADLINE_API GetFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    GetFleetResult& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    GetFleetResult& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the fleet.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetFleetResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the fleet.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetFleetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetStatus GetStatus() const { return m_status; }
    inline void SetStatus(FleetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFleetResult& WithStatus(FleetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates a suspended status of the fleet.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetFleetResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline AutoScalingStatus GetAutoScalingStatus() const { return m_autoScalingStatus; }
    inline void SetAutoScalingStatus(AutoScalingStatus value) { m_autoScalingStatusHasBeenSet = true; m_autoScalingStatus = value; }
    inline GetFleetResult& WithAutoScalingStatus(AutoScalingStatus value) { SetAutoScalingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of target workers in the fleet.</p>
     */
    inline int GetTargetWorkerCount() const { return m_targetWorkerCount; }
    inline void SetTargetWorkerCount(int value) { m_targetWorkerCountHasBeenSet = true; m_targetWorkerCount = value; }
    inline GetFleetResult& WithTargetWorkerCount(int value) { SetTargetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers in the fleet.</p>
     */
    inline int GetWorkerCount() const { return m_workerCount; }
    inline void SetWorkerCount(int value) { m_workerCountHasBeenSet = true; m_workerCount = value; }
    inline GetFleetResult& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers specified in the fleet.</p>
     */
    inline int GetMinWorkerCount() const { return m_minWorkerCount; }
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }
    inline GetFleetResult& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline GetFleetResult& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = FleetConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = FleetConfiguration>
    GetFleetResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script that runs as a worker is starting up that you can use to provide
     * additional configuration for workers in your fleet.</p>
     */
    inline const HostConfiguration& GetHostConfiguration() const { return m_hostConfiguration; }
    template<typename HostConfigurationT = HostConfiguration>
    void SetHostConfiguration(HostConfigurationT&& value) { m_hostConfigurationHasBeenSet = true; m_hostConfiguration = std::forward<HostConfigurationT>(value); }
    template<typename HostConfigurationT = HostConfiguration>
    GetFleetResult& WithHostConfiguration(HostConfigurationT&& value) { SetHostConfiguration(std::forward<HostConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline const FleetCapabilities& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = FleetCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = FleetCapabilities>
    GetFleetResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetFleetResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetFleetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetFleetResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetFleetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetFleetResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FleetStatus m_status{FleetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AutoScalingStatus m_autoScalingStatus{AutoScalingStatus::NOT_SET};
    bool m_autoScalingStatusHasBeenSet = false;

    int m_targetWorkerCount{0};
    bool m_targetWorkerCountHasBeenSet = false;

    int m_workerCount{0};
    bool m_workerCountHasBeenSet = false;

    int m_minWorkerCount{0};
    bool m_minWorkerCountHasBeenSet = false;

    int m_maxWorkerCount{0};
    bool m_maxWorkerCountHasBeenSet = false;

    FleetConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    HostConfiguration m_hostConfiguration;
    bool m_hostConfigurationHasBeenSet = false;

    FleetCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
