/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
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
namespace DirectConnect
{
namespace Model
{
  class ListVirtualInterfaceTestHistoryResult
  {
  public:
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult() = default;
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline const Aws::Vector<VirtualInterfaceTestHistory>& GetVirtualInterfaceTestHistory() const { return m_virtualInterfaceTestHistory; }
    template<typename VirtualInterfaceTestHistoryT = Aws::Vector<VirtualInterfaceTestHistory>>
    void SetVirtualInterfaceTestHistory(VirtualInterfaceTestHistoryT&& value) { m_virtualInterfaceTestHistoryHasBeenSet = true; m_virtualInterfaceTestHistory = std::forward<VirtualInterfaceTestHistoryT>(value); }
    template<typename VirtualInterfaceTestHistoryT = Aws::Vector<VirtualInterfaceTestHistory>>
    ListVirtualInterfaceTestHistoryResult& WithVirtualInterfaceTestHistory(VirtualInterfaceTestHistoryT&& value) { SetVirtualInterfaceTestHistory(std::forward<VirtualInterfaceTestHistoryT>(value)); return *this;}
    template<typename VirtualInterfaceTestHistoryT = VirtualInterfaceTestHistory>
    ListVirtualInterfaceTestHistoryResult& AddVirtualInterfaceTestHistory(VirtualInterfaceTestHistoryT&& value) { m_virtualInterfaceTestHistoryHasBeenSet = true; m_virtualInterfaceTestHistory.emplace_back(std::forward<VirtualInterfaceTestHistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualInterfaceTestHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualInterfaceTestHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualInterfaceTestHistory> m_virtualInterfaceTestHistory;
    bool m_virtualInterfaceTestHistoryHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
