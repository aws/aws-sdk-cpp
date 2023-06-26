/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/MetricsSummary.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class GetMetricsSummaryResult
  {
  public:
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult();
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline const MetricsSummary& GetMetricsSummary() const{ return m_metricsSummary; }

    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline void SetMetricsSummary(const MetricsSummary& value) { m_metricsSummary = value; }

    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline void SetMetricsSummary(MetricsSummary&& value) { m_metricsSummary = std::move(value); }

    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline GetMetricsSummaryResult& WithMetricsSummary(const MetricsSummary& value) { SetMetricsSummary(value); return *this;}

    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline GetMetricsSummaryResult& WithMetricsSummary(MetricsSummary&& value) { SetMetricsSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMetricsSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMetricsSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMetricsSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MetricsSummary m_metricsSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
