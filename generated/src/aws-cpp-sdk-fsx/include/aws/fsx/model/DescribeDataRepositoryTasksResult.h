/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryTask.h>
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
namespace FSx
{
namespace Model
{
  class DescribeDataRepositoryTasksResult
  {
  public:
    AWS_FSX_API DescribeDataRepositoryTasksResult() = default;
    AWS_FSX_API DescribeDataRepositoryTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeDataRepositoryTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline const Aws::Vector<DataRepositoryTask>& GetDataRepositoryTasks() const { return m_dataRepositoryTasks; }
    template<typename DataRepositoryTasksT = Aws::Vector<DataRepositoryTask>>
    void SetDataRepositoryTasks(DataRepositoryTasksT&& value) { m_dataRepositoryTasksHasBeenSet = true; m_dataRepositoryTasks = std::forward<DataRepositoryTasksT>(value); }
    template<typename DataRepositoryTasksT = Aws::Vector<DataRepositoryTask>>
    DescribeDataRepositoryTasksResult& WithDataRepositoryTasks(DataRepositoryTasksT&& value) { SetDataRepositoryTasks(std::forward<DataRepositoryTasksT>(value)); return *this;}
    template<typename DataRepositoryTasksT = DataRepositoryTask>
    DescribeDataRepositoryTasksResult& AddDataRepositoryTasks(DataRepositoryTasksT&& value) { m_dataRepositoryTasksHasBeenSet = true; m_dataRepositoryTasks.emplace_back(std::forward<DataRepositoryTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDataRepositoryTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataRepositoryTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataRepositoryTask> m_dataRepositoryTasks;
    bool m_dataRepositoryTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
