/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class DeleteLicenseServerEndpointRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLicenseServerEndpoint"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the
     * <code>LicenseServerEndpoint</code> resource to delete.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointArn() const{ return m_licenseServerEndpointArn; }
    inline bool LicenseServerEndpointArnHasBeenSet() const { return m_licenseServerEndpointArnHasBeenSet; }
    inline void SetLicenseServerEndpointArn(const Aws::String& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = value; }
    inline void SetLicenseServerEndpointArn(Aws::String&& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = std::move(value); }
    inline void SetLicenseServerEndpointArn(const char* value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn.assign(value); }
    inline DeleteLicenseServerEndpointRequest& WithLicenseServerEndpointArn(const Aws::String& value) { SetLicenseServerEndpointArn(value); return *this;}
    inline DeleteLicenseServerEndpointRequest& WithLicenseServerEndpointArn(Aws::String&& value) { SetLicenseServerEndpointArn(std::move(value)); return *this;}
    inline DeleteLicenseServerEndpointRequest& WithLicenseServerEndpointArn(const char* value) { SetLicenseServerEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of License Server that the delete request refers to.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline DeleteLicenseServerEndpointRequest& WithServerType(const ServerType& value) { SetServerType(value); return *this;}
    inline DeleteLicenseServerEndpointRequest& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseServerEndpointArn;
    bool m_licenseServerEndpointArnHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
