/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TargetResource.h>
#include <aws/iotsitewise/model/ResolveTo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/ExecutionStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the execution summary of the computation model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExecutionSummary">AWS
   * API Reference</a></p>
   */
  class ExecutionSummary
  {
  public:
    AWS_IOTSITEWISE_API ExecutionSummary() = default;
    AWS_IOTSITEWISE_API ExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    ExecutionSummary& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action exectued.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    ExecutionSummary& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    ExecutionSummary& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceVersion() const { return m_targetResourceVersion; }
    inline bool TargetResourceVersionHasBeenSet() const { return m_targetResourceVersionHasBeenSet; }
    template<typename TargetResourceVersionT = Aws::String>
    void SetTargetResourceVersion(TargetResourceVersionT&& value) { m_targetResourceVersionHasBeenSet = true; m_targetResourceVersion = std::forward<TargetResourceVersionT>(value); }
    template<typename TargetResourceVersionT = Aws::String>
    ExecutionSummary& WithTargetResourceVersion(TargetResourceVersionT&& value) { SetTargetResourceVersion(std::forward<TargetResourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this execution resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    inline bool ResolveToHasBeenSet() const { return m_resolveToHasBeenSet; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    ExecutionSummary& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the process started.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const { return m_executionStartTime; }
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    void SetExecutionStartTime(ExecutionStartTimeT&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::forward<ExecutionStartTimeT>(value); }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    ExecutionSummary& WithExecutionStartTime(ExecutionStartTimeT&& value) { SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the process ended.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    void SetExecutionEndTime(ExecutionEndTimeT&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::forward<ExecutionEndTimeT>(value); }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    ExecutionSummary& WithExecutionEndTime(ExecutionEndTimeT&& value) { SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the execution process.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    template<typename ExecutionStatusT = ExecutionStatus>
    void SetExecutionStatus(ExecutionStatusT&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::forward<ExecutionStatusT>(value); }
    template<typename ExecutionStatusT = ExecutionStatus>
    ExecutionSummary& WithExecutionStatus(ExecutionStatusT&& value) { SetExecutionStatus(std::forward<ExecutionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution entity version associated with the summary.</p>
     */
    inline const Aws::String& GetExecutionEntityVersion() const { return m_executionEntityVersion; }
    inline bool ExecutionEntityVersionHasBeenSet() const { return m_executionEntityVersionHasBeenSet; }
    template<typename ExecutionEntityVersionT = Aws::String>
    void SetExecutionEntityVersion(ExecutionEntityVersionT&& value) { m_executionEntityVersionHasBeenSet = true; m_executionEntityVersion = std::forward<ExecutionEntityVersionT>(value); }
    template<typename ExecutionEntityVersionT = Aws::String>
    ExecutionSummary& WithExecutionEntityVersion(ExecutionEntityVersionT&& value) { SetExecutionEntityVersion(std::forward<ExecutionEntityVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    Aws::String m_targetResourceVersion;
    bool m_targetResourceVersionHasBeenSet = false;

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime{};
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime{};
    bool m_executionEndTimeHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_executionEntityVersion;
    bool m_executionEntityVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
