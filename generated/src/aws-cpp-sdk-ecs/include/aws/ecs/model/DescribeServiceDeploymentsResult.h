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
    AWS_ECS_API DescribeServiceDeploymentsResult();
    AWS_ECS_API DescribeServiceDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeServiceDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of service deployments described.</p>
     */
    inline const Aws::Vector<ServiceDeployment>& GetServiceDeployments() const{ return m_serviceDeployments; }
    inline void SetServiceDeployments(const Aws::Vector<ServiceDeployment>& value) { m_serviceDeployments = value; }
    inline void SetServiceDeployments(Aws::Vector<ServiceDeployment>&& value) { m_serviceDeployments = std::move(value); }
    inline DescribeServiceDeploymentsResult& WithServiceDeployments(const Aws::Vector<ServiceDeployment>& value) { SetServiceDeployments(value); return *this;}
    inline DescribeServiceDeploymentsResult& WithServiceDeployments(Aws::Vector<ServiceDeployment>&& value) { SetServiceDeployments(std::move(value)); return *this;}
    inline DescribeServiceDeploymentsResult& AddServiceDeployments(const ServiceDeployment& value) { m_serviceDeployments.push_back(value); return *this; }
    inline DescribeServiceDeploymentsResult& AddServiceDeployments(ServiceDeployment&& value) { m_serviceDeployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p> <p>If you decsribe a deployment
     * with a service revision created before October 25, 2024, the call fails. The
     * failure includes the service revision ARN and the reason set to
     * <code>MISSING</code>.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }
    inline DescribeServiceDeploymentsResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}
    inline DescribeServiceDeploymentsResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}
    inline DescribeServiceDeploymentsResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }
    inline DescribeServiceDeploymentsResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeServiceDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeServiceDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeServiceDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceDeployment> m_serviceDeployments;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
