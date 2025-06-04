/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/Host.h>
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
namespace EVS
{
namespace Model
{
  class ListEnvironmentHostsResult
  {
  public:
    AWS_EVS_API ListEnvironmentHostsResult() = default;
    AWS_EVS_API ListEnvironmentHostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVS_API ListEnvironmentHostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique pagination token for next page results. Make the call again using
     * this token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentHostsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of hosts in the environment.</p>
     */
    inline const Aws::Vector<Host>& GetEnvironmentHosts() const { return m_environmentHosts; }
    template<typename EnvironmentHostsT = Aws::Vector<Host>>
    void SetEnvironmentHosts(EnvironmentHostsT&& value) { m_environmentHostsHasBeenSet = true; m_environmentHosts = std::forward<EnvironmentHostsT>(value); }
    template<typename EnvironmentHostsT = Aws::Vector<Host>>
    ListEnvironmentHostsResult& WithEnvironmentHosts(EnvironmentHostsT&& value) { SetEnvironmentHosts(std::forward<EnvironmentHostsT>(value)); return *this;}
    template<typename EnvironmentHostsT = Host>
    ListEnvironmentHostsResult& AddEnvironmentHosts(EnvironmentHostsT&& value) { m_environmentHostsHasBeenSet = true; m_environmentHosts.emplace_back(std::forward<EnvironmentHostsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentHostsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Host> m_environmentHosts;
    bool m_environmentHostsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
