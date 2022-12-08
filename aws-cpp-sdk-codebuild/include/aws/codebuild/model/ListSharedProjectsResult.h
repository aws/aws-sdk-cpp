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
  class ListSharedProjectsResult
  {
  public:
    AWS_CODEBUILD_API ListSharedProjectsResult();
    AWS_CODEBUILD_API ListSharedProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListSharedProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSharedProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProjects() const{ return m_projects; }

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline void SetProjects(const Aws::Vector<Aws::String>& value) { m_projects = value; }

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline void SetProjects(Aws::Vector<Aws::String>&& value) { m_projects = std::move(value); }

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedProjectsResult& WithProjects(const Aws::Vector<Aws::String>& value) { SetProjects(value); return *this;}

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedProjectsResult& WithProjects(Aws::Vector<Aws::String>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedProjectsResult& AddProjects(const Aws::String& value) { m_projects.push_back(value); return *this; }

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedProjectsResult& AddProjects(Aws::String&& value) { m_projects.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of ARNs for the build projects shared with the current Amazon Web
     * Services account or user. </p>
     */
    inline ListSharedProjectsResult& AddProjects(const char* value) { m_projects.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_projects;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
