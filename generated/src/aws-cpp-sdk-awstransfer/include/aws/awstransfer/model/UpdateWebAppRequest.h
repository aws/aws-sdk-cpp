/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/UpdateWebAppIdentityProviderDetails.h>
#include <aws/awstransfer/model/WebAppUnits.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateWebAppRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateWebAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebApp"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provide the identifier of the web app that you are updating.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline UpdateWebAppRequest& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline UpdateWebAppRequest& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline UpdateWebAppRequest& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide updated identity provider values in a
     * <code>WebAppIdentityProviderDetails</code> object.</p>
     */
    inline const UpdateWebAppIdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    inline void SetIdentityProviderDetails(const UpdateWebAppIdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }
    inline void SetIdentityProviderDetails(UpdateWebAppIdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }
    inline UpdateWebAppRequest& WithIdentityProviderDetails(const UpdateWebAppIdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}
    inline UpdateWebAppRequest& WithIdentityProviderDetails(UpdateWebAppIdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessEndpoint</code> is the URL that you provide to your users for
     * them to interact with the Transfer Family web app. You can specify a custom URL
     * or use the default value.</p>
     */
    inline const Aws::String& GetAccessEndpoint() const{ return m_accessEndpoint; }
    inline bool AccessEndpointHasBeenSet() const { return m_accessEndpointHasBeenSet; }
    inline void SetAccessEndpoint(const Aws::String& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = value; }
    inline void SetAccessEndpoint(Aws::String&& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = std::move(value); }
    inline void SetAccessEndpoint(const char* value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint.assign(value); }
    inline UpdateWebAppRequest& WithAccessEndpoint(const Aws::String& value) { SetAccessEndpoint(value); return *this;}
    inline UpdateWebAppRequest& WithAccessEndpoint(Aws::String&& value) { SetAccessEndpoint(std::move(value)); return *this;}
    inline UpdateWebAppRequest& WithAccessEndpoint(const char* value) { SetAccessEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A union that contains the value for number of concurrent connections or the
     * user sessions on your web app.</p>
     */
    inline const WebAppUnits& GetWebAppUnits() const{ return m_webAppUnits; }
    inline bool WebAppUnitsHasBeenSet() const { return m_webAppUnitsHasBeenSet; }
    inline void SetWebAppUnits(const WebAppUnits& value) { m_webAppUnitsHasBeenSet = true; m_webAppUnits = value; }
    inline void SetWebAppUnits(WebAppUnits&& value) { m_webAppUnitsHasBeenSet = true; m_webAppUnits = std::move(value); }
    inline UpdateWebAppRequest& WithWebAppUnits(const WebAppUnits& value) { SetWebAppUnits(value); return *this;}
    inline UpdateWebAppRequest& WithWebAppUnits(WebAppUnits&& value) { SetWebAppUnits(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;

    UpdateWebAppIdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    Aws::String m_accessEndpoint;
    bool m_accessEndpointHasBeenSet = false;

    WebAppUnits m_webAppUnits;
    bool m_webAppUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
