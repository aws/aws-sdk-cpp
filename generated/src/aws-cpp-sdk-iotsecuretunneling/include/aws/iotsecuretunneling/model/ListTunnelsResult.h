/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsecuretunneling/model/TunnelSummary.h>
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
namespace IoTSecureTunneling
{
namespace Model
{
  class ListTunnelsResult
  {
  public:
    AWS_IOTSECURETUNNELING_API ListTunnelsResult() = default;
    AWS_IOTSECURETUNNELING_API ListTunnelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API ListTunnelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A short description of the tunnels in an Amazon Web Services account.</p>
     */
    inline const Aws::Vector<TunnelSummary>& GetTunnelSummaries() const { return m_tunnelSummaries; }
    template<typename TunnelSummariesT = Aws::Vector<TunnelSummary>>
    void SetTunnelSummaries(TunnelSummariesT&& value) { m_tunnelSummariesHasBeenSet = true; m_tunnelSummaries = std::forward<TunnelSummariesT>(value); }
    template<typename TunnelSummariesT = Aws::Vector<TunnelSummary>>
    ListTunnelsResult& WithTunnelSummaries(TunnelSummariesT&& value) { SetTunnelSummaries(std::forward<TunnelSummariesT>(value)); return *this;}
    template<typename TunnelSummariesT = TunnelSummary>
    ListTunnelsResult& AddTunnelSummaries(TunnelSummariesT&& value) { m_tunnelSummariesHasBeenSet = true; m_tunnelSummaries.emplace_back(std::forward<TunnelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTunnelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTunnelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TunnelSummary> m_tunnelSummaries;
    bool m_tunnelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
