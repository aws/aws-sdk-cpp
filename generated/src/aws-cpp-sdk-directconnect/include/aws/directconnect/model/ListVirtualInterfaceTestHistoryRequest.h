/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class ListVirtualInterfaceTestHistoryRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVirtualInterfaceTestHistory"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetTestId() const { return m_testId; }
    inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
    template<typename TestIdT = Aws::String>
    void SetTestId(TestIdT&& value) { m_testIdHasBeenSet = true; m_testId = std::forward<TestIdT>(value); }
    template<typename TestIdT = Aws::String>
    ListVirtualInterfaceTestHistoryRequest& WithTestId(TestIdT&& value) { SetTestId(std::forward<TestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface that was tested.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    ListVirtualInterfaceTestHistoryRequest& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP peers that were placed in the DOWN state during the virtual interface
     * failover test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const { return m_bgpPeers; }
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    void SetBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::forward<BgpPeersT>(value); }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    ListVirtualInterfaceTestHistoryRequest& WithBgpPeers(BgpPeersT&& value) { SetBgpPeers(std::forward<BgpPeersT>(value)); return *this;}
    template<typename BgpPeersT = Aws::String>
    ListVirtualInterfaceTestHistoryRequest& AddBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.emplace_back(std::forward<BgpPeersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ListVirtualInterfaceTestHistoryRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVirtualInterfaceTestHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualInterfaceTestHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testId;
    bool m_testIdHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
