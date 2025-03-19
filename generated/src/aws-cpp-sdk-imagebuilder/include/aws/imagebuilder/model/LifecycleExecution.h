/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourcesImpactedSummary.h>
#include <aws/imagebuilder/model/LifecycleExecutionState.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains metadata from a runtime instance of a lifecycle
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecution">AWS
   * API Reference</a></p>
   */
  class LifecycleExecution
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecution() = default;
    AWS_IMAGEBUILDER_API LifecycleExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    LifecycleExecution& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const { return m_lifecyclePolicyArn; }
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }
    template<typename LifecyclePolicyArnT = Aws::String>
    void SetLifecyclePolicyArn(LifecyclePolicyArnT&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::forward<LifecyclePolicyArnT>(value); }
    template<typename LifecyclePolicyArnT = Aws::String>
    LifecycleExecution& WithLifecyclePolicyArn(LifecyclePolicyArnT&& value) { SetLifecyclePolicyArn(std::forward<LifecyclePolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline const LifecycleExecutionResourcesImpactedSummary& GetResourcesImpactedSummary() const { return m_resourcesImpactedSummary; }
    inline bool ResourcesImpactedSummaryHasBeenSet() const { return m_resourcesImpactedSummaryHasBeenSet; }
    template<typename ResourcesImpactedSummaryT = LifecycleExecutionResourcesImpactedSummary>
    void SetResourcesImpactedSummary(ResourcesImpactedSummaryT&& value) { m_resourcesImpactedSummaryHasBeenSet = true; m_resourcesImpactedSummary = std::forward<ResourcesImpactedSummaryT>(value); }
    template<typename ResourcesImpactedSummaryT = LifecycleExecutionResourcesImpactedSummary>
    LifecycleExecution& WithResourcesImpactedSummary(ResourcesImpactedSummaryT&& value) { SetResourcesImpactedSummary(std::forward<ResourcesImpactedSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline const LifecycleExecutionState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = LifecycleExecutionState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = LifecycleExecutionState>
    LifecycleExecution& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LifecycleExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LifecycleExecution& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;

    LifecycleExecutionResourcesImpactedSummary m_resourcesImpactedSummary;
    bool m_resourcesImpactedSummaryHasBeenSet = false;

    LifecycleExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
