/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerAssociationState.h>
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
   * <p>Describes the association between a route server and a VPC.</p> <p>A route
   * server association is the connection established between a route server and a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerAssociation">AWS
   * API Reference</a></p>
   */
  class RouteServerAssociation
  {
  public:
    AWS_EC2_API RouteServerAssociation() = default;
    AWS_EC2_API RouteServerAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the associated route server.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    RouteServerAssociation& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    RouteServerAssociation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the association.</p>
     */
    inline RouteServerAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteServerAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteServerAssociation& WithState(RouteServerAssociationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    RouteServerAssociationState m_state{RouteServerAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
