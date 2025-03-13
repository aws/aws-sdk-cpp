/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/RepositoryLinkInfo.h>
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
namespace CodeConnections
{
namespace Model
{
  class ListRepositoryLinksResult
  {
  public:
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult() = default;
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline const Aws::Vector<RepositoryLinkInfo>& GetRepositoryLinks() const { return m_repositoryLinks; }
    template<typename RepositoryLinksT = Aws::Vector<RepositoryLinkInfo>>
    void SetRepositoryLinks(RepositoryLinksT&& value) { m_repositoryLinksHasBeenSet = true; m_repositoryLinks = std::forward<RepositoryLinksT>(value); }
    template<typename RepositoryLinksT = Aws::Vector<RepositoryLinkInfo>>
    ListRepositoryLinksResult& WithRepositoryLinks(RepositoryLinksT&& value) { SetRepositoryLinks(std::forward<RepositoryLinksT>(value)); return *this;}
    template<typename RepositoryLinksT = RepositoryLinkInfo>
    ListRepositoryLinksResult& AddRepositoryLinks(RepositoryLinksT&& value) { m_repositoryLinksHasBeenSet = true; m_repositoryLinks.emplace_back(std::forward<RepositoryLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoryLinksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositoryLinksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryLinkInfo> m_repositoryLinks;
    bool m_repositoryLinksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
