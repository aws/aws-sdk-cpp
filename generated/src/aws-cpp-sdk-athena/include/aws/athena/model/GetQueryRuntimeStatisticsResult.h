/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryRuntimeStatistics.h>
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
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult();
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline const QueryRuntimeStatistics& GetQueryRuntimeStatistics() const{ return m_queryRuntimeStatistics; }

    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline void SetQueryRuntimeStatistics(const QueryRuntimeStatistics& value) { m_queryRuntimeStatistics = value; }

    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline void SetQueryRuntimeStatistics(QueryRuntimeStatistics&& value) { m_queryRuntimeStatistics = std::move(value); }

    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline GetQueryRuntimeStatisticsResult& WithQueryRuntimeStatistics(const QueryRuntimeStatistics& value) { SetQueryRuntimeStatistics(value); return *this;}

    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline GetQueryRuntimeStatisticsResult& WithQueryRuntimeStatistics(QueryRuntimeStatistics&& value) { SetQueryRuntimeStatistics(std::move(value)); return *this;}

  private:

    QueryRuntimeStatistics m_queryRuntimeStatistics;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
