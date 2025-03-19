/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceDeployment.h>
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
  class DescribeServiceDeploymentsResult
  {
  public:
    AWS_ECS_API DescribeServiceDeploymentsResult() = default;
    AWS_ECS_API DescribeServiceDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeServiceDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of service deployments described.</p>
     */
    inline const Aws::Vector<ServiceDeployment>& GetServiceDeployments() const { return m_serviceDeployments; }
    template<typename ServiceDeploymentsT = Aws::Vector<ServiceDeployment>>
    void SetServiceDeployments(ServiceDeploymentsT&& value) { m_serviceDeploymentsHasBeenSet = true; m_serviceDeployments = std::forward<ServiceDeploymentsT>(value); }
    template<typename ServiceDeploymentsT = Aws::Vector<ServiceDeployment>>
    DescribeServiceDeploymentsResult& WithServiceDeployments(ServiceDeploymentsT&& value) { SetServiceDeployments(std::forward<ServiceDeploymentsT>(value)); return *this;}
    template<typename ServiceDeploymentsT = ServiceDeployment>
    DescribeServiceDeploymentsResult& AddServiceDeployments(ServiceDeploymentsT&& value) { m_serviceDeploymentsHasBeenSet = true; m_serviceDeployments.emplace_back(std::forward<ServiceDeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p> <p>If you decsribe a deployment
     * with a service revision created before October 25, 2024, the call fails. The
     * failure includes the service revision ARN and the reason set to
     * <code>MISSING</code>.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    DescribeServiceDeploymentsResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    DescribeServiceDeploymentsResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceDeployment> m_serviceDeployments;
    bool m_serviceDeploymentsHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
