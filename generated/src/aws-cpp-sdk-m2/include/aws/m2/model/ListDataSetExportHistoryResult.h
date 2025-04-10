/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetExportTask.h>
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
  class ListDataSetExportHistoryResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetExportHistoryResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetExportHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetExportHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data set export tasks.</p>
     */
    inline const Aws::Vector<DataSetExportTask>& GetDataSetExportTasks() const { return m_dataSetExportTasks; }
    template<typename DataSetExportTasksT = Aws::Vector<DataSetExportTask>>
    void SetDataSetExportTasks(DataSetExportTasksT&& value) { m_dataSetExportTasksHasBeenSet = true; m_dataSetExportTasks = std::forward<DataSetExportTasksT>(value); }
    template<typename DataSetExportTasksT = Aws::Vector<DataSetExportTask>>
    ListDataSetExportHistoryResult& WithDataSetExportTasks(DataSetExportTasksT&& value) { SetDataSetExportTasks(std::forward<DataSetExportTasksT>(value)); return *this;}
    template<typename DataSetExportTasksT = DataSetExportTask>
    ListDataSetExportHistoryResult& AddDataSetExportTasks(DataSetExportTasksT&& value) { m_dataSetExportTasksHasBeenSet = true; m_dataSetExportTasks.emplace_back(std::forward<DataSetExportTasksT>(value)); return *this; }
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
    ListDataSetExportHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSetExportHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetExportTask> m_dataSetExportTasks;
    bool m_dataSetExportTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
