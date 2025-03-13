/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedMetricSetConfig.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class DetectMetricSetConfigResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult() = default;
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline const DetectedMetricSetConfig& GetDetectedMetricSetConfig() const { return m_detectedMetricSetConfig; }
    template<typename DetectedMetricSetConfigT = DetectedMetricSetConfig>
    void SetDetectedMetricSetConfig(DetectedMetricSetConfigT&& value) { m_detectedMetricSetConfigHasBeenSet = true; m_detectedMetricSetConfig = std::forward<DetectedMetricSetConfigT>(value); }
    template<typename DetectedMetricSetConfigT = DetectedMetricSetConfig>
    DetectMetricSetConfigResult& WithDetectedMetricSetConfig(DetectedMetricSetConfigT&& value) { SetDetectedMetricSetConfig(std::forward<DetectedMetricSetConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectMetricSetConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DetectedMetricSetConfig m_detectedMetricSetConfig;
    bool m_detectedMetricSetConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
