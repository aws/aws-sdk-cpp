/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerPropagationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the route propagation configuration between a route server and a
   * route table.</p> <p>When enabled, route server propagation installs the routes
   * in the FIB on the route table you've specified. Route server supports IPv4 and
   * IPv6 route propagation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerPropagation">AWS
   * API Reference</a></p>
   */
  class RouteServerPropagation
  {
  public:
    AWS_EC2_API RouteServerPropagation() = default;
    AWS_EC2_API RouteServerPropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerPropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the route server configured for route propagation.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    RouteServerPropagation& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table configured for route server propagation.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    RouteServerPropagation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of route propagation.</p>
     */
    inline RouteServerPropagationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteServerPropagationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteServerPropagation& WithState(RouteServerPropagationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    RouteServerPropagationState m_state{RouteServerPropagationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
