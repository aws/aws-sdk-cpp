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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribePublicIpv4PoolsRequest : public EC2Request
  {
  public:
    DescribePublicIpv4PoolsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePublicIpv4Pools"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolIds() const{ return m_poolIds; }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline bool PoolIdsHasBeenSet() const { return m_poolIdsHasBeenSet; }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline void SetPoolIds(const Aws::Vector<Aws::String>& value) { m_poolIdsHasBeenSet = true; m_poolIds = value; }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline void SetPoolIds(Aws::Vector<Aws::String>&& value) { m_poolIdsHasBeenSet = true; m_poolIds = std::move(value); }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithPoolIds(const Aws::Vector<Aws::String>& value) { SetPoolIds(value); return *this;}

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithPoolIds(Aws::Vector<Aws::String>&& value) { SetPoolIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline DescribePublicIpv4PoolsRequest& AddPoolIds(const Aws::String& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline DescribePublicIpv4PoolsRequest& AddPoolIds(Aws::String&& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the address pools.</p>
     */
    inline DescribePublicIpv4PoolsRequest& AddPoolIds(const char* value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribePublicIpv4PoolsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_poolIds;
    bool m_poolIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
