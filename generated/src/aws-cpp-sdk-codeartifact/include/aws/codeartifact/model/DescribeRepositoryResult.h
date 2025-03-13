/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/RepositoryDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeRepositoryResult
  {
  public:
    AWS_CODEARTIFACT_API DescribeRepositoryResult() = default;
    AWS_CODEARTIFACT_API DescribeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DescribeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline const RepositoryDescription& GetRepository() const { return m_repository; }
    template<typename RepositoryT = RepositoryDescription>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = RepositoryDescription>
    DescribeRepositoryResult& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRepositoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryDescription m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
