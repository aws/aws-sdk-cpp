/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/CreatedAt.h>
#include <aws/ecs/model/ServiceDeploymentStatus.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListServiceDeploymentsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListServiceDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceDeployments"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the service</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline ListServiceDeploymentsRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline ListServiceDeploymentsRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline ListServiceDeploymentsRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster that hosts the service. This can either be the cluster name or
     * ARN. Starting April 15, 2023, Amazon Web Services will not onboard new customers
     * to Amazon Elastic Inference (EI), and will help current customers migrate their
     * workloads to options that offer better price and performance. If you don't
     * specify a cluster, <code>default</code> is used.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline ListServiceDeploymentsRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline ListServiceDeploymentsRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline ListServiceDeploymentsRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filter you can use to narrow the results. If you do not specify a
     * status, then all status values are included in the result.</p>
     */
    inline const Aws::Vector<ServiceDeploymentStatus>& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::Vector<ServiceDeploymentStatus>& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::Vector<ServiceDeploymentStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListServiceDeploymentsRequest& WithStatus(const Aws::Vector<ServiceDeploymentStatus>& value) { SetStatus(value); return *this;}
    inline ListServiceDeploymentsRequest& WithStatus(Aws::Vector<ServiceDeploymentStatus>&& value) { SetStatus(std::move(value)); return *this;}
    inline ListServiceDeploymentsRequest& AddStatus(const ServiceDeploymentStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    inline ListServiceDeploymentsRequest& AddStatus(ServiceDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional filter you can use to narrow the results by the service creation
     * date. If you do not specify a value, the result includes all services created
     * before the current time. The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const CreatedAt& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const CreatedAt& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(CreatedAt&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListServiceDeploymentsRequest& WithCreatedAt(const CreatedAt& value) { SetCreatedAt(value); return *this;}
    inline ListServiceDeploymentsRequest& WithCreatedAt(CreatedAt&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListServiceDeployments</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If you provided
     * <code>maxResults</code>, it's possible the number of results is fewer than
     * <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServiceDeploymentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceDeploymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of service deployment results that
     * <code>ListServiceDeployments</code> returned in paginated output. When this
     * parameter is used, <code>ListServiceDeployments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServiceDeployments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListServiceDeployments</code> returns up to 20 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceDeploymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<ServiceDeploymentStatus> m_status;
    bool m_statusHasBeenSet = false;

    CreatedAt m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
