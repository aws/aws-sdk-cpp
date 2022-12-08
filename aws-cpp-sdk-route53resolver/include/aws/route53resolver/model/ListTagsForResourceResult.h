/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListTagsForResourceResult();
    AWS_ROUTE53RESOLVER_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that are associated with the resource that you specified in the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> tags match the specified criteria, you
     * can submit another <code>ListTagsForResource</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
