/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/TimeSeriesEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TimeSeriesDataPointFormOutput.h>
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
namespace DataZone
{
namespace Model
{
  class PostTimeSeriesDataPointsResult
  {
  public:
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult();
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityType = value; }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityType = std::move(value); }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointFormOutput>& GetForms() const{ return m_forms; }

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline void SetForms(const Aws::Vector<TimeSeriesDataPointFormOutput>& value) { m_forms = value; }

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline void SetForms(Aws::Vector<TimeSeriesDataPointFormOutput>&& value) { m_forms = std::move(value); }

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithForms(const Aws::Vector<TimeSeriesDataPointFormOutput>& value) { SetForms(value); return *this;}

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline PostTimeSeriesDataPointsResult& WithForms(Aws::Vector<TimeSeriesDataPointFormOutput>&& value) { SetForms(std::move(value)); return *this;}

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline PostTimeSeriesDataPointsResult& AddForms(const TimeSeriesDataPointFormOutput& value) { m_forms.push_back(value); return *this; }

    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline PostTimeSeriesDataPointsResult& AddForms(TimeSeriesDataPointFormOutput&& value) { m_forms.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PostTimeSeriesDataPointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PostTimeSeriesDataPointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PostTimeSeriesDataPointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_domainId;

    Aws::String m_entityId;

    TimeSeriesEntityType m_entityType;

    Aws::Vector<TimeSeriesDataPointFormOutput> m_forms;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
