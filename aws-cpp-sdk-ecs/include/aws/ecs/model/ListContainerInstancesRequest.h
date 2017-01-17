﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API ListContainerInstancesRequest : public ECSRequest
  {
  public:
    ListContainerInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

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
    inline ListContainerInstancesRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to list. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline ListContainerInstancesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(Aws::String&& value) { SetFilter(value); return *this;}

    /**
     * <p>You can filter the results of a <code>ListContainerInstances</code> operation
     * with cluster query language statements. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline ListContainerInstancesRequest& WithFilter(const char* value) { SetFilter(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListContainerInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListContainerInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListContainerInstances</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListContainerInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of container instance results returned by
     * <code>ListContainerInstances</code> in paginated output. When this parameter is
     * used, <code>ListContainerInstances</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListContainerInstances</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListContainerInstances</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of container instance results returned by
     * <code>ListContainerInstances</code> in paginated output. When this parameter is
     * used, <code>ListContainerInstances</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListContainerInstances</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListContainerInstances</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of container instance results returned by
     * <code>ListContainerInstances</code> in paginated output. When this parameter is
     * used, <code>ListContainerInstances</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListContainerInstances</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListContainerInstances</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListContainerInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_filter;
    bool m_filterHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
