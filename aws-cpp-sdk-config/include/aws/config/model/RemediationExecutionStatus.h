/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceKey.h>
#include <aws/config/model/RemediationExecutionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/RemediationExecutionStep.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides details of the current status of the invoked remediation action for
   * that resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RemediationExecutionStatus">AWS
   * API Reference</a></p>
   */
  class RemediationExecutionStatus
  {
  public:
    AWS_CONFIGSERVICE_API RemediationExecutionStatus();
    AWS_CONFIGSERVICE_API RemediationExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceKey& GetResourceKey() const{ return m_resourceKey; }

    
    inline bool ResourceKeyHasBeenSet() const { return m_resourceKeyHasBeenSet; }

    
    inline void SetResourceKey(const ResourceKey& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = value; }

    
    inline void SetResourceKey(ResourceKey&& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = std::move(value); }

    
    inline RemediationExecutionStatus& WithResourceKey(const ResourceKey& value) { SetResourceKey(value); return *this;}

    
    inline RemediationExecutionStatus& WithResourceKey(ResourceKey&& value) { SetResourceKey(std::move(value)); return *this;}


    /**
     * <p>ENUM of the values.</p>
     */
    inline const RemediationExecutionState& GetState() const{ return m_state; }

    /**
     * <p>ENUM of the values.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>ENUM of the values.</p>
     */
    inline void SetState(const RemediationExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>ENUM of the values.</p>
     */
    inline void SetState(RemediationExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>ENUM of the values.</p>
     */
    inline RemediationExecutionStatus& WithState(const RemediationExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>ENUM of the values.</p>
     */
    inline RemediationExecutionStatus& WithState(RemediationExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details of every step.</p>
     */
    inline const Aws::Vector<RemediationExecutionStep>& GetStepDetails() const{ return m_stepDetails; }

    /**
     * <p>Details of every step.</p>
     */
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }

    /**
     * <p>Details of every step.</p>
     */
    inline void SetStepDetails(const Aws::Vector<RemediationExecutionStep>& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = value; }

    /**
     * <p>Details of every step.</p>
     */
    inline void SetStepDetails(Aws::Vector<RemediationExecutionStep>&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::move(value); }

    /**
     * <p>Details of every step.</p>
     */
    inline RemediationExecutionStatus& WithStepDetails(const Aws::Vector<RemediationExecutionStep>& value) { SetStepDetails(value); return *this;}

    /**
     * <p>Details of every step.</p>
     */
    inline RemediationExecutionStatus& WithStepDetails(Aws::Vector<RemediationExecutionStep>&& value) { SetStepDetails(std::move(value)); return *this;}

    /**
     * <p>Details of every step.</p>
     */
    inline RemediationExecutionStatus& AddStepDetails(const RemediationExecutionStep& value) { m_stepDetailsHasBeenSet = true; m_stepDetails.push_back(value); return *this; }

    /**
     * <p>Details of every step.</p>
     */
    inline RemediationExecutionStatus& AddStepDetails(RemediationExecutionStep&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const{ return m_invocationTime; }

    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }

    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline void SetInvocationTime(const Aws::Utils::DateTime& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = value; }

    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline void SetInvocationTime(Aws::Utils::DateTime&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::move(value); }

    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline RemediationExecutionStatus& WithInvocationTime(const Aws::Utils::DateTime& value) { SetInvocationTime(value); return *this;}

    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline RemediationExecutionStatus& WithInvocationTime(Aws::Utils::DateTime&& value) { SetInvocationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline RemediationExecutionStatus& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline RemediationExecutionStatus& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    ResourceKey m_resourceKey;
    bool m_resourceKeyHasBeenSet = false;

    RemediationExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<RemediationExecutionStep> m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_invocationTime;
    bool m_invocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
