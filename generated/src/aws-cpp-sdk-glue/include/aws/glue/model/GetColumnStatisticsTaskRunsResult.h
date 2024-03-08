/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ColumnStatisticsTaskRun.h>
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
  class GetColumnStatisticsTaskRunsResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult();
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline const Aws::Vector<ColumnStatisticsTaskRun>& GetColumnStatisticsTaskRuns() const{ return m_columnStatisticsTaskRuns; }

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline void SetColumnStatisticsTaskRuns(const Aws::Vector<ColumnStatisticsTaskRun>& value) { m_columnStatisticsTaskRuns = value; }

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline void SetColumnStatisticsTaskRuns(Aws::Vector<ColumnStatisticsTaskRun>&& value) { m_columnStatisticsTaskRuns = std::move(value); }

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRuns(const Aws::Vector<ColumnStatisticsTaskRun>& value) { SetColumnStatisticsTaskRuns(value); return *this;}

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRuns(Aws::Vector<ColumnStatisticsTaskRun>&& value) { SetColumnStatisticsTaskRuns(std::move(value)); return *this;}

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRuns(const ColumnStatisticsTaskRun& value) { m_columnStatisticsTaskRuns.push_back(value); return *this; }

    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRuns(ColumnStatisticsTaskRun&& value) { m_columnStatisticsTaskRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline GetColumnStatisticsTaskRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetColumnStatisticsTaskRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetColumnStatisticsTaskRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetColumnStatisticsTaskRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ColumnStatisticsTaskRun> m_columnStatisticsTaskRuns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
