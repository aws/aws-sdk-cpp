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
  class ListClustersRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListClusters</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of cluster results that <code>ListClusters</code> returned
     * in paginated output. When this parameter is used, <code>ListClusters</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results that <code>ListClusters</code> returned
     * in paginated output. When this parameter is used, <code>ListClusters</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results that <code>ListClusters</code> returned
     * in paginated output. When this parameter is used, <code>ListClusters</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results that <code>ListClusters</code> returned
     * in paginated output. When this parameter is used, <code>ListClusters</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListClusters</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListClusters</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
