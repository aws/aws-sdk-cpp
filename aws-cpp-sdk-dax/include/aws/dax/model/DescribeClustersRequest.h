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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class AWS_DAX_API DescribeClustersRequest : public DAXRequest
  {
  public:
    DescribeClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterNames() const{ return m_clusterNames; }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline bool ClusterNamesHasBeenSet() const { return m_clusterNamesHasBeenSet; }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline void SetClusterNames(const Aws::Vector<Aws::String>& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = value; }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline void SetClusterNames(Aws::Vector<Aws::String>&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = std::move(value); }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline DescribeClustersRequest& WithClusterNames(const Aws::Vector<Aws::String>& value) { SetClusterNames(value); return *this;}

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline DescribeClustersRequest& WithClusterNames(Aws::Vector<Aws::String>&& value) { SetClusterNames(std::move(value)); return *this;}

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline DescribeClustersRequest& AddClusterNames(const Aws::String& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline DescribeClustersRequest& AddClusterNames(Aws::String&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the DAX clusters being described.</p>
     */
    inline DescribeClustersRequest& AddClusterNames(const char* value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline DescribeClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline DescribeClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline DescribeClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline DescribeClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_clusterNames;
    bool m_clusterNamesHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
