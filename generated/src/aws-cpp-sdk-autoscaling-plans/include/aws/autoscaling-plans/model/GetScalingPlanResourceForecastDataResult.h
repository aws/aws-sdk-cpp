/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/Datapoint.h>
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
namespace AutoScalingPlans
{
namespace Model
{
  class GetScalingPlanResourceForecastDataResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult() = default;
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data points to return.</p>
     */
    inline const Aws::Vector<Datapoint>& GetDatapoints() const { return m_datapoints; }
    template<typename DatapointsT = Aws::Vector<Datapoint>>
    void SetDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints = std::forward<DatapointsT>(value); }
    template<typename DatapointsT = Aws::Vector<Datapoint>>
    GetScalingPlanResourceForecastDataResult& WithDatapoints(DatapointsT&& value) { SetDatapoints(std::forward<DatapointsT>(value)); return *this;}
    template<typename DatapointsT = Datapoint>
    GetScalingPlanResourceForecastDataResult& AddDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints.emplace_back(std::forward<DatapointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetScalingPlanResourceForecastDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Datapoint> m_datapoints;
    bool m_datapointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
