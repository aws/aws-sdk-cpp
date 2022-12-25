/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcEndpointServicePermissionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcEndpointServicePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointServicePermissions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddAllowedPrincipals() const{ return m_addAllowedPrincipals; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline bool AddAllowedPrincipalsHasBeenSet() const { return m_addAllowedPrincipalsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline void SetAddAllowedPrincipals(const Aws::Vector<Aws::String>& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline void SetAddAllowedPrincipals(Aws::Vector<Aws::String>&& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithAddAllowedPrincipals(const Aws::Vector<Aws::String>& value) { SetAddAllowedPrincipals(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithAddAllowedPrincipals(Aws::Vector<Aws::String>&& value) { SetAddAllowedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddAddAllowedPrincipals(const Aws::String& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddAddAllowedPrincipals(Aws::String&& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * granted to the principals in this list. To grant permissions to all principals,
     * specify an asterisk (*).</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddAddAllowedPrincipals(const char* value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveAllowedPrincipals() const{ return m_removeAllowedPrincipals; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline bool RemoveAllowedPrincipalsHasBeenSet() const { return m_removeAllowedPrincipalsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline void SetRemoveAllowedPrincipals(const Aws::Vector<Aws::String>& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline void SetRemoveAllowedPrincipals(Aws::Vector<Aws::String>&& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithRemoveAllowedPrincipals(const Aws::Vector<Aws::String>& value) { SetRemoveAllowedPrincipals(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& WithRemoveAllowedPrincipals(Aws::Vector<Aws::String>&& value) { SetRemoveAllowedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddRemoveAllowedPrincipals(const Aws::String& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddRemoveAllowedPrincipals(Aws::String&& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of one or more principals. Permissions are
     * revoked for principals in this list.</p>
     */
    inline ModifyVpcEndpointServicePermissionsRequest& AddRemoveAllowedPrincipals(const char* value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_addAllowedPrincipals;
    bool m_addAllowedPrincipalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeAllowedPrincipals;
    bool m_removeAllowedPrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
