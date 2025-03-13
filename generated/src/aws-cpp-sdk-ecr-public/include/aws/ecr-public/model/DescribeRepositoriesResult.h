/**
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
  class DescribeRepositoriesResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeRepositoriesResult() = default;
    AWS_ECRPUBLIC_API DescribeRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repository objects corresponding to valid repositories.</p>
     */
    inline const Aws::Vector<Repository>& GetRepositories() const { return m_repositories; }
    template<typename RepositoriesT = Aws::Vector<Repository>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<Repository>>
    DescribeRepositoriesResult& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = Repository>
    DescribeRepositoriesResult& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. When the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. If there are no more
     * results to return, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRepositoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRepositoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Repository> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
