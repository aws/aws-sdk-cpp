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
    AWS_TRANSFER_API UpdateWebAppRequest() = default;

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
    inline const Aws::String& GetWebAppId() const { return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    template<typename WebAppIdT = Aws::String>
    void SetWebAppId(WebAppIdT&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::forward<WebAppIdT>(value); }
    template<typename WebAppIdT = Aws::String>
    UpdateWebAppRequest& WithWebAppId(WebAppIdT&& value) { SetWebAppId(std::forward<WebAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide updated identity provider values in a
     * <code>WebAppIdentityProviderDetails</code> object.</p>
     */
    inline const UpdateWebAppIdentityProviderDetails& GetIdentityProviderDetails() const { return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    template<typename IdentityProviderDetailsT = UpdateWebAppIdentityProviderDetails>
    void SetIdentityProviderDetails(IdentityProviderDetailsT&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::forward<IdentityProviderDetailsT>(value); }
    template<typename IdentityProviderDetailsT = UpdateWebAppIdentityProviderDetails>
    UpdateWebAppRequest& WithIdentityProviderDetails(IdentityProviderDetailsT&& value) { SetIdentityProviderDetails(std::forward<IdentityProviderDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessEndpoint</code> is the URL that you provide to your users for
     * them to interact with the Transfer Family web app. You can specify a custom URL
     * or use the default value.</p>
     */
    inline const Aws::String& GetAccessEndpoint() const { return m_accessEndpoint; }
    inline bool AccessEndpointHasBeenSet() const { return m_accessEndpointHasBeenSet; }
    template<typename AccessEndpointT = Aws::String>
    void SetAccessEndpoint(AccessEndpointT&& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = std::forward<AccessEndpointT>(value); }
    template<typename AccessEndpointT = Aws::String>
    UpdateWebAppRequest& WithAccessEndpoint(AccessEndpointT&& value) { SetAccessEndpoint(std::forward<AccessEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A union that contains the value for number of concurrent connections or the
     * user sessions on your web app.</p>
     */
    inline const WebAppUnits& GetWebAppUnits() const { return m_webAppUnits; }
    inline bool WebAppUnitsHasBeenSet() const { return m_webAppUnitsHasBeenSet; }
    template<typename WebAppUnitsT = WebAppUnits>
    void SetWebAppUnits(WebAppUnitsT&& value) { m_webAppUnitsHasBeenSet = true; m_webAppUnits = std::forward<WebAppUnitsT>(value); }
    template<typename WebAppUnitsT = WebAppUnits>
    UpdateWebAppRequest& WithWebAppUnits(WebAppUnitsT&& value) { SetWebAppUnits(std::forward<WebAppUnitsT>(value)); return *this;}
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
