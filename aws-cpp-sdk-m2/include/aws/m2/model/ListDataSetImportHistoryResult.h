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


    /**
     * <p>The data set import tasks.</p>
     */
    inline const Aws::Vector<DataSetImportTask>& GetDataSetImportTasks() const{ return m_dataSetImportTasks; }

    /**
     * <p>The data set import tasks.</p>
     */
    inline void SetDataSetImportTasks(const Aws::Vector<DataSetImportTask>& value) { m_dataSetImportTasks = value; }

    /**
     * <p>The data set import tasks.</p>
     */
    inline void SetDataSetImportTasks(Aws::Vector<DataSetImportTask>&& value) { m_dataSetImportTasks = std::move(value); }

    /**
     * <p>The data set import tasks.</p>
     */
    inline ListDataSetImportHistoryResult& WithDataSetImportTasks(const Aws::Vector<DataSetImportTask>& value) { SetDataSetImportTasks(value); return *this;}

    /**
     * <p>The data set import tasks.</p>
     */
    inline ListDataSetImportHistoryResult& WithDataSetImportTasks(Aws::Vector<DataSetImportTask>&& value) { SetDataSetImportTasks(std::move(value)); return *this;}

    /**
     * <p>The data set import tasks.</p>
     */
    inline ListDataSetImportHistoryResult& AddDataSetImportTasks(const DataSetImportTask& value) { m_dataSetImportTasks.push_back(value); return *this; }

    /**
     * <p>The data set import tasks.</p>
     */
    inline ListDataSetImportHistoryResult& AddDataSetImportTasks(DataSetImportTask&& value) { m_dataSetImportTasks.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetImportHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetImportHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetImportHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSetImportTask> m_dataSetImportTasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
