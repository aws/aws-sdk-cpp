/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/DeploymentDataSummary.h>
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
namespace LaunchWizard
{
namespace Model
{
  class ListDeploymentsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListDeploymentsResult();
    AWS_LAUNCHWIZARD_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the deployments.</p>
     */
    inline const Aws::Vector<DeploymentDataSummary>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>Lists the deployments.</p>
     */
    inline void SetDeployments(const Aws::Vector<DeploymentDataSummary>& value) { m_deployments = value; }

    /**
     * <p>Lists the deployments.</p>
     */
    inline void SetDeployments(Aws::Vector<DeploymentDataSummary>&& value) { m_deployments = std::move(value); }

    /**
     * <p>Lists the deployments.</p>
     */
    inline ListDeploymentsResult& WithDeployments(const Aws::Vector<DeploymentDataSummary>& value) { SetDeployments(value); return *this;}

    /**
     * <p>Lists the deployments.</p>
     */
    inline ListDeploymentsResult& WithDeployments(Aws::Vector<DeploymentDataSummary>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>Lists the deployments.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const DeploymentDataSummary& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>Lists the deployments.</p>
     */
    inline ListDeploymentsResult& AddDeployments(DeploymentDataSummary&& value) { m_deployments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeploymentDataSummary> m_deployments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
