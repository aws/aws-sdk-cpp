/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/DetectMitigationActionsTaskSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class DescribeDetectMitigationActionsTaskResult
  {
  public:
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult() = default;
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The description of a task. </p>
     */
    inline const DetectMitigationActionsTaskSummary& GetTaskSummary() const { return m_taskSummary; }
    template<typename TaskSummaryT = DetectMitigationActionsTaskSummary>
    void SetTaskSummary(TaskSummaryT&& value) { m_taskSummaryHasBeenSet = true; m_taskSummary = std::forward<TaskSummaryT>(value); }
    template<typename TaskSummaryT = DetectMitigationActionsTaskSummary>
    DescribeDetectMitigationActionsTaskResult& WithTaskSummary(TaskSummaryT&& value) { SetTaskSummary(std::forward<TaskSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDetectMitigationActionsTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DetectMitigationActionsTaskSummary m_taskSummary;
    bool m_taskSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
