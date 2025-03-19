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
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult() = default;
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API PostTimeSeriesDataPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    PostTimeSeriesDataPointsResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    PostTimeSeriesDataPointsResult& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline TimeSeriesEntityType GetEntityType() const { return m_entityType; }
    inline void SetEntityType(TimeSeriesEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline PostTimeSeriesDataPointsResult& WithEntityType(TimeSeriesEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forms that contain the data points that you have posted.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointFormOutput>& GetForms() const { return m_forms; }
    template<typename FormsT = Aws::Vector<TimeSeriesDataPointFormOutput>>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::Vector<TimeSeriesDataPointFormOutput>>
    PostTimeSeriesDataPointsResult& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    template<typename FormsT = TimeSeriesDataPointFormOutput>
    PostTimeSeriesDataPointsResult& AddForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms.emplace_back(std::forward<FormsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PostTimeSeriesDataPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    TimeSeriesEntityType m_entityType{TimeSeriesEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointFormOutput> m_forms;
    bool m_formsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
