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
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult();
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline const DetectedMetricSetConfig& GetDetectedMetricSetConfig() const{ return m_detectedMetricSetConfig; }

    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline void SetDetectedMetricSetConfig(const DetectedMetricSetConfig& value) { m_detectedMetricSetConfig = value; }

    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline void SetDetectedMetricSetConfig(DetectedMetricSetConfig&& value) { m_detectedMetricSetConfig = std::move(value); }

    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline DetectMetricSetConfigResult& WithDetectedMetricSetConfig(const DetectedMetricSetConfig& value) { SetDetectedMetricSetConfig(value); return *this;}

    /**
     * <p>The inferred dataset configuration for the datasource.</p>
     */
    inline DetectMetricSetConfigResult& WithDetectedMetricSetConfig(DetectedMetricSetConfig&& value) { SetDetectedMetricSetConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectMetricSetConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectMetricSetConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectMetricSetConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DetectedMetricSetConfig m_detectedMetricSetConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
