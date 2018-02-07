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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalingPlanResource.h>
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
  class AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult
  {
  public:
    DescribeScalingPlanResourcesResult();
    DescribeScalingPlanResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScalingPlanResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the scalable resources.</p>
     */
    inline const Aws::Vector<ScalingPlanResource>& GetScalingPlanResources() const{ return m_scalingPlanResources; }

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline void SetScalingPlanResources(const Aws::Vector<ScalingPlanResource>& value) { m_scalingPlanResources = value; }

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline void SetScalingPlanResources(Aws::Vector<ScalingPlanResource>&& value) { m_scalingPlanResources = std::move(value); }

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline DescribeScalingPlanResourcesResult& WithScalingPlanResources(const Aws::Vector<ScalingPlanResource>& value) { SetScalingPlanResources(value); return *this;}

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline DescribeScalingPlanResourcesResult& WithScalingPlanResources(Aws::Vector<ScalingPlanResource>&& value) { SetScalingPlanResources(std::move(value)); return *this;}

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline DescribeScalingPlanResourcesResult& AddScalingPlanResources(const ScalingPlanResource& value) { m_scalingPlanResources.push_back(value); return *this; }

    /**
     * <p>Information about the scalable resources.</p>
     */
    inline DescribeScalingPlanResourcesResult& AddScalingPlanResources(ScalingPlanResource&& value) { m_scalingPlanResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPlanResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPlanResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPlanResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScalingPlanResource> m_scalingPlanResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
