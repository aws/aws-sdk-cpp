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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnets() const{ return m_addSubnets; }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline bool AddSubnetsHasBeenSet() const { return m_addSubnetsHasBeenSet; }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline void SetAddSubnets(const Aws::Vector<Aws::String>& value) { m_addSubnetsHasBeenSet = true; m_addSubnets = value; }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline void SetAddSubnets(Aws::Vector<Aws::String>&& value) { m_addSubnetsHasBeenSet = true; m_addSubnets = std::move(value); }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline UpdateSettings& WithAddSubnets(const Aws::Vector<Aws::String>& value) { SetAddSubnets(value); return *this;}

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline UpdateSettings& WithAddSubnets(Aws::Vector<Aws::String>&& value) { SetAddSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline UpdateSettings& AddAddSubnets(const Aws::String& value) { m_addSubnetsHasBeenSet = true; m_addSubnets.push_back(value); return *this; }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline UpdateSettings& AddAddSubnets(Aws::String&& value) { m_addSubnetsHasBeenSet = true; m_addSubnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of one or more subnets in which License Manager will create a VPC
     * endpoint for products that require connectivity to activation servers.</p>
     */
    inline UpdateSettings& AddAddSubnets(const char* value) { m_addSubnetsHasBeenSet = true; m_addSubnets.push_back(value); return *this; }


    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnets() const{ return m_removeSubnets; }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline bool RemoveSubnetsHasBeenSet() const { return m_removeSubnetsHasBeenSet; }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline void SetRemoveSubnets(const Aws::Vector<Aws::String>& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets = value; }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline void SetRemoveSubnets(Aws::Vector<Aws::String>&& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets = std::move(value); }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline UpdateSettings& WithRemoveSubnets(const Aws::Vector<Aws::String>& value) { SetRemoveSubnets(value); return *this;}

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline UpdateSettings& WithRemoveSubnets(Aws::Vector<Aws::String>&& value) { SetRemoveSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline UpdateSettings& AddRemoveSubnets(const Aws::String& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets.push_back(value); return *this; }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline UpdateSettings& AddRemoveSubnets(Aws::String&& value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of one or more subnets to remove.</p>
     */
    inline UpdateSettings& AddRemoveSubnets(const char* value) { m_removeSubnetsHasBeenSet = true; m_removeSubnets.push_back(value); return *this; }


    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline UpdateSettings& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline UpdateSettings& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>A security group ID that allows inbound TCP port 1688 communication between
     * resources in your VPC and the VPC endpoints for activation servers.</p>
     */
    inline UpdateSettings& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}

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
