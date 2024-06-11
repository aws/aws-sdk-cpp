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
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult();
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data set import tasks.</p>
     */
    inline const Aws::Vector<DataSetImportTask>& GetDataSetImportTasks() const{ return m_dataSetImportTasks; }
    inline void SetDataSetImportTasks(const Aws::Vector<DataSetImportTask>& value) { m_dataSetImportTasks = value; }
    inline void SetDataSetImportTasks(Aws::Vector<DataSetImportTask>&& value) { m_dataSetImportTasks = std::move(value); }
    inline ListDataSetImportHistoryResult& WithDataSetImportTasks(const Aws::Vector<DataSetImportTask>& value) { SetDataSetImportTasks(value); return *this;}
    inline ListDataSetImportHistoryResult& WithDataSetImportTasks(Aws::Vector<DataSetImportTask>&& value) { SetDataSetImportTasks(std::move(value)); return *this;}
    inline ListDataSetImportHistoryResult& AddDataSetImportTasks(const DataSetImportTask& value) { m_dataSetImportTasks.push_back(value); return *this; }
    inline ListDataSetImportHistoryResult& AddDataSetImportTasks(DataSetImportTask&& value) { m_dataSetImportTasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataSetImportHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSetImportHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSetImportHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataSetImportHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataSetImportHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataSetImportHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetImportTask> m_dataSetImportTasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
