/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NewDhcpConfiguration.h>
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
  class CreateDhcpOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateDhcpOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDhcpOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A DHCP configuration option.</p>
     */
    inline const Aws::Vector<NewDhcpConfiguration>& GetDhcpConfigurations() const { return m_dhcpConfigurations; }
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }
    template<typename DhcpConfigurationsT = Aws::Vector<NewDhcpConfiguration>>
    void SetDhcpConfigurations(DhcpConfigurationsT&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::forward<DhcpConfigurationsT>(value); }
    template<typename DhcpConfigurationsT = Aws::Vector<NewDhcpConfiguration>>
    CreateDhcpOptionsRequest& WithDhcpConfigurations(DhcpConfigurationsT&& value) { SetDhcpConfigurations(std::forward<DhcpConfigurationsT>(value)); return *this;}
    template<typename DhcpConfigurationsT = NewDhcpConfiguration>
    CreateDhcpOptionsRequest& AddDhcpConfigurations(DhcpConfigurationsT&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.emplace_back(std::forward<DhcpConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateDhcpOptionsRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateDhcpOptionsRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    inline CreateDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<NewDhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
