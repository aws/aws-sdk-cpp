/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ContainerInstanceStatus.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListContainerInstancesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListContainerInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainerInstances"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline ListContainerInstancesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline ListContainerInstancesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline ListContainerInstancesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(const char* value) { SetFilter(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListContainerInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListContainerInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListContainerInstances</code> request indicating that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListContainerInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of container instance results that
     * <code>ListContainerInstances</code> returned in paginated output. When this
     * parameter is used, <code>ListContainerInstances</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListContainerInstances</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListContainerInstances</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of container instance results that
     * <code>ListContainerInstances</code> returned in paginated output. When this
     * parameter is used, <code>ListContainerInstances</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListContainerInstances</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListContainerInstances</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of container instance results that
     * <code>ListContainerInstances</code> returned in paginated output. When this
     * parameter is used, <code>ListContainerInstances</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListContainerInstances</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListContainerInstances</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of container instance results that
     * <code>ListContainerInstances</code> returned in paginated output. When this
     * parameter is used, <code>ListContainerInstances</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListContainerInstances</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListContainerInstances</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline ListContainerInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline const ContainerInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const ContainerInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(ContainerInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline ListContainerInstancesRequest& WithStatus(const ContainerInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Filters the container instances by status. For example, if you specify the
     * <code>DRAINING</code> status, the results include only container instances that
     * have been set to <code>DRAINING</code> using
     * <a>UpdateContainerInstancesState</a>. If you don't specify this parameter, the
     * default is to include container instances set to all states other than
     * <code>INACTIVE</code>.</p>
     */
    inline ListContainerInstancesRequest& WithStatus(ContainerInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ContainerInstanceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
