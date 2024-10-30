/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceDeploymentBrief.h>
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
  class ListServiceDeploymentsResult
  {
  public:
    AWS_ECS_API ListServiceDeploymentsResult();
    AWS_ECS_API ListServiceDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListServiceDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An overview of the service deployment, including the following
     * properties:</p> <ul> <li> <p>The ARN of the service deployment.</p> </li> <li>
     * <p>The ARN of the service being deployed.</p> </li> <li> <p>The ARN of the
     * cluster that hosts the service in the service deployment.</p> </li> <li> <p>The
     * time that the service deployment started.</p> </li> <li> <p>The time that the
     * service deployment completed.</p> </li> <li> <p>The service deployment
     * status.</p> </li> <li> <p>Information about why the service deployment is in the
     * current state.</p> </li> <li> <p>The ARN of the service revision that is being
     * deployed.</p> </li> </ul>
     */
    inline const Aws::Vector<ServiceDeploymentBrief>& GetServiceDeployments() const{ return m_serviceDeployments; }
    inline void SetServiceDeployments(const Aws::Vector<ServiceDeploymentBrief>& value) { m_serviceDeployments = value; }
    inline void SetServiceDeployments(Aws::Vector<ServiceDeploymentBrief>&& value) { m_serviceDeployments = std::move(value); }
    inline ListServiceDeploymentsResult& WithServiceDeployments(const Aws::Vector<ServiceDeploymentBrief>& value) { SetServiceDeployments(value); return *this;}
    inline ListServiceDeploymentsResult& WithServiceDeployments(Aws::Vector<ServiceDeploymentBrief>&& value) { SetServiceDeployments(std::move(value)); return *this;}
    inline ListServiceDeploymentsResult& AddServiceDeployments(const ServiceDeploymentBrief& value) { m_serviceDeployments.push_back(value); return *this; }
    inline ListServiceDeploymentsResult& AddServiceDeployments(ServiceDeploymentBrief&& value) { m_serviceDeployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServiceDeployments</code> request. When the results of a
     * <code>ListServiceDeployments</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceDeploymentBrief> m_serviceDeployments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
