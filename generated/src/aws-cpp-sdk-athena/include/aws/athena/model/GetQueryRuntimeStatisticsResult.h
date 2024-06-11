﻿/**
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
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult();
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetQueryRuntimeStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Runtime statistics about the query execution.</p>
     */
    inline const QueryRuntimeStatistics& GetQueryRuntimeStatistics() const{ return m_queryRuntimeStatistics; }
    inline void SetQueryRuntimeStatistics(const QueryRuntimeStatistics& value) { m_queryRuntimeStatistics = value; }
    inline void SetQueryRuntimeStatistics(QueryRuntimeStatistics&& value) { m_queryRuntimeStatistics = std::move(value); }
    inline GetQueryRuntimeStatisticsResult& WithQueryRuntimeStatistics(const QueryRuntimeStatistics& value) { SetQueryRuntimeStatistics(value); return *this;}
    inline GetQueryRuntimeStatisticsResult& WithQueryRuntimeStatistics(QueryRuntimeStatistics&& value) { SetQueryRuntimeStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryRuntimeStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryRuntimeStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryRuntimeStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QueryRuntimeStatistics m_queryRuntimeStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
