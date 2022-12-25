/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalingPlan.h>
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
  class DescribeScalingPlansResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult();
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the scaling plans.</p>
     */
    inline const Aws::Vector<ScalingPlan>& GetScalingPlans() const{ return m_scalingPlans; }

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline void SetScalingPlans(const Aws::Vector<ScalingPlan>& value) { m_scalingPlans = value; }

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline void SetScalingPlans(Aws::Vector<ScalingPlan>&& value) { m_scalingPlans = std::move(value); }

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline DescribeScalingPlansResult& WithScalingPlans(const Aws::Vector<ScalingPlan>& value) { SetScalingPlans(value); return *this;}

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline DescribeScalingPlansResult& WithScalingPlans(Aws::Vector<ScalingPlan>&& value) { SetScalingPlans(std::move(value)); return *this;}

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline DescribeScalingPlansResult& AddScalingPlans(const ScalingPlan& value) { m_scalingPlans.push_back(value); return *this; }

    /**
     * <p>Information about the scaling plans.</p>
     */
    inline DescribeScalingPlansResult& AddScalingPlans(ScalingPlan&& value) { m_scalingPlans.push_back(std::move(value)); return *this; }


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
    inline DescribeScalingPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalingPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScalingPlan> m_scalingPlans;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
