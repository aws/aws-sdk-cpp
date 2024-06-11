/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/Repository.h>
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
namespace ECR
{
namespace Model
{
  class DescribeRepositoriesResult
  {
  public:
    AWS_ECR_API DescribeRepositoriesResult();
    AWS_ECR_API DescribeRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline const Aws::Vector<Repository>& GetRepositories() const{ return m_repositories; }
    inline void SetRepositories(const Aws::Vector<Repository>& value) { m_repositories = value; }
    inline void SetRepositories(Aws::Vector<Repository>&& value) { m_repositories = std::move(value); }
    inline DescribeRepositoriesResult& WithRepositories(const Aws::Vector<Repository>& value) { SetRepositories(value); return *this;}
    inline DescribeRepositoriesResult& WithRepositories(Aws::Vector<Repository>&& value) { SetRepositories(std::move(value)); return *this;}
    inline DescribeRepositoriesResult& AddRepositories(const Repository& value) { m_repositories.push_back(value); return *this; }
    inline DescribeRepositoriesResult& AddRepositories(Repository&& value) { m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRepositoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRepositoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRepositoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Repository> m_repositories;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
