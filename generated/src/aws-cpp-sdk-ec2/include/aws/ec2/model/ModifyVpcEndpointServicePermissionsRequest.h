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
    AWS_EC2_API ModifyVpcEndpointServicePermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointServicePermissions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyVpcEndpointServicePermissionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ModifyVpcEndpointServicePermissionsRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the principals. Permissions are granted to
     * the principals in this list. To grant permissions to all principals, specify an
     * asterisk (*).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddAllowedPrincipals() const { return m_addAllowedPrincipals; }
    inline bool AddAllowedPrincipalsHasBeenSet() const { return m_addAllowedPrincipalsHasBeenSet; }
    template<typename AddAllowedPrincipalsT = Aws::Vector<Aws::String>>
    void SetAddAllowedPrincipals(AddAllowedPrincipalsT&& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals = std::forward<AddAllowedPrincipalsT>(value); }
    template<typename AddAllowedPrincipalsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServicePermissionsRequest& WithAddAllowedPrincipals(AddAllowedPrincipalsT&& value) { SetAddAllowedPrincipals(std::forward<AddAllowedPrincipalsT>(value)); return *this;}
    template<typename AddAllowedPrincipalsT = Aws::String>
    ModifyVpcEndpointServicePermissionsRequest& AddAddAllowedPrincipals(AddAllowedPrincipalsT&& value) { m_addAllowedPrincipalsHasBeenSet = true; m_addAllowedPrincipals.emplace_back(std::forward<AddAllowedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the principals. Permissions are revoked
     * for principals in this list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveAllowedPrincipals() const { return m_removeAllowedPrincipals; }
    inline bool RemoveAllowedPrincipalsHasBeenSet() const { return m_removeAllowedPrincipalsHasBeenSet; }
    template<typename RemoveAllowedPrincipalsT = Aws::Vector<Aws::String>>
    void SetRemoveAllowedPrincipals(RemoveAllowedPrincipalsT&& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals = std::forward<RemoveAllowedPrincipalsT>(value); }
    template<typename RemoveAllowedPrincipalsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServicePermissionsRequest& WithRemoveAllowedPrincipals(RemoveAllowedPrincipalsT&& value) { SetRemoveAllowedPrincipals(std::forward<RemoveAllowedPrincipalsT>(value)); return *this;}
    template<typename RemoveAllowedPrincipalsT = Aws::String>
    ModifyVpcEndpointServicePermissionsRequest& AddRemoveAllowedPrincipals(RemoveAllowedPrincipalsT&& value) { m_removeAllowedPrincipalsHasBeenSet = true; m_removeAllowedPrincipals.emplace_back(std::forward<RemoveAllowedPrincipalsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
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
