﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceMetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/MetricDatapoint.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerServiceMetricDataResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServiceMetricDataResult() = default;
    AWS_LIGHTSAIL_API GetContainerServiceMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServiceMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the metric returned. </p>
     */
    inline ContainerServiceMetricName GetMetricName() const { return m_metricName; }
    inline void SetMetricName(ContainerServiceMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetContainerServiceMetricDataResult& WithMetricName(ContainerServiceMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline const Aws::Vector<MetricDatapoint>& GetMetricData() const { return m_metricData; }
    template<typename MetricDataT = Aws::Vector<MetricDatapoint>>
    void SetMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData = std::forward<MetricDataT>(value); }
    template<typename MetricDataT = Aws::Vector<MetricDatapoint>>
    GetContainerServiceMetricDataResult& WithMetricData(MetricDataT&& value) { SetMetricData(std::forward<MetricDataT>(value)); return *this;}
    template<typename MetricDataT = MetricDatapoint>
    GetContainerServiceMetricDataResult& AddMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData.emplace_back(std::forward<MetricDataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContainerServiceMetricDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerServiceMetricName m_metricName{ContainerServiceMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<MetricDatapoint> m_metricData;
    bool m_metricDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
