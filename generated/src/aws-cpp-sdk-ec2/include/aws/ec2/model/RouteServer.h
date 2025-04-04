/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RouteServerPersistRoutesState.h>
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
   * <p>Describes a route server and its configuration.</p> <p>Amazon VPC Route
   * Server simplifies routing for traffic between workloads that are deployed within
   * a VPC and its internet gateways. With this feature, VPC Route Server dynamically
   * updates VPC and internet gateway route tables with your preferred IPv4 or IPv6
   * routes to achieve routing fault tolerance for those workloads. This enables you
   * to automatically reroute traffic within a VPC, which increases the manageability
   * of VPC routing and interoperability with third-party workloads.</p> <p>Route
   * server supports the follow route table types:</p> <ul> <li> <p>VPC route tables
   * not associated with subnets</p> </li> <li> <p>Subnet route tables</p> </li> <li>
   * <p>Internet gateway route tables</p> </li> </ul> <p>Route server does not
   * support route tables associated with virtual private gateways. To propagate
   * routes into a transit gateway route table, use <a
   * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-connect.html">Transit
   * Gateway Connect</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServer">AWS API
   * Reference</a></p>
   */
  class RouteServer
  {
  public:
    AWS_EC2_API RouteServer() = default;
    AWS_EC2_API RouteServer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the route server.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    RouteServer& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) for the
     * appliance. Valid values are from 1 to 4294967295. We recommend using a private
     * ASN in the 64512–65534 (16-bit ASN) or 4200000000–4294967294 (32-bit ASN)
     * range.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline RouteServer& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route server.</p>
     */
    inline RouteServerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteServerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteServer& WithState(RouteServerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the route server.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RouteServer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RouteServer& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of route persistence for the route server.</p>
     */
    inline RouteServerPersistRoutesState GetPersistRoutesState() const { return m_persistRoutesState; }
    inline bool PersistRoutesStateHasBeenSet() const { return m_persistRoutesStateHasBeenSet; }
    inline void SetPersistRoutesState(RouteServerPersistRoutesState value) { m_persistRoutesStateHasBeenSet = true; m_persistRoutesState = value; }
    inline RouteServer& WithPersistRoutesState(RouteServerPersistRoutesState value) { SetPersistRoutesState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a route server will wait after BGP is re-established to
     * unpersist the routes in the FIB and RIB. Value must be in the range of 1-5. The
     * default value is 1. Only valid if <code>persistRoutesState</code> is
     * 'enabled'.</p> <p>If you set the duration to 1 minute, then when your network
     * appliance re-establishes BGP with route server, it has 1 minute to relearn it's
     * adjacent network and advertise those routes to route server before route server
     * resumes normal functionality. In most cases, 1 minute is probably sufficient.
     * If, however, you have concerns that your BGP network may not be capable of fully
     * re-establishing and re-learning everything in 1 minute, you can increase the
     * duration up to 5 minutes.</p>
     */
    inline long long GetPersistRoutesDuration() const { return m_persistRoutesDuration; }
    inline bool PersistRoutesDurationHasBeenSet() const { return m_persistRoutesDurationHasBeenSet; }
    inline void SetPersistRoutesDuration(long long value) { m_persistRoutesDurationHasBeenSet = true; m_persistRoutesDuration = value; }
    inline RouteServer& WithPersistRoutesDuration(long long value) { SetPersistRoutesDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether SNS notifications are enabled for the route server.
     * Enabling SNS notifications persists BGP status changes to an SNS topic
     * provisioned by Amazon Web Services.</p>
     */
    inline bool GetSnsNotificationsEnabled() const { return m_snsNotificationsEnabled; }
    inline bool SnsNotificationsEnabledHasBeenSet() const { return m_snsNotificationsEnabledHasBeenSet; }
    inline void SetSnsNotificationsEnabled(bool value) { m_snsNotificationsEnabledHasBeenSet = true; m_snsNotificationsEnabled = value; }
    inline RouteServer& WithSnsNotificationsEnabled(bool value) { SetSnsNotificationsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic where notifications are published.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    RouteServer& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    RouteServerState m_state{RouteServerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    RouteServerPersistRoutesState m_persistRoutesState{RouteServerPersistRoutesState::NOT_SET};
    bool m_persistRoutesStateHasBeenSet = false;

    long long m_persistRoutesDuration{0};
    bool m_persistRoutesDurationHasBeenSet = false;

    bool m_snsNotificationsEnabled{false};
    bool m_snsNotificationsEnabledHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
