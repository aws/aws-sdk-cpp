/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Override specific listener ports used to route traffic to endpoints that are
   * part of an endpoint group. For example, you can create a port override in which
   * the listener receives user traffic on ports 80 and 443, but your accelerator
   * routes that traffic to ports 1080 and 1443, respectively, on the endpoints.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoint-groups-port-override.html">
   * Overriding listener ports</a> in the <i>Global Accelerator Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/PortOverride">AWS
   * API Reference</a></p>
   */
  class PortOverride
  {
  public:
    AWS_GLOBALACCELERATOR_API PortOverride();
    AWS_GLOBALACCELERATOR_API PortOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API PortOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The listener port that you want to map to a specific endpoint port. This is
     * the port that user traffic arrives to the Global Accelerator on.</p>
     */
    inline int GetListenerPort() const{ return m_listenerPort; }

    /**
     * <p>The listener port that you want to map to a specific endpoint port. This is
     * the port that user traffic arrives to the Global Accelerator on.</p>
     */
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }

    /**
     * <p>The listener port that you want to map to a specific endpoint port. This is
     * the port that user traffic arrives to the Global Accelerator on.</p>
     */
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }

    /**
     * <p>The listener port that you want to map to a specific endpoint port. This is
     * the port that user traffic arrives to the Global Accelerator on.</p>
     */
    inline PortOverride& WithListenerPort(int value) { SetListenerPort(value); return *this;}


    /**
     * <p>The endpoint port that you want a listener port to be mapped to. This is the
     * port on the endpoint, such as the Application Load Balancer or Amazon EC2
     * instance.</p>
     */
    inline int GetEndpointPort() const{ return m_endpointPort; }

    /**
     * <p>The endpoint port that you want a listener port to be mapped to. This is the
     * port on the endpoint, such as the Application Load Balancer or Amazon EC2
     * instance.</p>
     */
    inline bool EndpointPortHasBeenSet() const { return m_endpointPortHasBeenSet; }

    /**
     * <p>The endpoint port that you want a listener port to be mapped to. This is the
     * port on the endpoint, such as the Application Load Balancer or Amazon EC2
     * instance.</p>
     */
    inline void SetEndpointPort(int value) { m_endpointPortHasBeenSet = true; m_endpointPort = value; }

    /**
     * <p>The endpoint port that you want a listener port to be mapped to. This is the
     * port on the endpoint, such as the Application Load Balancer or Amazon EC2
     * instance.</p>
     */
    inline PortOverride& WithEndpointPort(int value) { SetEndpointPort(value); return *this;}

  private:

    int m_listenerPort;
    bool m_listenerPortHasBeenSet = false;

    int m_endpointPort;
    bool m_endpointPortHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
