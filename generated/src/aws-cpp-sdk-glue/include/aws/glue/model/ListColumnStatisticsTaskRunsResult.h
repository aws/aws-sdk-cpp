/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListColumnStatisticsTaskRunsResult
  {
  public:
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult() = default;
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnStatisticsTaskRunIds() const { return m_columnStatisticsTaskRunIds; }
    template<typename ColumnStatisticsTaskRunIdsT = Aws::Vector<Aws::String>>
    void SetColumnStatisticsTaskRunIds(ColumnStatisticsTaskRunIdsT&& value) { m_columnStatisticsTaskRunIdsHasBeenSet = true; m_columnStatisticsTaskRunIds = std::forward<ColumnStatisticsTaskRunIdsT>(value); }
    template<typename ColumnStatisticsTaskRunIdsT = Aws::Vector<Aws::String>>
    ListColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRunIds(ColumnStatisticsTaskRunIdsT&& value) { SetColumnStatisticsTaskRunIds(std::forward<ColumnStatisticsTaskRunIdsT>(value)); return *this;}
    template<typename ColumnStatisticsTaskRunIdsT = Aws::String>
    ListColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRunIds(ColumnStatisticsTaskRunIdsT&& value) { m_columnStatisticsTaskRunIdsHasBeenSet = true; m_columnStatisticsTaskRunIds.emplace_back(std::forward<ColumnStatisticsTaskRunIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListColumnStatisticsTaskRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListColumnStatisticsTaskRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_columnStatisticsTaskRunIds;
    bool m_columnStatisticsTaskRunIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
