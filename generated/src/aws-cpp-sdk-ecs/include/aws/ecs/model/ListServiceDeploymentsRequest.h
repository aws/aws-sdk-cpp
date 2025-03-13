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
    AWS_ECS_API ListServiceDeploymentsRequest() = default;

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
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    ListServiceDeploymentsRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster that hosts the service. This can either be the cluster name or
     * ARN. Starting April 15, 2023, Amazon Web Services will not onboard new customers
     * to Amazon Elastic Inference (EI), and will help current customers migrate their
     * workloads to options that offer better price and performance. If you don't
     * specify a cluster, <code>default</code> is used.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    ListServiceDeploymentsRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filter you can use to narrow the results. If you do not specify a
     * status, then all status values are included in the result.</p>
     */
    inline const Aws::Vector<ServiceDeploymentStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<ServiceDeploymentStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<ServiceDeploymentStatus>>
    ListServiceDeploymentsRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline ListServiceDeploymentsRequest& AddStatus(ServiceDeploymentStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional filter you can use to narrow the results by the service creation
     * date. If you do not specify a value, the result includes all services created
     * before the current time. The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const CreatedAt& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = CreatedAt>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = CreatedAt>
    ListServiceDeploymentsRequest& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListServiceDeployments</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If you provided
     * <code>maxResults</code>, it's possible the number of results is fewer than
     * <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceDeploymentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
