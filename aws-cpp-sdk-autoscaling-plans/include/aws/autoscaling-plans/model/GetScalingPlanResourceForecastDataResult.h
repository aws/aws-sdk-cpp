/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult
  {
  public:
    GetScalingPlanResourceForecastDataResult();
    GetScalingPlanResourceForecastDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetScalingPlanResourceForecastDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data points to return.</p>
     */
    inline const Aws::Vector<Datapoint>& GetDatapoints() const{ return m_datapoints; }

    /**
     * <p>The data points to return.</p>
     */
    inline void SetDatapoints(const Aws::Vector<Datapoint>& value) { m_datapoints = value; }

    /**
     * <p>The data points to return.</p>
     */
    inline void SetDatapoints(Aws::Vector<Datapoint>&& value) { m_datapoints = std::move(value); }

    /**
     * <p>The data points to return.</p>
     */
    inline GetScalingPlanResourceForecastDataResult& WithDatapoints(const Aws::Vector<Datapoint>& value) { SetDatapoints(value); return *this;}

    /**
     * <p>The data points to return.</p>
     */
    inline GetScalingPlanResourceForecastDataResult& WithDatapoints(Aws::Vector<Datapoint>&& value) { SetDatapoints(std::move(value)); return *this;}

    /**
     * <p>The data points to return.</p>
     */
    inline GetScalingPlanResourceForecastDataResult& AddDatapoints(const Datapoint& value) { m_datapoints.push_back(value); return *this; }

    /**
     * <p>The data points to return.</p>
     */
    inline GetScalingPlanResourceForecastDataResult& AddDatapoints(Datapoint&& value) { m_datapoints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Datapoint> m_datapoints;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
