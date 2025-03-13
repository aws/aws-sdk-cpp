/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedConnector.h>
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
  class ListConnectorsResult
  {
  public:
    AWS_TRANSFER_API ListConnectorsResult() = default;
    AWS_TRANSFER_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline const Aws::Vector<ListedConnector>& GetConnectors() const { return m_connectors; }
    template<typename ConnectorsT = Aws::Vector<ListedConnector>>
    void SetConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors = std::forward<ConnectorsT>(value); }
    template<typename ConnectorsT = Aws::Vector<ListedConnector>>
    ListConnectorsResult& WithConnectors(ConnectorsT&& value) { SetConnectors(std::forward<ConnectorsT>(value)); return *this;}
    template<typename ConnectorsT = ListedConnector>
    ListConnectorsResult& AddConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors.emplace_back(std::forward<ConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListedConnector> m_connectors;
    bool m_connectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
