/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
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
  class AWS_DIRECTCONNECT_API ConfirmTransitVirtualInterfaceResult
  {
  public:
    ConfirmTransitVirtualInterfaceResult();
    ConfirmTransitVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ConfirmTransitVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }

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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = std::move(value); }

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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline ConfirmTransitVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline ConfirmTransitVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(std::move(value)); return *this;}

  private:

    VirtualInterfaceState m_virtualInterfaceState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
