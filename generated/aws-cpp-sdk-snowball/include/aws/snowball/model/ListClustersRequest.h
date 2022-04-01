﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_SNOWBALL_API ListClustersRequest : public SnowballRequest
  {
  public:
    ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The number of <code>ClusterListEntry</code> objects to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of <code>ClusterListEntry</code> objects to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of <code>ClusterListEntry</code> objects to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of <code>ClusterListEntry</code> objects to return.</p>
     */
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ClusterListEntry</code> objects, you have the option of specifying
     * <code>NextToken</code> as the starting point for your returned list.</p>
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
