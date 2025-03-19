/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/RepositorySyncDefinition.h>
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
  class ListRepositorySyncDefinitionsResult
  {
  public:
    AWS_CODECONNECTIONS_API ListRepositorySyncDefinitionsResult() = default;
    AWS_CODECONNECTIONS_API ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListRepositorySyncDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline const Aws::Vector<RepositorySyncDefinition>& GetRepositorySyncDefinitions() const { return m_repositorySyncDefinitions; }
    template<typename RepositorySyncDefinitionsT = Aws::Vector<RepositorySyncDefinition>>
    void SetRepositorySyncDefinitions(RepositorySyncDefinitionsT&& value) { m_repositorySyncDefinitionsHasBeenSet = true; m_repositorySyncDefinitions = std::forward<RepositorySyncDefinitionsT>(value); }
    template<typename RepositorySyncDefinitionsT = Aws::Vector<RepositorySyncDefinition>>
    ListRepositorySyncDefinitionsResult& WithRepositorySyncDefinitions(RepositorySyncDefinitionsT&& value) { SetRepositorySyncDefinitions(std::forward<RepositorySyncDefinitionsT>(value)); return *this;}
    template<typename RepositorySyncDefinitionsT = RepositorySyncDefinition>
    ListRepositorySyncDefinitionsResult& AddRepositorySyncDefinitions(RepositorySyncDefinitionsT&& value) { m_repositorySyncDefinitionsHasBeenSet = true; m_repositorySyncDefinitions.emplace_back(std::forward<RepositorySyncDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositorySyncDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositorySyncDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositorySyncDefinition> m_repositorySyncDefinitions;
    bool m_repositorySyncDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
