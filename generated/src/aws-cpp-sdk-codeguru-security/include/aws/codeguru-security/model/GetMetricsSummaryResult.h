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
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult() = default;
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API GetMetricsSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary metrics from the specified date.</p>
     */
    inline const MetricsSummary& GetMetricsSummary() const { return m_metricsSummary; }
    template<typename MetricsSummaryT = MetricsSummary>
    void SetMetricsSummary(MetricsSummaryT&& value) { m_metricsSummaryHasBeenSet = true; m_metricsSummary = std::forward<MetricsSummaryT>(value); }
    template<typename MetricsSummaryT = MetricsSummary>
    GetMetricsSummaryResult& WithMetricsSummary(MetricsSummaryT&& value) { SetMetricsSummary(std::forward<MetricsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMetricsSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricsSummary m_metricsSummary;
    bool m_metricsSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
