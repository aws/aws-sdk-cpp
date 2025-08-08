/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactMetricResult.h>
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
namespace Connect
{
namespace Model
{
  class GetContactMetricsResult
  {
  public:
    AWS_CONNECT_API GetContactMetricsResult() = default;
    AWS_CONNECT_API GetContactMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetContactMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of metric results containing the calculated values for each requested
     * metric. Each result includes the metric name and its corresponding calculated
     * value.</p>
     */
    inline const Aws::Vector<ContactMetricResult>& GetMetricResults() const { return m_metricResults; }
    template<typename MetricResultsT = Aws::Vector<ContactMetricResult>>
    void SetMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults = std::forward<MetricResultsT>(value); }
    template<typename MetricResultsT = Aws::Vector<ContactMetricResult>>
    GetContactMetricsResult& WithMetricResults(MetricResultsT&& value) { SetMetricResults(std::forward<MetricResultsT>(value)); return *this;}
    template<typename MetricResultsT = ContactMetricResult>
    GetContactMetricsResult& AddMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults.emplace_back(std::forward<MetricResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the contact for which metrics were retrieved.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetContactMetricsResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact for which metrics were retrieved.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetContactMetricsResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactMetricResult> m_metricResults;
    bool m_metricResultsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
