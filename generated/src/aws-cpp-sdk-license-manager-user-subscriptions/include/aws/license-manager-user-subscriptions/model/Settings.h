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
   * <p>The registered identity provider’s product related configuration settings
   * such as the subnets to provision VPC endpoints, and the security group ID that
   * is associated with the VPC endpoints. The security group should permit inbound
   * TCP port 1688 communication from resources in the VPC.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/Settings">AWS
   * API Reference</a></p>
   */
  class Settings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    Settings& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    Settings& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    template<typename SecurityGroupIdT = Aws::String>
    void SetSecurityGroupId(SecurityGroupIdT&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::forward<SecurityGroupIdT>(value); }
    template<typename SecurityGroupIdT = Aws::String>
    Settings& WithSecurityGroupId(SecurityGroupIdT&& value) { SetSecurityGroupId(std::forward<SecurityGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
