/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class ListTagsRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API ListTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ListTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ListTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are getting. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ListTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline ListTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline ListTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more tags.</p>
     */
    inline ListTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of tags to return in the response. When there are more
     * tags than the number you specify, the response contains a <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tags to return in the response. When there are more
     * tags than the number you specify, the response contains a <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tags to return in the response. When there are more
     * tags than the number you specify, the response contains a <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tags to return in the response. When there are more
     * tags than the number you specify, the response contains a <code>NextToken</code>
     * value.</p>
     */
    inline ListTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
