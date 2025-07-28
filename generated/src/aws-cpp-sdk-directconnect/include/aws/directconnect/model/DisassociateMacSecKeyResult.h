/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/MacSecKey.h>
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
  class DisassociateMacSecKeyResult
  {
  public:
    AWS_DIRECTCONNECT_API DisassociateMacSecKeyResult() = default;
    AWS_DIRECTCONNECT_API DisassociateMacSecKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DisassociateMacSecKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), interconnect (dxcon-xxxx),
     * or LAG (dxlag-xxxx).</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    DisassociateMacSecKeyResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) security keys no longer associated with the
     * connection.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const { return m_macSecKeys; }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    void SetMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys = std::forward<MacSecKeysT>(value); }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    DisassociateMacSecKeyResult& WithMacSecKeys(MacSecKeysT&& value) { SetMacSecKeys(std::forward<MacSecKeysT>(value)); return *this;}
    template<typename MacSecKeysT = MacSecKey>
    DisassociateMacSecKeyResult& AddMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys.emplace_back(std::forward<MacSecKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateMacSecKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::Vector<MacSecKey> m_macSecKeys;
    bool m_macSecKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
