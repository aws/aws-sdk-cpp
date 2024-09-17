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
    AWS_DEADLINE_API GetFleetResult();
    AWS_DEADLINE_API GetFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline GetFleetResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline GetFleetResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline GetFleetResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }
    inline GetFleetResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetFleetResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetFleetResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the fleet.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetFleetResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetFleetResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetFleetResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the fleet.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetFleetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetFleetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetFleetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FleetStatus& value) { m_status = value; }
    inline void SetStatus(FleetStatus&& value) { m_status = std::move(value); }
    inline GetFleetResult& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}
    inline GetFleetResult& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline const AutoScalingStatus& GetAutoScalingStatus() const{ return m_autoScalingStatus; }
    inline void SetAutoScalingStatus(const AutoScalingStatus& value) { m_autoScalingStatus = value; }
    inline void SetAutoScalingStatus(AutoScalingStatus&& value) { m_autoScalingStatus = std::move(value); }
    inline GetFleetResult& WithAutoScalingStatus(const AutoScalingStatus& value) { SetAutoScalingStatus(value); return *this;}
    inline GetFleetResult& WithAutoScalingStatus(AutoScalingStatus&& value) { SetAutoScalingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of target workers in the fleet.</p>
     */
    inline int GetTargetWorkerCount() const{ return m_targetWorkerCount; }
    inline void SetTargetWorkerCount(int value) { m_targetWorkerCount = value; }
    inline GetFleetResult& WithTargetWorkerCount(int value) { SetTargetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers in the fleet.</p>
     */
    inline int GetWorkerCount() const{ return m_workerCount; }
    inline void SetWorkerCount(int value) { m_workerCount = value; }
    inline GetFleetResult& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers specified in the fleet.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }
    inline void SetMinWorkerCount(int value) { m_minWorkerCount = value; }
    inline GetFleetResult& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCount = value; }
    inline GetFleetResult& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const FleetConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(FleetConfiguration&& value) { m_configuration = std::move(value); }
    inline GetFleetResult& WithConfiguration(const FleetConfiguration& value) { SetConfiguration(value); return *this;}
    inline GetFleetResult& WithConfiguration(FleetConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline const FleetCapabilities& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const FleetCapabilities& value) { m_capabilities = value; }
    inline void SetCapabilities(FleetCapabilities&& value) { m_capabilities = std::move(value); }
    inline GetFleetResult& WithCapabilities(const FleetCapabilities& value) { SetCapabilities(value); return *this;}
    inline GetFleetResult& WithCapabilities(FleetCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetFleetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetFleetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetFleetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetFleetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetFleetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetFleetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetFleetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetFleetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetFleetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetFleetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetFleetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetFleetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetFleetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;

    Aws::String m_farmId;

    Aws::String m_displayName;

    Aws::String m_description;

    FleetStatus m_status;

    AutoScalingStatus m_autoScalingStatus;

    int m_targetWorkerCount;

    int m_workerCount;

    int m_minWorkerCount;

    int m_maxWorkerCount;

    FleetConfiguration m_configuration;

    FleetCapabilities m_capabilities;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
