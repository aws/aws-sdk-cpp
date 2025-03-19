/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
  class GetRepositoryEndpointResult
  {
  public:
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult() = default;
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline const Aws::String& GetRepositoryEndpoint() const { return m_repositoryEndpoint; }
    template<typename RepositoryEndpointT = Aws::String>
    void SetRepositoryEndpoint(RepositoryEndpointT&& value) { m_repositoryEndpointHasBeenSet = true; m_repositoryEndpoint = std::forward<RepositoryEndpointT>(value); }
    template<typename RepositoryEndpointT = Aws::String>
    GetRepositoryEndpointResult& WithRepositoryEndpoint(RepositoryEndpointT&& value) { SetRepositoryEndpoint(std::forward<RepositoryEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositoryEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryEndpoint;
    bool m_repositoryEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
