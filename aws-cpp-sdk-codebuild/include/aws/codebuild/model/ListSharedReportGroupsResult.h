/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListSharedReportGroupsResult
  {
  public:
    AWS_CODEBUILD_API ListSharedReportGroupsResult();
    AWS_CODEBUILD_API ListSharedReportGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListSharedReportGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroups() const{ return m_reportGroups; }

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline void SetReportGroups(const Aws::Vector<Aws::String>& value) { m_reportGroups = value; }

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline void SetReportGroups(Aws::Vector<Aws::String>&& value) { m_reportGroups = std::move(value); }

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedReportGroupsResult& WithReportGroups(const Aws::Vector<Aws::String>& value) { SetReportGroups(value); return *this;}

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedReportGroupsResult& WithReportGroups(Aws::Vector<Aws::String>&& value) { SetReportGroups(std::move(value)); return *this;}

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedReportGroupsResult& AddReportGroups(const Aws::String& value) { m_reportGroups.push_back(value); return *this; }

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedReportGroupsResult& AddReportGroups(Aws::String&& value) { m_reportGroups.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of ARNs for the report groups shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedReportGroupsResult& AddReportGroups(const char* value) { m_reportGroups.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_reportGroups;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
