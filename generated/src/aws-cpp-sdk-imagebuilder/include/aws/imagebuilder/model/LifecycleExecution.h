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
    AWS_IMAGEBUILDER_API LifecycleExecution();
    AWS_IMAGEBUILDER_API LifecycleExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = value; }

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::move(value); }

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId.assign(value); }

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline LifecycleExecution& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline LifecycleExecution& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>Identifies the lifecycle policy runtime instance.</p>
     */
    inline LifecycleExecution& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline LifecycleExecution& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline LifecycleExecution& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that ran.</p>
     */
    inline LifecycleExecution& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}


    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline const LifecycleExecutionResourcesImpactedSummary& GetResourcesImpactedSummary() const{ return m_resourcesImpactedSummary; }

    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline bool ResourcesImpactedSummaryHasBeenSet() const { return m_resourcesImpactedSummaryHasBeenSet; }

    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline void SetResourcesImpactedSummary(const LifecycleExecutionResourcesImpactedSummary& value) { m_resourcesImpactedSummaryHasBeenSet = true; m_resourcesImpactedSummary = value; }

    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline void SetResourcesImpactedSummary(LifecycleExecutionResourcesImpactedSummary&& value) { m_resourcesImpactedSummaryHasBeenSet = true; m_resourcesImpactedSummary = std::move(value); }

    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline LifecycleExecution& WithResourcesImpactedSummary(const LifecycleExecutionResourcesImpactedSummary& value) { SetResourcesImpactedSummary(value); return *this;}

    /**
     * <p>Contains information about associated resources that are identified for
     * action by the runtime instance of the lifecycle policy.</p>
     */
    inline LifecycleExecution& WithResourcesImpactedSummary(LifecycleExecutionResourcesImpactedSummary&& value) { SetResourcesImpactedSummary(std::move(value)); return *this;}


    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline const LifecycleExecutionState& GetState() const{ return m_state; }

    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline void SetState(const LifecycleExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline void SetState(LifecycleExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline LifecycleExecution& WithState(const LifecycleExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>Runtime state that reports if the policy action ran successfully, failed, or
     * was skipped.</p>
     */
    inline LifecycleExecution& WithState(LifecycleExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline LifecycleExecution& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the lifecycle runtime instance started.</p>
     */
    inline LifecycleExecution& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline LifecycleExecution& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when the lifecycle runtime instance completed.</p>
     */
    inline LifecycleExecution& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;

    LifecycleExecutionResourcesImpactedSummary m_resourcesImpactedSummary;
    bool m_resourcesImpactedSummaryHasBeenSet = false;

    LifecycleExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
