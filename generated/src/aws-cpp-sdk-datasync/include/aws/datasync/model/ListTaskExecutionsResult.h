/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskExecutionListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListTaskExecutionsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutionsResponse">AWS
   * API Reference</a></p>
   */
  class ListTaskExecutionsResult
  {
  public:
    AWS_DATASYNC_API ListTaskExecutionsResult() = default;
    AWS_DATASYNC_API ListTaskExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListTaskExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the task's executions.</p>
     */
    inline const Aws::Vector<TaskExecutionListEntry>& GetTaskExecutions() const { return m_taskExecutions; }
    template<typename TaskExecutionsT = Aws::Vector<TaskExecutionListEntry>>
    void SetTaskExecutions(TaskExecutionsT&& value) { m_taskExecutionsHasBeenSet = true; m_taskExecutions = std::forward<TaskExecutionsT>(value); }
    template<typename TaskExecutionsT = Aws::Vector<TaskExecutionListEntry>>
    ListTaskExecutionsResult& WithTaskExecutions(TaskExecutionsT&& value) { SetTaskExecutions(std::forward<TaskExecutionsT>(value)); return *this;}
    template<typename TaskExecutionsT = TaskExecutionListEntry>
    ListTaskExecutionsResult& AddTaskExecutions(TaskExecutionsT&& value) { m_taskExecutionsHasBeenSet = true; m_taskExecutions.emplace_back(std::forward<TaskExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaskExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTaskExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaskExecutionListEntry> m_taskExecutions;
    bool m_taskExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
