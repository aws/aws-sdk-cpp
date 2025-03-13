/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryRuntimeStatistics.h>
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
namespace Athena
{
namespace Model
{
  class GetQueryRuntimeStatisticsResult
  {
  public:
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult() = default;
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline const QueryRuntimeStatistics& GetQueryRuntimeStatistics() const { return m_queryRuntimeStatistics; }
    template<typename QueryRuntimeStatisticsT = QueryRuntimeStatistics>
    void SetQueryRuntimeStatistics(QueryRuntimeStatisticsT&& value) { m_queryRuntimeStatisticsHasBeenSet = true; m_queryRuntimeStatistics = std::forward<QueryRuntimeStatisticsT>(value); }
    template<typename QueryRuntimeStatisticsT = QueryRuntimeStatistics>
    GetQueryRuntimeStatisticsResult& WithQueryRuntimeStatistics(QueryRuntimeStatisticsT&& value) { SetQueryRuntimeStatistics(std::forward<QueryRuntimeStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryRuntimeStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryRuntimeStatistics m_queryRuntimeStatistics;
    bool m_queryRuntimeStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
