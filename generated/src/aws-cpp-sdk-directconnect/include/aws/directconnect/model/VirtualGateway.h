/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a virtual private gateway for a private virtual
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/VirtualGateway">AWS
   * API Reference</a></p>
   */
  class VirtualGateway
  {
  public:
    AWS_DIRECTCONNECT_API VirtualGateway() = default;
    AWS_DIRECTCONNECT_API VirtualGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API VirtualGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const { return m_virtualGatewayId; }
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }
    template<typename VirtualGatewayIdT = Aws::String>
    void SetVirtualGatewayId(VirtualGatewayIdT&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::forward<VirtualGatewayIdT>(value); }
    template<typename VirtualGatewayIdT = Aws::String>
    VirtualGateway& WithVirtualGatewayId(VirtualGatewayIdT&& value) { SetVirtualGatewayId(std::forward<VirtualGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline const Aws::String& GetVirtualGatewayState() const { return m_virtualGatewayState; }
    inline bool VirtualGatewayStateHasBeenSet() const { return m_virtualGatewayStateHasBeenSet; }
    template<typename VirtualGatewayStateT = Aws::String>
    void SetVirtualGatewayState(VirtualGatewayStateT&& value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState = std::forward<VirtualGatewayStateT>(value); }
    template<typename VirtualGatewayStateT = Aws::String>
    VirtualGateway& WithVirtualGatewayState(VirtualGatewayStateT&& value) { SetVirtualGatewayState(std::forward<VirtualGatewayStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet = false;

    Aws::String m_virtualGatewayState;
    bool m_virtualGatewayStateHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
