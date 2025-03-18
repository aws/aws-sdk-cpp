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
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult() = default;
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of column statistics task runs.</p>
     */
    inline const Aws::Vector<ColumnStatisticsTaskRun>& GetColumnStatisticsTaskRuns() const { return m_columnStatisticsTaskRuns; }
    template<typename ColumnStatisticsTaskRunsT = Aws::Vector<ColumnStatisticsTaskRun>>
    void SetColumnStatisticsTaskRuns(ColumnStatisticsTaskRunsT&& value) { m_columnStatisticsTaskRunsHasBeenSet = true; m_columnStatisticsTaskRuns = std::forward<ColumnStatisticsTaskRunsT>(value); }
    template<typename ColumnStatisticsTaskRunsT = Aws::Vector<ColumnStatisticsTaskRun>>
    GetColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRuns(ColumnStatisticsTaskRunsT&& value) { SetColumnStatisticsTaskRuns(std::forward<ColumnStatisticsTaskRunsT>(value)); return *this;}
    template<typename ColumnStatisticsTaskRunsT = ColumnStatisticsTaskRun>
    GetColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRuns(ColumnStatisticsTaskRunsT&& value) { m_columnStatisticsTaskRunsHasBeenSet = true; m_columnStatisticsTaskRuns.emplace_back(std::forward<ColumnStatisticsTaskRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all task runs have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetColumnStatisticsTaskRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetColumnStatisticsTaskRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnStatisticsTaskRun> m_columnStatisticsTaskRuns;
    bool m_columnStatisticsTaskRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
