/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabaseMetricName.h>
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
  class GetRelationalDatabaseMetricDataResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the metric returned.</p>
     */
    inline RelationalDatabaseMetricName GetMetricName() const { return m_metricName; }
    inline void SetMetricName(RelationalDatabaseMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetRelationalDatabaseMetricDataResult& WithMetricName(RelationalDatabaseMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline const Aws::Vector<MetricDatapoint>& GetMetricData() const { return m_metricData; }
    template<typename MetricDataT = Aws::Vector<MetricDatapoint>>
    void SetMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData = std::forward<MetricDataT>(value); }
    template<typename MetricDataT = Aws::Vector<MetricDatapoint>>
    GetRelationalDatabaseMetricDataResult& WithMetricData(MetricDataT&& value) { SetMetricData(std::forward<MetricDataT>(value)); return *this;}
    template<typename MetricDataT = MetricDatapoint>
    GetRelationalDatabaseMetricDataResult& AddMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData.emplace_back(std::forward<MetricDataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseMetricDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RelationalDatabaseMetricName m_metricName{RelationalDatabaseMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<MetricDatapoint> m_metricData;
    bool m_metricDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
