/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Updates the registered identity provider’s product related configuration
   * settings such as the subnets to provision VPC endpoints.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/UpdateSettings">AWS
   * API Reference</a></p>
   */
  class UpdateSettings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnets() const { return m_addSubnets; }
    inline bool AddSubnetsHasBeenSet() const { return m_addSubnetsHasBeenSet; }
    template<typename AddSubnetsT = Aws::Vector<Aws::String>>
    void SetAddSubnets(AddSubnetsT&& value) { m_addSubnetsHasBeenSet = true; m_addSubnets = std::forward<AddSubnetsT>(value); }
    template<typename AddSubnetsT = Aws::Vector<Aws::String>>
    UpdateSettings& WithAddSubnets(AddSubnetsT&& value) { SetAddSubnets(std::forward<AddSubnetsT>(value)); return *this;}
    template<typename AddSubnetsT = Aws::String>
    UpdateSettings& AddAddSubnets(AddSubnetsT&& value) { m_addSubnetsHasBeenSet = true; m_addSubnets.emplace_back(std::forward<AddSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnets() const { return m_removeSubnets; }
    inline bool RemoveSubnetsHasBeenSet() const { return m_removeSubnetsHasBeenSet; }
    template<typename RemoveSubnetsT = Aws::Vector<Aws::String>>
    void SetRemoveSubnets(RemoveSubnetsT&& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets = std::forward<RemoveSubnetsT>(value); }
    template<typename RemoveSubnetsT = Aws::Vector<Aws::String>>
    UpdateSettings& WithRemoveSubnets(RemoveSubnetsT&& value) { SetRemoveSubnets(std::forward<RemoveSubnetsT>(value)); return *this;}
    template<typename RemoveSubnetsT = Aws::String>
    UpdateSettings& AddRemoveSubnets(RemoveSubnetsT&& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets.emplace_back(std::forward<RemoveSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    template<typename SecurityGroupIdT = Aws::String>
    void SetSecurityGroupId(SecurityGroupIdT&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::forward<SecurityGroupIdT>(value); }
    template<typename SecurityGroupIdT = Aws::String>
    UpdateSettings& WithSecurityGroupId(SecurityGroupIdT&& value) { SetSecurityGroupId(std::forward<SecurityGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addSubnets;
    bool m_addSubnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSubnets;
    bool m_removeSubnetsHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
