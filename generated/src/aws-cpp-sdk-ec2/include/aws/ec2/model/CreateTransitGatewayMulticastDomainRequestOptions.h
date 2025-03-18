/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/Igmpv2SupportValue.h>
#include <aws/ec2/model/StaticSourcesSupportValue.h>
#include <aws/ec2/model/AutoAcceptSharedAssociationsValue.h>
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
   * <p>The options for the transit gateway multicast domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayMulticastDomainRequestOptions">AWS
   * API Reference</a></p>
   */
  class CreateTransitGatewayMulticastDomainRequestOptions
  {
  public:
    AWS_EC2_API CreateTransitGatewayMulticastDomainRequestOptions() = default;
    AWS_EC2_API CreateTransitGatewayMulticastDomainRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateTransitGatewayMulticastDomainRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specify whether to enable Internet Group Management Protocol (IGMP) version 2
     * for the transit gateway multicast domain.</p>
     */
    inline Igmpv2SupportValue GetIgmpv2Support() const { return m_igmpv2Support; }
    inline bool Igmpv2SupportHasBeenSet() const { return m_igmpv2SupportHasBeenSet; }
    inline void SetIgmpv2Support(Igmpv2SupportValue value) { m_igmpv2SupportHasBeenSet = true; m_igmpv2Support = value; }
    inline CreateTransitGatewayMulticastDomainRequestOptions& WithIgmpv2Support(Igmpv2SupportValue value) { SetIgmpv2Support(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to enable support for statically configuring multicast group
     * sources for a domain.</p>
     */
    inline StaticSourcesSupportValue GetStaticSourcesSupport() const { return m_staticSourcesSupport; }
    inline bool StaticSourcesSupportHasBeenSet() const { return m_staticSourcesSupportHasBeenSet; }
    inline void SetStaticSourcesSupport(StaticSourcesSupportValue value) { m_staticSourcesSupportHasBeenSet = true; m_staticSourcesSupport = value; }
    inline CreateTransitGatewayMulticastDomainRequestOptions& WithStaticSourcesSupport(StaticSourcesSupportValue value) { SetStaticSourcesSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to automatically accept cross-account subnet associations
     * that are associated with the transit gateway multicast domain.</p>
     */
    inline AutoAcceptSharedAssociationsValue GetAutoAcceptSharedAssociations() const { return m_autoAcceptSharedAssociations; }
    inline bool AutoAcceptSharedAssociationsHasBeenSet() const { return m_autoAcceptSharedAssociationsHasBeenSet; }
    inline void SetAutoAcceptSharedAssociations(AutoAcceptSharedAssociationsValue value) { m_autoAcceptSharedAssociationsHasBeenSet = true; m_autoAcceptSharedAssociations = value; }
    inline CreateTransitGatewayMulticastDomainRequestOptions& WithAutoAcceptSharedAssociations(AutoAcceptSharedAssociationsValue value) { SetAutoAcceptSharedAssociations(value); return *this;}
    ///@}
  private:

    Igmpv2SupportValue m_igmpv2Support{Igmpv2SupportValue::NOT_SET};
    bool m_igmpv2SupportHasBeenSet = false;

    StaticSourcesSupportValue m_staticSourcesSupport{StaticSourcesSupportValue::NOT_SET};
    bool m_staticSourcesSupportHasBeenSet = false;

    AutoAcceptSharedAssociationsValue m_autoAcceptSharedAssociations{AutoAcceptSharedAssociationsValue::NOT_SET};
    bool m_autoAcceptSharedAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
