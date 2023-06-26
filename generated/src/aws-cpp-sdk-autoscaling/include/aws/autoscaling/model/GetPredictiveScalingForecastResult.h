/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/CapacityForecast.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LoadForecast.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class GetPredictiveScalingForecastResult
  {
  public:
    AWS_AUTOSCALING_API GetPredictiveScalingForecastResult();
    AWS_AUTOSCALING_API GetPredictiveScalingForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API GetPredictiveScalingForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The load forecast.</p>
     */
    inline const Aws::Vector<LoadForecast>& GetLoadForecast() const{ return m_loadForecast; }

    /**
     * <p>The load forecast.</p>
     */
    inline void SetLoadForecast(const Aws::Vector<LoadForecast>& value) { m_loadForecast = value; }

    /**
     * <p>The load forecast.</p>
     */
    inline void SetLoadForecast(Aws::Vector<LoadForecast>&& value) { m_loadForecast = std::move(value); }

    /**
     * <p>The load forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& WithLoadForecast(const Aws::Vector<LoadForecast>& value) { SetLoadForecast(value); return *this;}

    /**
     * <p>The load forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& WithLoadForecast(Aws::Vector<LoadForecast>&& value) { SetLoadForecast(std::move(value)); return *this;}

    /**
     * <p>The load forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& AddLoadForecast(const LoadForecast& value) { m_loadForecast.push_back(value); return *this; }

    /**
     * <p>The load forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& AddLoadForecast(LoadForecast&& value) { m_loadForecast.push_back(std::move(value)); return *this; }


    /**
     * <p>The capacity forecast.</p>
     */
    inline const CapacityForecast& GetCapacityForecast() const{ return m_capacityForecast; }

    /**
     * <p>The capacity forecast.</p>
     */
    inline void SetCapacityForecast(const CapacityForecast& value) { m_capacityForecast = value; }

    /**
     * <p>The capacity forecast.</p>
     */
    inline void SetCapacityForecast(CapacityForecast&& value) { m_capacityForecast = std::move(value); }

    /**
     * <p>The capacity forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& WithCapacityForecast(const CapacityForecast& value) { SetCapacityForecast(value); return *this;}

    /**
     * <p>The capacity forecast.</p>
     */
    inline GetPredictiveScalingForecastResult& WithCapacityForecast(CapacityForecast&& value) { SetCapacityForecast(std::move(value)); return *this;}


    /**
     * <p>The time the forecast was made.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the forecast was made.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The time the forecast was made.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The time the forecast was made.</p>
     */
    inline GetPredictiveScalingForecastResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the forecast was made.</p>
     */
    inline GetPredictiveScalingForecastResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetPredictiveScalingForecastResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetPredictiveScalingForecastResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LoadForecast> m_loadForecast;

    CapacityForecast m_capacityForecast;

    Aws::Utils::DateTime m_updateTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
