/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/NetworkACLEntry.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure of the transit gateway and network configuration that is used
   * to connect the kdb environment to an internal network.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/TransitGatewayConfiguration">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConfiguration
  {
  public:
    AWS_FINSPACE_API TransitGatewayConfiguration() = default;
    AWS_FINSPACE_API TransitGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API TransitGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline const Aws::String& GetTransitGatewayID() const { return m_transitGatewayID; }
    inline bool TransitGatewayIDHasBeenSet() const { return m_transitGatewayIDHasBeenSet; }
    template<typename TransitGatewayIDT = Aws::String>
    void SetTransitGatewayID(TransitGatewayIDT&& value) { m_transitGatewayIDHasBeenSet = true; m_transitGatewayID = std::forward<TransitGatewayIDT>(value); }
    template<typename TransitGatewayIDT = Aws::String>
    TransitGatewayConfiguration& WithTransitGatewayID(TransitGatewayIDT&& value) { SetTransitGatewayID(std::forward<TransitGatewayIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline const Aws::String& GetRoutableCIDRSpace() const { return m_routableCIDRSpace; }
    inline bool RoutableCIDRSpaceHasBeenSet() const { return m_routableCIDRSpaceHasBeenSet; }
    template<typename RoutableCIDRSpaceT = Aws::String>
    void SetRoutableCIDRSpace(RoutableCIDRSpaceT&& value) { m_routableCIDRSpaceHasBeenSet = true; m_routableCIDRSpace = std::forward<RoutableCIDRSpaceT>(value); }
    template<typename RoutableCIDRSpaceT = Aws::String>
    TransitGatewayConfiguration& WithRoutableCIDRSpace(RoutableCIDRSpaceT&& value) { SetRoutableCIDRSpace(std::forward<RoutableCIDRSpaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rules that define how you manage the outbound traffic from kdb network
     * to your internal network. </p>
     */
    inline const Aws::Vector<NetworkACLEntry>& GetAttachmentNetworkAclConfiguration() const { return m_attachmentNetworkAclConfiguration; }
    inline bool AttachmentNetworkAclConfigurationHasBeenSet() const { return m_attachmentNetworkAclConfigurationHasBeenSet; }
    template<typename AttachmentNetworkAclConfigurationT = Aws::Vector<NetworkACLEntry>>
    void SetAttachmentNetworkAclConfiguration(AttachmentNetworkAclConfigurationT&& value) { m_attachmentNetworkAclConfigurationHasBeenSet = true; m_attachmentNetworkAclConfiguration = std::forward<AttachmentNetworkAclConfigurationT>(value); }
    template<typename AttachmentNetworkAclConfigurationT = Aws::Vector<NetworkACLEntry>>
    TransitGatewayConfiguration& WithAttachmentNetworkAclConfiguration(AttachmentNetworkAclConfigurationT&& value) { SetAttachmentNetworkAclConfiguration(std::forward<AttachmentNetworkAclConfigurationT>(value)); return *this;}
    template<typename AttachmentNetworkAclConfigurationT = NetworkACLEntry>
    TransitGatewayConfiguration& AddAttachmentNetworkAclConfiguration(AttachmentNetworkAclConfigurationT&& value) { m_attachmentNetworkAclConfigurationHasBeenSet = true; m_attachmentNetworkAclConfiguration.emplace_back(std::forward<AttachmentNetworkAclConfigurationT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayID;
    bool m_transitGatewayIDHasBeenSet = false;

    Aws::String m_routableCIDRSpace;
    bool m_routableCIDRSpaceHasBeenSet = false;

    Aws::Vector<NetworkACLEntry> m_attachmentNetworkAclConfiguration;
    bool m_attachmentNetworkAclConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
