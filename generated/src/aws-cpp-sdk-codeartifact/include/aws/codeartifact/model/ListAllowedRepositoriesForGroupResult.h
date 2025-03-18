/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListAllowedRepositoriesForGroupResult
  {
  public:
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult() = default;
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedRepositories() const { return m_allowedRepositories; }
    template<typename AllowedRepositoriesT = Aws::Vector<Aws::String>>
    void SetAllowedRepositories(AllowedRepositoriesT&& value) { m_allowedRepositoriesHasBeenSet = true; m_allowedRepositories = std::forward<AllowedRepositoriesT>(value); }
    template<typename AllowedRepositoriesT = Aws::Vector<Aws::String>>
    ListAllowedRepositoriesForGroupResult& WithAllowedRepositories(AllowedRepositoriesT&& value) { SetAllowedRepositories(std::forward<AllowedRepositoriesT>(value)); return *this;}
    template<typename AllowedRepositoriesT = Aws::String>
    ListAllowedRepositoriesForGroupResult& AddAllowedRepositories(AllowedRepositoriesT&& value) { m_allowedRepositoriesHasBeenSet = true; m_allowedRepositories.emplace_back(std::forward<AllowedRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAllowedRepositoriesForGroupResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAllowedRepositoriesForGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedRepositories;
    bool m_allowedRepositoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
