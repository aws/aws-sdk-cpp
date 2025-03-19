/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SummaryMetricConfiguration.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetMetricConfigurationResult
  {
  public:
    AWS_IOTWIRELESS_API GetMetricConfigurationResult() = default;
    AWS_IOTWIRELESS_API GetMetricConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMetricConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline const SummaryMetricConfiguration& GetSummaryMetric() const { return m_summaryMetric; }
    template<typename SummaryMetricT = SummaryMetricConfiguration>
    void SetSummaryMetric(SummaryMetricT&& value) { m_summaryMetricHasBeenSet = true; m_summaryMetric = std::forward<SummaryMetricT>(value); }
    template<typename SummaryMetricT = SummaryMetricConfiguration>
    GetMetricConfigurationResult& WithSummaryMetric(SummaryMetricT&& value) { SetSummaryMetric(std::forward<SummaryMetricT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMetricConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SummaryMetricConfiguration m_summaryMetric;
    bool m_summaryMetricHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
