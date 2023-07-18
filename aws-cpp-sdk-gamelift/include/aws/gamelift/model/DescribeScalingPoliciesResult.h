﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingPolicy.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPoliciesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeScalingPoliciesResult
  {
  public:
    DescribeScalingPoliciesResult();
    DescribeScalingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScalingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const{ return m_scalingPolicies; }

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline void SetScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { m_scalingPolicies = value; }

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline void SetScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { m_scalingPolicies = std::move(value); }

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline DescribeScalingPoliciesResult& WithScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { SetScalingPolicies(value); return *this;}

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline DescribeScalingPoliciesResult& WithScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { SetScalingPolicies(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline DescribeScalingPoliciesResult& AddScalingPolicies(const ScalingPolicy& value) { m_scalingPolicies.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing the scaling policies matching the
     * request.</p>
     */
    inline DescribeScalingPoliciesResult& AddScalingPolicies(ScalingPolicy&& value) { m_scalingPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeScalingPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeScalingPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeScalingPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScalingPolicy> m_scalingPolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
