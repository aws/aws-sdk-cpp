/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListClustersRequest : public EKSRequest
  {
  public:
    AWS_EKS_API ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of cluster results returned by <code>ListClusters</code>
     * in paginated output. When you use this parameter, <code>ListClusters</code>
     * returns only <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If you don't use this parameter, <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListClusters</code>
     * in paginated output. When you use this parameter, <code>ListClusters</code>
     * returns only <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If you don't use this parameter, <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListClusters</code>
     * in paginated output. When you use this parameter, <code>ListClusters</code>
     * returns only <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If you don't use this parameter, <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListClusters</code>
     * in paginated output. When you use this parameter, <code>ListClusters</code>
     * returns only <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If you don't use this parameter, <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const{ return m_include; }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline void SetInclude(const Aws::Vector<Aws::String>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline void SetInclude(Aws::Vector<Aws::String>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline ListClustersRequest& WithInclude(const Aws::Vector<Aws::String>& value) { SetInclude(value); return *this;}

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline ListClustersRequest& WithInclude(Aws::Vector<Aws::String>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline ListClustersRequest& AddInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline ListClustersRequest& AddInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return connected clusters, or blank to return only Amazon
     * EKS clusters. '<code>all</code>' must be in lowercase otherwise an error
     * occurs.</p>
     */
    inline ListClustersRequest& AddInclude(const char* value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
