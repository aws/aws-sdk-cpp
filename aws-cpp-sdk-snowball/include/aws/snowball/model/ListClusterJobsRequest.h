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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API ListClusterJobsRequest : public SnowballRequest
  {
  public:
    ListClusterJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ListClusterJobsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ListClusterJobsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ListClusterJobsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The number of <code>JobListEntry</code> objects to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of <code>JobListEntry</code> objects to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of <code>JobListEntry</code> objects to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of <code>JobListEntry</code> objects to return.</p>
     */
    inline ListClusterJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClusterJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClusterJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>JobListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClusterJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
