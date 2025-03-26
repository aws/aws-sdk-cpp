/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteVirtualInterfaceResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteVirtualInterfaceResult() = default;
    AWS_DIRECTCONNECT_API DeleteVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>testing</code>: A
     * virtual interface is in this state immediately after calling
     * <a>StartBgpFailoverTest</a> and remains in this state during the duration of the
     * test.</p> </li> <li> <p> <code>deleting</code>: A virtual interface is in this
     * state immediately after calling <a>DeleteVirtualInterface</a> until it can no
     * longer forward traffic.</p> </li> <li> <p> <code>deleted</code>: A virtual
     * interface that cannot forward traffic.</p> </li> <li> <p> <code>rejected</code>:
     * The virtual interface owner has declined creation of the virtual interface. If a
     * virtual interface in the <code>Confirming</code> state is deleted by the virtual
     * interface owner, the virtual interface enters the <code>Rejected</code>
     * state.</p> </li> <li> <p> <code>unknown</code>: The state of the virtual
     * interface is not available.</p> </li> </ul>
     */
    inline VirtualInterfaceState GetVirtualInterfaceState() const { return m_virtualInterfaceState; }
    inline void SetVirtualInterfaceState(VirtualInterfaceState value) { m_virtualInterfaceStateHasBeenSet = true; m_virtualInterfaceState = value; }
    inline DeleteVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState value) { SetVirtualInterfaceState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVirtualInterfaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualInterfaceState m_virtualInterfaceState{VirtualInterfaceState::NOT_SET};
    bool m_virtualInterfaceStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
