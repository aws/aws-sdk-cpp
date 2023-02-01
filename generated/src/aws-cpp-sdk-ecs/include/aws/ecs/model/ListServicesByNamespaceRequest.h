/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListServicesByNamespaceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListServicesByNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServicesByNamespace"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace to list the services in.</p> <p>Tasks that run in a namespace can use
     * short names to connect to services in the namespace. Tasks can connect to
     * services across all of the clusters in the namespace. Tasks connect through a
     * managed proxy container that collects logs and metrics for increased visibility.
     * Only the tasks that Amazon ECS services create are supported with Service
     * Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value that's returned from a
     * <code>ListServicesByNamespace</code> request. It indicates that more results are
     * available to fulfill the request and further calls are needed. If
     * <code>maxResults</code> is returned, it is possible the number of results is
     * less than <code>maxResults</code>.</p>
     */
    inline ListServicesByNamespaceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of service results that
     * <code>ListServicesByNamespace</code> returns in paginated output. When this
     * parameter is used, <code>ListServicesByNamespace</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServicesByNamespace</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListServicesByNamespace</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of service results that
     * <code>ListServicesByNamespace</code> returns in paginated output. When this
     * parameter is used, <code>ListServicesByNamespace</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServicesByNamespace</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListServicesByNamespace</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of service results that
     * <code>ListServicesByNamespace</code> returns in paginated output. When this
     * parameter is used, <code>ListServicesByNamespace</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServicesByNamespace</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListServicesByNamespace</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of service results that
     * <code>ListServicesByNamespace</code> returns in paginated output. When this
     * parameter is used, <code>ListServicesByNamespace</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServicesByNamespace</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListServicesByNamespace</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline ListServicesByNamespaceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
