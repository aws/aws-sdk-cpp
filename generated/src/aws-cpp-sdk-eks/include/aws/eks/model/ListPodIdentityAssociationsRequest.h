/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class ListPodIdentityAssociationsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API ListPodIdentityAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPodIdentityAssociations"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster that the associations are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The name of the Kubernetes namespace inside the cluster that the associations
     * are in.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline const Aws::String& GetServiceAccount() const{ return m_serviceAccount; }

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline void SetServiceAccount(const Aws::String& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = value; }

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline void SetServiceAccount(Aws::String&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::move(value); }

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline void SetServiceAccount(const char* value) { m_serviceAccountHasBeenSet = true; m_serviceAccount.assign(value); }

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the Kubernetes service account that the associations use.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}


    /**
     * <p>The maximum number of EKS Pod Identity association results returned by
     * <code>ListPodIdentityAssociations</code> in paginated output. When you use this
     * parameter, <code>ListPodIdentityAssociations</code> returns only
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListPodIdentityAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If you don't use this parameter,
     * <code>ListPodIdentityAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of EKS Pod Identity association results returned by
     * <code>ListPodIdentityAssociations</code> in paginated output. When you use this
     * parameter, <code>ListPodIdentityAssociations</code> returns only
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListPodIdentityAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If you don't use this parameter,
     * <code>ListPodIdentityAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of EKS Pod Identity association results returned by
     * <code>ListPodIdentityAssociations</code> in paginated output. When you use this
     * parameter, <code>ListPodIdentityAssociations</code> returns only
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListPodIdentityAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If you don't use this parameter,
     * <code>ListPodIdentityAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of EKS Pod Identity association results returned by
     * <code>ListPodIdentityAssociations</code> in paginated output. When you use this
     * parameter, <code>ListPodIdentityAssociations</code> returns only
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListPodIdentityAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If you don't use this parameter,
     * <code>ListPodIdentityAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline ListPodIdentityAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListPodIdentityAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListPodIdentityAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListUpdates</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListPodIdentityAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
