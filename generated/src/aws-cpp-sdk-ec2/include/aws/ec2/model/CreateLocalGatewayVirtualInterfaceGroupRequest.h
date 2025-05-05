/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateLocalGatewayVirtualInterfaceGroupRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateLocalGatewayVirtualInterfaceGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocalGatewayVirtualInterfaceGroup"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const { return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    template<typename LocalGatewayIdT = Aws::String>
    void SetLocalGatewayId(LocalGatewayIdT&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::forward<LocalGatewayIdT>(value); }
    template<typename LocalGatewayIdT = Aws::String>
    CreateLocalGatewayVirtualInterfaceGroupRequest& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number(ASN) for the local Border Gateway Protocol
     * (BGP).</p>
     */
    inline int GetLocalBgpAsn() const { return m_localBgpAsn; }
    inline bool LocalBgpAsnHasBeenSet() const { return m_localBgpAsnHasBeenSet; }
    inline void SetLocalBgpAsn(int value) { m_localBgpAsnHasBeenSet = true; m_localBgpAsn = value; }
    inline CreateLocalGatewayVirtualInterfaceGroupRequest& WithLocalBgpAsn(int value) { SetLocalBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extended 32-bit ASN for the local BGP configuration.</p>
     */
    inline long long GetLocalBgpAsnExtended() const { return m_localBgpAsnExtended; }
    inline bool LocalBgpAsnExtendedHasBeenSet() const { return m_localBgpAsnExtendedHasBeenSet; }
    inline void SetLocalBgpAsnExtended(long long value) { m_localBgpAsnExtendedHasBeenSet = true; m_localBgpAsnExtended = value; }
    inline CreateLocalGatewayVirtualInterfaceGroupRequest& WithLocalBgpAsnExtended(long long value) { SetLocalBgpAsnExtended(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the local gateway virtual interface group when the
     * resource is being created.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateLocalGatewayVirtualInterfaceGroupRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateLocalGatewayVirtualInterfaceGroupRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateLocalGatewayVirtualInterfaceGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    int m_localBgpAsn{0};
    bool m_localBgpAsnHasBeenSet = false;

    long long m_localBgpAsnExtended{0};
    bool m_localBgpAsnExtendedHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
