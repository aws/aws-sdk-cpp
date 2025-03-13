/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class StartMLLabelingSetGenerationTaskRunResult
  {
  public:
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult() = default;
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const { return m_taskRunId; }
    template<typename TaskRunIdT = Aws::String>
    void SetTaskRunId(TaskRunIdT&& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = std::forward<TaskRunIdT>(value); }
    template<typename TaskRunIdT = Aws::String>
    StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(TaskRunIdT&& value) { SetTaskRunId(std::forward<TaskRunIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMLLabelingSetGenerationTaskRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskRunId;
    bool m_taskRunIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
