/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/DeploymentEventDataSummary.h>
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
  class ListDeploymentEventsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult();
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the deployment events.</p>
     */
    inline const Aws::Vector<DeploymentEventDataSummary>& GetDeploymentEvents() const{ return m_deploymentEvents; }

    /**
     * <p>Lists the deployment events.</p>
     */
    inline void SetDeploymentEvents(const Aws::Vector<DeploymentEventDataSummary>& value) { m_deploymentEvents = value; }

    /**
     * <p>Lists the deployment events.</p>
     */
    inline void SetDeploymentEvents(Aws::Vector<DeploymentEventDataSummary>&& value) { m_deploymentEvents = std::move(value); }

    /**
     * <p>Lists the deployment events.</p>
     */
    inline ListDeploymentEventsResult& WithDeploymentEvents(const Aws::Vector<DeploymentEventDataSummary>& value) { SetDeploymentEvents(value); return *this;}

    /**
     * <p>Lists the deployment events.</p>
     */
    inline ListDeploymentEventsResult& WithDeploymentEvents(Aws::Vector<DeploymentEventDataSummary>&& value) { SetDeploymentEvents(std::move(value)); return *this;}

    /**
     * <p>Lists the deployment events.</p>
     */
    inline ListDeploymentEventsResult& AddDeploymentEvents(const DeploymentEventDataSummary& value) { m_deploymentEvents.push_back(value); return *this; }

    /**
     * <p>Lists the deployment events.</p>
     */
    inline ListDeploymentEventsResult& AddDeploymentEvents(DeploymentEventDataSummary&& value) { m_deploymentEvents.push_back(std::move(value)); return *this; }


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
    inline ListDeploymentEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListDeploymentEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListDeploymentEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDeploymentEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDeploymentEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDeploymentEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeploymentEventDataSummary> m_deploymentEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
