/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/CapacityForecast.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/LoadForecast.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class GetPredictiveScalingForecastResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult() = default;
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The load forecast. </p>
     */
    inline const Aws::Vector<LoadForecast>& GetLoadForecast() const { return m_loadForecast; }
    template<typename LoadForecastT = Aws::Vector<LoadForecast>>
    void SetLoadForecast(LoadForecastT&& value) { m_loadForecastHasBeenSet = true; m_loadForecast = std::forward<LoadForecastT>(value); }
    template<typename LoadForecastT = Aws::Vector<LoadForecast>>
    GetPredictiveScalingForecastResult& WithLoadForecast(LoadForecastT&& value) { SetLoadForecast(std::forward<LoadForecastT>(value)); return *this;}
    template<typename LoadForecastT = LoadForecast>
    GetPredictiveScalingForecastResult& AddLoadForecast(LoadForecastT&& value) { m_loadForecastHasBeenSet = true; m_loadForecast.emplace_back(std::forward<LoadForecastT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The capacity forecast. </p>
     */
    inline const CapacityForecast& GetCapacityForecast() const { return m_capacityForecast; }
    template<typename CapacityForecastT = CapacityForecast>
    void SetCapacityForecast(CapacityForecastT&& value) { m_capacityForecastHasBeenSet = true; m_capacityForecast = std::forward<CapacityForecastT>(value); }
    template<typename CapacityForecastT = CapacityForecast>
    GetPredictiveScalingForecastResult& WithCapacityForecast(CapacityForecastT&& value) { SetCapacityForecast(std::forward<CapacityForecastT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the forecast was made. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetPredictiveScalingForecastResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPredictiveScalingForecastResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoadForecast> m_loadForecast;
    bool m_loadForecastHasBeenSet = false;

    CapacityForecast m_capacityForecast;
    bool m_capacityForecastHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
