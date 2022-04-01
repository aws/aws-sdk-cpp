﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/Repository.h>
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
namespace ECRPublic
{
namespace Model
{
  class AWS_ECRPUBLIC_API DescribeRepositoriesResult
  {
  public:
    DescribeRepositoriesResult();
    DescribeRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline const Aws::Vector<Repository>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline void SetRepositories(const Aws::Vector<Repository>& value) { m_repositories = value; }

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline void SetRepositories(Aws::Vector<Repository>&& value) { m_repositories = std::move(value); }

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline DescribeRepositoriesResult& WithRepositories(const Aws::Vector<Repository>& value) { SetRepositories(value); return *this;}

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline DescribeRepositoriesResult& WithRepositories(Aws::Vector<Repository>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline DescribeRepositoriesResult& AddRepositories(const Repository& value) { m_repositories.push_back(value); return *this; }

    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline DescribeRepositoriesResult& AddRepositories(Repository&& value) { m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Repository> m_repositories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
