/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/KeyspaceSummary.h>
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
namespace Keyspaces
{
namespace Model
{
  class ListKeyspacesResult
  {
  public:
    AWS_KEYSPACES_API ListKeyspacesResult() = default;
    AWS_KEYSPACES_API ListKeyspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API ListKeyspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKeyspacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of keyspaces.</p>
     */
    inline const Aws::Vector<KeyspaceSummary>& GetKeyspaces() const { return m_keyspaces; }
    template<typename KeyspacesT = Aws::Vector<KeyspaceSummary>>
    void SetKeyspaces(KeyspacesT&& value) { m_keyspacesHasBeenSet = true; m_keyspaces = std::forward<KeyspacesT>(value); }
    template<typename KeyspacesT = Aws::Vector<KeyspaceSummary>>
    ListKeyspacesResult& WithKeyspaces(KeyspacesT&& value) { SetKeyspaces(std::forward<KeyspacesT>(value)); return *this;}
    template<typename KeyspacesT = KeyspaceSummary>
    ListKeyspacesResult& AddKeyspaces(KeyspacesT&& value) { m_keyspacesHasBeenSet = true; m_keyspaces.emplace_back(std::forward<KeyspacesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKeyspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<KeyspaceSummary> m_keyspaces;
    bool m_keyspacesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
