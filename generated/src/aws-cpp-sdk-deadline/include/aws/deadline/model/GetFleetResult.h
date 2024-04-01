/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AutoScalingStatus.h>
#include <aws/deadline/model/FleetCapabilities.h>
#include <aws/deadline/model/FleetConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetStatus.h>
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


    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline const AutoScalingStatus& GetAutoScalingStatus() const{ return m_autoScalingStatus; }

    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline void SetAutoScalingStatus(const AutoScalingStatus& value) { m_autoScalingStatus = value; }

    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline void SetAutoScalingStatus(AutoScalingStatus&& value) { m_autoScalingStatus = std::move(value); }

    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline GetFleetResult& WithAutoScalingStatus(const AutoScalingStatus& value) { SetAutoScalingStatus(value); return *this;}

    /**
     * <p>The Auto Scaling status of the fleet. Either <code>GROWING</code>,
     * <code>STEADY</code>, or <code>SHRINKING</code>.</p>
     */
    inline GetFleetResult& WithAutoScalingStatus(AutoScalingStatus&& value) { SetAutoScalingStatus(std::move(value)); return *this;}


    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline const FleetCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline void SetCapabilities(const FleetCapabilities& value) { m_capabilities = value; }

    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline void SetCapabilities(FleetCapabilities&& value) { m_capabilities = std::move(value); }

    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline GetFleetResult& WithCapabilities(const FleetCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Outlines what the fleet is capable of for minimums, maximums, and naming, in
     * addition to attribute names and values.</p>
     */
    inline GetFleetResult& WithCapabilities(FleetCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline void SetConfiguration(const FleetConfiguration& value) { m_configuration = value; }

    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline void SetConfiguration(FleetConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline GetFleetResult& WithConfiguration(const FleetConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration setting for the fleet.</p>
     */
    inline GetFleetResult& WithConfiguration(FleetConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetFleetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetFleetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetFleetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetFleetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetFleetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the fleet.</p>
     */
    inline GetFleetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the fleet.</p>
     */
    inline GetFleetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the fleet.</p>
     */
    inline GetFleetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the fleet.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline GetFleetResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the fleet.</p>
     */
    inline GetFleetResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the fleet.</p>
     */
    inline GetFleetResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline GetFleetResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline GetFleetResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the farm in the fleet.</p>
     */
    inline GetFleetResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline GetFleetResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline GetFleetResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline GetFleetResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }

    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCount = value; }

    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline GetFleetResult& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}


    /**
     * <p>The minimum number of workers specified in the fleet.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }

    /**
     * <p>The minimum number of workers specified in the fleet.</p>
     */
    inline void SetMinWorkerCount(int value) { m_minWorkerCount = value; }

    /**
     * <p>The minimum number of workers specified in the fleet.</p>
     */
    inline GetFleetResult& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}


    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetFleetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetFleetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetFleetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline void SetStatus(const FleetStatus& value) { m_status = value; }

    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline void SetStatus(FleetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline GetFleetResult& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The Auto Scaling status of the fleet.</p>
     */
    inline GetFleetResult& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The number of target workers in the fleet.</p>
     */
    inline int GetTargetWorkerCount() const{ return m_targetWorkerCount; }

    /**
     * <p>The number of target workers in the fleet.</p>
     */
    inline void SetTargetWorkerCount(int value) { m_targetWorkerCount = value; }

    /**
     * <p>The number of target workers in the fleet.</p>
     */
    inline GetFleetResult& WithTargetWorkerCount(int value) { SetTargetWorkerCount(value); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetFleetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetFleetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetFleetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetFleetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetFleetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The number of workers in the fleet.</p>
     */
    inline int GetWorkerCount() const{ return m_workerCount; }

    /**
     * <p>The number of workers in the fleet.</p>
     */
    inline void SetWorkerCount(int value) { m_workerCount = value; }

    /**
     * <p>The number of workers in the fleet.</p>
     */
    inline GetFleetResult& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AutoScalingStatus m_autoScalingStatus;

    FleetCapabilities m_capabilities;

    FleetConfiguration m_configuration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_displayName;

    Aws::String m_farmId;

    Aws::String m_fleetId;

    int m_maxWorkerCount;

    int m_minWorkerCount;

    Aws::String m_roleArn;

    FleetStatus m_status;

    int m_targetWorkerCount;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    int m_workerCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
