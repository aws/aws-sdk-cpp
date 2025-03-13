/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetImportTask.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDataSetImportHistoryResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data set import tasks.</p>
     */
    inline const Aws::Vector<DataSetImportTask>& GetDataSetImportTasks() const { return m_dataSetImportTasks; }
    template<typename DataSetImportTasksT = Aws::Vector<DataSetImportTask>>
    void SetDataSetImportTasks(DataSetImportTasksT&& value) { m_dataSetImportTasksHasBeenSet = true; m_dataSetImportTasks = std::forward<DataSetImportTasksT>(value); }
    template<typename DataSetImportTasksT = Aws::Vector<DataSetImportTask>>
    ListDataSetImportHistoryResult& WithDataSetImportTasks(DataSetImportTasksT&& value) { SetDataSetImportTasks(std::forward<DataSetImportTasksT>(value)); return *this;}
    template<typename DataSetImportTasksT = DataSetImportTask>
    ListDataSetImportHistoryResult& AddDataSetImportTasks(DataSetImportTasksT&& value) { m_dataSetImportTasksHasBeenSet = true; m_dataSetImportTasks.emplace_back(std::forward<DataSetImportTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSetImportHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSetImportHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetImportTask> m_dataSetImportTasks;
    bool m_dataSetImportTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
