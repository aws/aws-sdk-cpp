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
    AWS_CONFIGSERVICE_API RemediationExecutionStatus() = default;
    AWS_CONFIGSERVICE_API RemediationExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceKey& GetResourceKey() const { return m_resourceKey; }
    inline bool ResourceKeyHasBeenSet() const { return m_resourceKeyHasBeenSet; }
    template<typename ResourceKeyT = ResourceKey>
    void SetResourceKey(ResourceKeyT&& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = std::forward<ResourceKeyT>(value); }
    template<typename ResourceKeyT = ResourceKey>
    RemediationExecutionStatus& WithResourceKey(ResourceKeyT&& value) { SetResourceKey(std::forward<ResourceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ENUM of the values.</p>
     */
    inline RemediationExecutionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RemediationExecutionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RemediationExecutionStatus& WithState(RemediationExecutionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of every step.</p>
     */
    inline const Aws::Vector<RemediationExecutionStep>& GetStepDetails() const { return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    template<typename StepDetailsT = Aws::Vector<RemediationExecutionStep>>
    void SetStepDetails(StepDetailsT&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::forward<StepDetailsT>(value); }
    template<typename StepDetailsT = Aws::Vector<RemediationExecutionStep>>
    RemediationExecutionStatus& WithStepDetails(StepDetailsT&& value) { SetStepDetails(std::forward<StepDetailsT>(value)); return *this;}
    template<typename StepDetailsT = RemediationExecutionStep>
    RemediationExecutionStatus& AddStepDetails(StepDetailsT&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails.emplace_back(std::forward<StepDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Start time when the remediation was executed.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const { return m_invocationTime; }
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    void SetInvocationTime(InvocationTimeT&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::forward<InvocationTimeT>(value); }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    RemediationExecutionStatus& WithInvocationTime(InvocationTimeT&& value) { SetInvocationTime(std::forward<InvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the remediation execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    RemediationExecutionStatus& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    ResourceKey m_resourceKey;
    bool m_resourceKeyHasBeenSet = false;

    RemediationExecutionState m_state{RemediationExecutionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<RemediationExecutionStep> m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_invocationTime{};
    bool m_invocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
