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
    AWS_DATAZONE_API GetTimeSeriesDataPointResult() = default;
    AWS_DATAZONE_API GetTimeSeriesDataPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetTimeSeriesDataPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset data point that
     * you want to get.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetTimeSeriesDataPointResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    GetTimeSeriesDataPointResult& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline TimeSeriesEntityType GetEntityType() const { return m_entityType; }
    inline void SetEntityType(TimeSeriesEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline GetTimeSeriesDataPointResult& WithEntityType(TimeSeriesEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time series form that houses the data point that you want to get.</p>
     */
    inline const TimeSeriesDataPointFormOutput& GetForm() const { return m_form; }
    template<typename FormT = TimeSeriesDataPointFormOutput>
    void SetForm(FormT&& value) { m_formHasBeenSet = true; m_form = std::forward<FormT>(value); }
    template<typename FormT = TimeSeriesDataPointFormOutput>
    GetTimeSeriesDataPointResult& WithForm(FormT&& value) { SetForm(std::forward<FormT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline const Aws::String& GetFormName() const { return m_formName; }
    template<typename FormNameT = Aws::String>
    void SetFormName(FormNameT&& value) { m_formNameHasBeenSet = true; m_formName = std::forward<FormNameT>(value); }
    template<typename FormNameT = Aws::String>
    GetTimeSeriesDataPointResult& WithFormName(FormNameT&& value) { SetFormName(std::forward<FormNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTimeSeriesDataPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    TimeSeriesEntityType m_entityType{TimeSeriesEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    TimeSeriesDataPointFormOutput m_form;
    bool m_formHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
