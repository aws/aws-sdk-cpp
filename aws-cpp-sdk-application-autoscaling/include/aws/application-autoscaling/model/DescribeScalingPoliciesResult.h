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
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalingPolicy.h>
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
  class AWS_APPLICATIONAUTOSCALING_API DescribeScalingPoliciesResult
  {
  public:
    DescribeScalingPoliciesResult();
    DescribeScalingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScalingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the scaling policies.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const{ return m_scalingPolicies; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline void SetScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { m_scalingPolicies = value; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline void SetScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { m_scalingPolicies = std::move(value); }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline DescribeScalingPoliciesResult& WithScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { SetScalingPolicies(value); return *this;}

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline DescribeScalingPoliciesResult& WithScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { SetScalingPolicies(std::move(value)); return *this;}

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline DescribeScalingPoliciesResult& AddScalingPolicies(const ScalingPolicy& value) { m_scalingPolicies.push_back(value); return *this; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline DescribeScalingPoliciesResult& AddScalingPolicies(ScalingPolicy&& value) { m_scalingPolicies.push_back(std::move(value)); return *this; }


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
    inline DescribeScalingPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScalingPolicy> m_scalingPolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
