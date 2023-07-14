﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{
  class AWS_TRANSFER_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline ListTagsForResourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline ListTagsForResourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN you specified to list the tags of.</p>
     */
    inline ListTagsForResourceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListTagsForResource</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional tags.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that are assigned to a resource, usually for the purpose of
     * grouping and searching for items. Tags are metadata that you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_nextToken;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
