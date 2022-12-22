/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableTarget.h>
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
  class DescribeScalableTargetsResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult();
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline const Aws::Vector<ScalableTarget>& GetScalableTargets() const{ return m_scalableTargets; }

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline void SetScalableTargets(const Aws::Vector<ScalableTarget>& value) { m_scalableTargets = value; }

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline void SetScalableTargets(Aws::Vector<ScalableTarget>&& value) { m_scalableTargets = std::move(value); }

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& WithScalableTargets(const Aws::Vector<ScalableTarget>& value) { SetScalableTargets(value); return *this;}

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& WithScalableTargets(Aws::Vector<ScalableTarget>&& value) { SetScalableTargets(std::move(value)); return *this;}

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& AddScalableTargets(const ScalableTarget& value) { m_scalableTargets.push_back(value); return *this; }

    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& AddScalableTargets(ScalableTarget&& value) { m_scalableTargets.push_back(std::move(value)); return *this; }


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
    inline DescribeScalableTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalableTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScalableTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScalableTarget> m_scalableTargets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
