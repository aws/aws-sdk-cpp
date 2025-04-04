/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerEndpointState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a route server endpoint and its properties.</p> <p>A route server
   * endpoint is an Amazon Web Services-managed component inside a subnet that
   * facilitates <a href="https://en.wikipedia.org/wiki/Border_Gateway_Protocol">BGP
   * (Border Gateway Protocol)</a> connections between your route server and your BGP
   * peers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerEndpoint">AWS
   * API Reference</a></p>
   */
  class RouteServerEndpoint
  {
  public:
    AWS_EC2_API RouteServerEndpoint() = default;
    AWS_EC2_API RouteServerEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the route server associated with this endpoint.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    RouteServerEndpoint& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the route server endpoint.</p>
     */
    inline const Aws::String& GetRouteServerEndpointId() const { return m_routeServerEndpointId; }
    inline bool RouteServerEndpointIdHasBeenSet() const { return m_routeServerEndpointIdHasBeenSet; }
    template<typename RouteServerEndpointIdT = Aws::String>
    void SetRouteServerEndpointId(RouteServerEndpointIdT&& value) { m_routeServerEndpointIdHasBeenSet = true; m_routeServerEndpointId = std::forward<RouteServerEndpointIdT>(value); }
    template<typename RouteServerEndpointIdT = Aws::String>
    RouteServerEndpoint& WithRouteServerEndpointId(RouteServerEndpointIdT&& value) { SetRouteServerEndpointId(std::forward<RouteServerEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC containing the endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    RouteServerEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet to place the route server endpoint into.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    RouteServerEndpoint& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Elastic network interface for the endpoint.</p>
     */
    inline const Aws::String& GetEniId() const { return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    template<typename EniIdT = Aws::String>
    void SetEniId(EniIdT&& value) { m_eniIdHasBeenSet = true; m_eniId = std::forward<EniIdT>(value); }
    template<typename EniIdT = Aws::String>
    RouteServerEndpoint& WithEniId(EniIdT&& value) { SetEniId(std::forward<EniIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Elastic network interface for the endpoint.</p>
     */
    inline const Aws::String& GetEniAddress() const { return m_eniAddress; }
    inline bool EniAddressHasBeenSet() const { return m_eniAddressHasBeenSet; }
    template<typename EniAddressT = Aws::String>
    void SetEniAddress(EniAddressT&& value) { m_eniAddressHasBeenSet = true; m_eniAddress = std::forward<EniAddressT>(value); }
    template<typename EniAddressT = Aws::String>
    RouteServerEndpoint& WithEniAddress(EniAddressT&& value) { SetEniAddress(std::forward<EniAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route server endpoint.</p>
     */
    inline RouteServerEndpointState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteServerEndpointState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteServerEndpoint& WithState(RouteServerEndpointState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for any failure in endpoint creation or operation.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    RouteServerEndpoint& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the route server endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RouteServerEndpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RouteServerEndpoint& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    Aws::String m_routeServerEndpointId;
    bool m_routeServerEndpointIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet = false;

    Aws::String m_eniAddress;
    bool m_eniAddressHasBeenSet = false;

    RouteServerEndpointState m_state{RouteServerEndpointState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
