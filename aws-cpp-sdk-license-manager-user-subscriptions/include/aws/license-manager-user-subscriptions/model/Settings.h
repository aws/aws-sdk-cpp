/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline Settings& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline Settings& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoint for activation servers.</p>
     */
    inline Settings& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline Settings& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline Settings& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline Settings& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline Settings& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets defined for the registered identity provider.</p>
     */
    inline Settings& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
