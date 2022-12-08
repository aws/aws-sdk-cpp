/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/CapacityProvider.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class DescribeCapacityProvidersResult
  {
  public:
    AWS_ECS_API DescribeCapacityProvidersResult();
    AWS_ECS_API DescribeCapacityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeCapacityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of capacity providers.</p>
     */
    inline const Aws::Vector<CapacityProvider>& GetCapacityProviders() const{ return m_capacityProviders; }

    /**
     * <p>The list of capacity providers.</p>
     */
    inline void SetCapacityProviders(const Aws::Vector<CapacityProvider>& value) { m_capacityProviders = value; }

    /**
     * <p>The list of capacity providers.</p>
     */
    inline void SetCapacityProviders(Aws::Vector<CapacityProvider>&& value) { m_capacityProviders = std::move(value); }

    /**
     * <p>The list of capacity providers.</p>
     */
    inline DescribeCapacityProvidersResult& WithCapacityProviders(const Aws::Vector<CapacityProvider>& value) { SetCapacityProviders(value); return *this;}

    /**
     * <p>The list of capacity providers.</p>
     */
    inline DescribeCapacityProvidersResult& WithCapacityProviders(Aws::Vector<CapacityProvider>&& value) { SetCapacityProviders(std::move(value)); return *this;}

    /**
     * <p>The list of capacity providers.</p>
     */
    inline DescribeCapacityProvidersResult& AddCapacityProviders(const CapacityProvider& value) { m_capacityProviders.push_back(value); return *this; }

    /**
     * <p>The list of capacity providers.</p>
     */
    inline DescribeCapacityProvidersResult& AddCapacityProviders(CapacityProvider&& value) { m_capacityProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeCapacityProvidersResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeCapacityProvidersResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeCapacityProvidersResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeCapacityProvidersResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CapacityProvider> m_capacityProviders;

    Aws::Vector<Failure> m_failures;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
