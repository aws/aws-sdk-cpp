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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API ListTagsForResourceRequest : public Route53ResolverRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to list tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The maximum number of tags that you want to return in the response to a
     * <code>ListTagsForResource</code> request. If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 tags.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tags that you want to return in the response to a
     * <code>ListTagsForResource</code> request. If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 tags.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tags that you want to return in the response to a
     * <code>ListTagsForResource</code> request. If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 tags.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tags that you want to return in the response to a
     * <code>ListTagsForResource</code> request. If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 tags.</p>
     */
    inline ListTagsForResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListTagsForResource</code> request, omit this value.</p>
     * <p>If you have more than <code>MaxResults</code> tags, you can submit another
     * <code>ListTagsForResource</code> request to get the next group of tags for the
     * resource. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
