/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_EKS_API ListClustersRequest : public EKSRequest
  {
  public:
    ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListClusters</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
