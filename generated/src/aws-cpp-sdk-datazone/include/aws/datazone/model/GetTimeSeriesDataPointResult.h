/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/TimeSeriesEntityType.h>
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
  class GetTimeSeriesDataPointResult
  {
  public:
    AWS_DATAZONE_API GetTimeSeriesDataPointResult();
    AWS_DATAZONE_API GetTimeSeriesDataPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetTimeSeriesDataPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityType = value; }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityType = std::move(value); }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointResult& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointResult& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline const TimeSeriesDataPointFormOutput& GetForm() const{ return m_form; }

    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline void SetForm(const TimeSeriesDataPointFormOutput& value) { m_form = value; }

    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline void SetForm(TimeSeriesDataPointFormOutput&& value) { m_form = std::move(value); }

    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithForm(const TimeSeriesDataPointFormOutput& value) { SetForm(value); return *this;}

    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithForm(TimeSeriesDataPointFormOutput&& value) { SetForm(std::move(value)); return *this;}


    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(const Aws::String& value) { m_formName = value; }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(Aws::String&& value) { m_formName = std::move(value); }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(const char* value) { m_formName.assign(value); }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointResult& WithFormName(const char* value) { SetFormName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTimeSeriesDataPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTimeSeriesDataPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTimeSeriesDataPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_domainId;

    Aws::String m_entityId;

    TimeSeriesEntityType m_entityType;

    TimeSeriesDataPointFormOutput m_form;

    Aws::String m_formName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
