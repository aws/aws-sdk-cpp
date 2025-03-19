/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedAccess.h>
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
namespace Transfer
{
namespace Model
{
  class ListAccessesResult
  {
  public:
    AWS_TRANSFER_API ListAccessesResult() = default;
    AWS_TRANSFER_API ListAccessesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListAccessesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you can get additional results from the <code>ListAccesses</code> call,
     * a <code>NextToken</code> parameter is returned in the output. You can then pass
     * in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional accesses.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a server that has users assigned to
     * it.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ListAccessesResult& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the accesses and their properties for the <code>ServerId</code> value
     * that you specify.</p>
     */
    inline const Aws::Vector<ListedAccess>& GetAccesses() const { return m_accesses; }
    template<typename AccessesT = Aws::Vector<ListedAccess>>
    void SetAccesses(AccessesT&& value) { m_accessesHasBeenSet = true; m_accesses = std::forward<AccessesT>(value); }
    template<typename AccessesT = Aws::Vector<ListedAccess>>
    ListAccessesResult& WithAccesses(AccessesT&& value) { SetAccesses(std::forward<AccessesT>(value)); return *this;}
    template<typename AccessesT = ListedAccess>
    ListAccessesResult& AddAccesses(AccessesT&& value) { m_accessesHasBeenSet = true; m_accesses.emplace_back(std::forward<AccessesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::Vector<ListedAccess> m_accesses;
    bool m_accessesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
