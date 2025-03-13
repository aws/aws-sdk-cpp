/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/Host.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class ListHostsResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListHostsResult() = default;
    AWS_CODESTARCONNECTIONS_API ListHostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListHostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline const Aws::Vector<Host>& GetHosts() const { return m_hosts; }
    template<typename HostsT = Aws::Vector<Host>>
    void SetHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts = std::forward<HostsT>(value); }
    template<typename HostsT = Aws::Vector<Host>>
    ListHostsResult& WithHosts(HostsT&& value) { SetHosts(std::forward<HostsT>(value)); return *this;}
    template<typename HostsT = Host>
    ListHostsResult& AddHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts.emplace_back(std::forward<HostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHostsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHostsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Host> m_hosts;
    bool m_hostsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
