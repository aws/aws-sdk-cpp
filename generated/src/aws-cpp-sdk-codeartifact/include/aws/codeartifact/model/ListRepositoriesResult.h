﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/RepositorySummary.h>
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
namespace CodeArtifact
{
namespace Model
{
  class ListRepositoriesResult
  {
  public:
    AWS_CODEARTIFACT_API ListRepositoriesResult();
    AWS_CODEARTIFACT_API ListRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">RepositorySummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<RepositorySummary>& GetRepositories() const{ return m_repositories; }
    inline void SetRepositories(const Aws::Vector<RepositorySummary>& value) { m_repositories = value; }
    inline void SetRepositories(Aws::Vector<RepositorySummary>&& value) { m_repositories = std::move(value); }
    inline ListRepositoriesResult& WithRepositories(const Aws::Vector<RepositorySummary>& value) { SetRepositories(value); return *this;}
    inline ListRepositoriesResult& WithRepositories(Aws::Vector<RepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}
    inline ListRepositoriesResult& AddRepositories(const RepositorySummary& value) { m_repositories.push_back(value); return *this; }
    inline ListRepositoriesResult& AddRepositories(RepositorySummary&& value) { m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRepositoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRepositoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRepositoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RepositorySummary> m_repositories;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
