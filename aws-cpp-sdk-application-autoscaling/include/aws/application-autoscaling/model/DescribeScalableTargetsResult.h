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
#include <aws/application-autoscaling/model/ScalableTarget.h>

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
  class AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult
  {
  public:
    DescribeScalableTargetsResult();
    DescribeScalableTargetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScalableTargetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline const Aws::Vector<ScalableTarget>& GetScalableTargets() const{ return m_scalableTargets; }

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline void SetScalableTargets(const Aws::Vector<ScalableTarget>& value) { m_scalableTargets = value; }

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline void SetScalableTargets(Aws::Vector<ScalableTarget>&& value) { m_scalableTargets = value; }

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& WithScalableTargets(const Aws::Vector<ScalableTarget>& value) { SetScalableTargets(value); return *this;}

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& WithScalableTargets(Aws::Vector<ScalableTarget>&& value) { SetScalableTargets(value); return *this;}

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& AddScalableTargets(const ScalableTarget& value) { m_scalableTargets.push_back(value); return *this; }

    /**
     * <p>The list of scalable targets that matches the request parameters.</p>
     */
    inline DescribeScalableTargetsResult& AddScalableTargets(ScalableTarget&& value) { m_scalableTargets.push_back(value); return *this; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeScalableTargets</code> request. When the results of a
     * <code>DescribeScalableTargets</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ScalableTarget> m_scalableTargets;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
