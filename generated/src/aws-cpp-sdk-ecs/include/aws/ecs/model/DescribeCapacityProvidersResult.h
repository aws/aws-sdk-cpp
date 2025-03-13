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
    AWS_ECS_API DescribeCapacityProvidersResult() = default;
    AWS_ECS_API DescribeCapacityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeCapacityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of capacity providers.</p>
     */
    inline const Aws::Vector<CapacityProvider>& GetCapacityProviders() const { return m_capacityProviders; }
    template<typename CapacityProvidersT = Aws::Vector<CapacityProvider>>
    void SetCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::forward<CapacityProvidersT>(value); }
    template<typename CapacityProvidersT = Aws::Vector<CapacityProvider>>
    DescribeCapacityProvidersResult& WithCapacityProviders(CapacityProvidersT&& value) { SetCapacityProviders(std::forward<CapacityProvidersT>(value)); return *this;}
    template<typename CapacityProvidersT = CapacityProvider>
    DescribeCapacityProvidersResult& AddCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    DescribeCapacityProvidersResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    DescribeCapacityProvidersResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeCapacityProviders</code> request. When the results of a
     * <code>DescribeCapacityProviders</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCapacityProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityProvider> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
