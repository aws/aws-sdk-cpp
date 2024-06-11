﻿/**
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


    ///@{
    /**
     * <p>The maximum number of results, returned in paginated output. You receive
     * <code>maxResults</code> in a single page, along with a <code>nextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another request with the returned <code>nextToken</code> value. This
     * value can be between 1 and 100. If you don't use this parameter, 100 results and
     * a <code>nextToken</code> value, if applicable, are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether external clusters are included in the returned list. Use
     * '<code>all</code>' to return <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-connector.html">https://docs.aws.amazon.com/eks/latest/userguide/eks-connector.html</a>connected
     * clusters, or blank to return only Amazon EKS clusters. '<code>all</code>' must
     * be in lowercase otherwise an error occurs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::Vector<Aws::String>& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::Vector<Aws::String>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline ListClustersRequest& WithInclude(const Aws::Vector<Aws::String>& value) { SetInclude(value); return *this;}
    inline ListClustersRequest& WithInclude(Aws::Vector<Aws::String>&& value) { SetInclude(std::move(value)); return *this;}
    inline ListClustersRequest& AddInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    inline ListClustersRequest& AddInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }
    inline ListClustersRequest& AddInclude(const char* value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}
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
