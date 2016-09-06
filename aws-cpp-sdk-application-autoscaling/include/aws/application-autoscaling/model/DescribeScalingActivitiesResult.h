/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalingActivity.h>

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
  class AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult
  {
  public:
    DescribeScalingActivitiesResult();
    DescribeScalingActivitiesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScalingActivitiesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline const Aws::Vector<ScalingActivity>& GetScalingActivities() const{ return m_scalingActivities; }

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline void SetScalingActivities(const Aws::Vector<ScalingActivity>& value) { m_scalingActivities = value; }

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline void SetScalingActivities(Aws::Vector<ScalingActivity>&& value) { m_scalingActivities = value; }

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline DescribeScalingActivitiesResult& WithScalingActivities(const Aws::Vector<ScalingActivity>& value) { SetScalingActivities(value); return *this;}

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline DescribeScalingActivitiesResult& WithScalingActivities(Aws::Vector<ScalingActivity>&& value) { SetScalingActivities(value); return *this;}

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline DescribeScalingActivitiesResult& AddScalingActivities(const ScalingActivity& value) { m_scalingActivities.push_back(value); return *this; }

    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline DescribeScalingActivitiesResult& AddScalingActivities(ScalingActivity&& value) { m_scalingActivities.push_back(value); return *this; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalingActivities</code> request. When the results of a
     * <code>DescribeScalingActivities</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ScalingActivity> m_scalingActivities;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
