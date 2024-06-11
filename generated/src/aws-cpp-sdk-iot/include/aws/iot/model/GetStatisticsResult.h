﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/Statistics.h>
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
namespace IoT
{
namespace Model
{
  class GetStatisticsResult
  {
  public:
    AWS_IOT_API GetStatisticsResult();
    AWS_IOT_API GetStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline const Statistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const Statistics& value) { m_statistics = value; }
    inline void SetStatistics(Statistics&& value) { m_statistics = std::move(value); }
    inline GetStatisticsResult& WithStatistics(const Statistics& value) { SetStatistics(value); return *this;}
    inline GetStatisticsResult& WithStatistics(Statistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Statistics m_statistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
