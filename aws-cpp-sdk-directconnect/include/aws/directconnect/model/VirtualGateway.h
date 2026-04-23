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
  class AWS_DIRECTCONNECT_API VirtualGateway
  {
  public:
    VirtualGateway();
    VirtualGateway(Aws::Utils::Json::JsonView jsonValue);
    VirtualGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VirtualGateway& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VirtualGateway& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VirtualGateway& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline const Aws::String& GetVirtualGatewayState() const{ return m_virtualGatewayState; }

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline bool VirtualGatewayStateHasBeenSet() const { return m_virtualGatewayStateHasBeenSet; }

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline void SetVirtualGatewayState(const Aws::String& value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState = value; }

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline void SetVirtualGatewayState(Aws::String&& value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState = std::move(value); }

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline void SetVirtualGatewayState(const char* value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState.assign(value); }

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline VirtualGateway& WithVirtualGatewayState(const Aws::String& value) { SetVirtualGatewayState(value); return *this;}

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline VirtualGateway& WithVirtualGatewayState(Aws::String&& value) { SetVirtualGatewayState(std::move(value)); return *this;}

    /**
     * <p>The state of the virtual private gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: Initial state after creating the
     * virtual private gateway.</p> </li> <li> <p> <code>available</code>: Ready for
     * use by a private virtual interface.</p> </li> <li> <p> <code>deleting</code>:
     * Initial state after deleting the virtual private gateway.</p> </li> <li> <p>
     * <code>deleted</code>: The virtual private gateway is deleted. The private
     * virtual interface is unable to send traffic over this gateway.</p> </li> </ul>
     */
    inline VirtualGateway& WithVirtualGatewayState(const char* value) { SetVirtualGatewayState(value); return *this;}

  private:

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayState;
    bool m_virtualGatewayStateHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
