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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeExecutionResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeExecutionResult() = default;
    AWS_IOTSITEWISE_API DescribeExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    DescribeExecutionResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action exectued.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    DescribeExecutionResult& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    DescribeExecutionResult& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceVersion() const { return m_targetResourceVersion; }
    template<typename TargetResourceVersionT = Aws::String>
    void SetTargetResourceVersion(TargetResourceVersionT&& value) { m_targetResourceVersionHasBeenSet = true; m_targetResourceVersion = std::forward<TargetResourceVersionT>(value); }
    template<typename TargetResourceVersionT = Aws::String>
    DescribeExecutionResult& WithTargetResourceVersion(TargetResourceVersionT&& value) { SetTargetResourceVersion(std::forward<TargetResourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this execution resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    DescribeExecutionResult& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the process started.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const { return m_executionStartTime; }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    void SetExecutionStartTime(ExecutionStartTimeT&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::forward<ExecutionStartTimeT>(value); }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    DescribeExecutionResult& WithExecutionStartTime(ExecutionStartTimeT&& value) { SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the process ended.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    void SetExecutionEndTime(ExecutionEndTimeT&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::forward<ExecutionEndTimeT>(value); }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    DescribeExecutionResult& WithExecutionEndTime(ExecutionEndTimeT&& value) { SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the execution process.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const { return m_executionStatus; }
    template<typename ExecutionStatusT = ExecutionStatus>
    void SetExecutionStatus(ExecutionStatusT&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::forward<ExecutionStatusT>(value); }
    template<typename ExecutionStatusT = ExecutionStatus>
    DescribeExecutionResult& WithExecutionStatus(ExecutionStatusT&& value) { SetExecutionStatus(std::forward<ExecutionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExecutionResult() const { return m_executionResult; }
    template<typename ExecutionResultT = Aws::Map<Aws::String, Aws::String>>
    void SetExecutionResult(ExecutionResultT&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::forward<ExecutionResultT>(value); }
    template<typename ExecutionResultT = Aws::Map<Aws::String, Aws::String>>
    DescribeExecutionResult& WithExecutionResult(ExecutionResultT&& value) { SetExecutionResult(std::forward<ExecutionResultT>(value)); return *this;}
    template<typename ExecutionResultKeyT = Aws::String, typename ExecutionResultValueT = Aws::String>
    DescribeExecutionResult& AddExecutionResult(ExecutionResultKeyT&& key, ExecutionResultValueT&& value) {
      m_executionResultHasBeenSet = true; m_executionResult.emplace(std::forward<ExecutionResultKeyT>(key), std::forward<ExecutionResultValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about the execution of your anomaly detection
     * models. This includes model metrics and training timestamps for both training
     * and inference actions.</p> <ul> <li> <p> The training action (Amazon Web
     * Services/ANOMALY_DETECTION_TRAINING), includes performance metrics that help you
     * compare different versions of your anomaly detection models. These metrics
     * provide insights into the model's performance during the training process. </p>
     * </li> <li> <p> The inference action (Amazon Web
     * Services/ANOMALY_DETECTION_INFERENCE), includes information about the results of
     * executing your anomaly detection models. This helps you understand the output of
     * your models and assess their performance. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExecutionDetails() const { return m_executionDetails; }
    template<typename ExecutionDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetExecutionDetails(ExecutionDetailsT&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = std::forward<ExecutionDetailsT>(value); }
    template<typename ExecutionDetailsT = Aws::Map<Aws::String, Aws::String>>
    DescribeExecutionResult& WithExecutionDetails(ExecutionDetailsT&& value) { SetExecutionDetails(std::forward<ExecutionDetailsT>(value)); return *this;}
    template<typename ExecutionDetailsKeyT = Aws::String, typename ExecutionDetailsValueT = Aws::String>
    DescribeExecutionResult& AddExecutionDetails(ExecutionDetailsKeyT&& key, ExecutionDetailsValueT&& value) {
      m_executionDetailsHasBeenSet = true; m_executionDetails.emplace(std::forward<ExecutionDetailsKeyT>(key), std::forward<ExecutionDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Entity version used for the execution.</p>
     */
    inline const Aws::String& GetExecutionEntityVersion() const { return m_executionEntityVersion; }
    template<typename ExecutionEntityVersionT = Aws::String>
    void SetExecutionEntityVersion(ExecutionEntityVersionT&& value) { m_executionEntityVersionHasBeenSet = true; m_executionEntityVersion = std::forward<ExecutionEntityVersionT>(value); }
    template<typename ExecutionEntityVersionT = Aws::String>
    DescribeExecutionResult& WithExecutionEntityVersion(ExecutionEntityVersionT&& value) { SetExecutionEntityVersion(std::forward<ExecutionEntityVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_executionResult;
    bool m_executionResultHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_executionDetails;
    bool m_executionDetailsHasBeenSet = false;

    Aws::String m_executionEntityVersion;
    bool m_executionEntityVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
