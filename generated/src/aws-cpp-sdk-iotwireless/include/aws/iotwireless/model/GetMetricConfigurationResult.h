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
    AWS_IOTWIRELESS_API GetMetricConfigurationResult();
    AWS_IOTWIRELESS_API GetMetricConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMetricConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline const SummaryMetricConfiguration& GetSummaryMetric() const{ return m_summaryMetric; }

    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline void SetSummaryMetric(const SummaryMetricConfiguration& value) { m_summaryMetric = value; }

    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline void SetSummaryMetric(SummaryMetricConfiguration&& value) { m_summaryMetric = std::move(value); }

    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline GetMetricConfigurationResult& WithSummaryMetric(const SummaryMetricConfiguration& value) { SetSummaryMetric(value); return *this;}

    /**
     * <p>The configuration status of the AWS account for summary metric
     * aggregation.</p>
     */
    inline GetMetricConfigurationResult& WithSummaryMetric(SummaryMetricConfiguration&& value) { SetSummaryMetric(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMetricConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMetricConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMetricConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SummaryMetricConfiguration m_summaryMetric;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
