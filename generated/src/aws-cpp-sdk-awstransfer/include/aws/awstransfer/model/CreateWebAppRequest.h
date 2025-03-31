/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/awstransfer/model/WebAppIdentityProviderDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/WebAppUnits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WebAppEndpointPolicy.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateWebAppRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateWebAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebApp"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>You can provide a structure that contains the details for the identity
     * provider to use with your web app.</p> <p>For more details about this parameter,
     * see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/webapp-identity-center.html">Configure
     * your identity provider for Transfer Family web apps</a>.</p>
     */
    inline const WebAppIdentityProviderDetails& GetIdentityProviderDetails() const { return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    template<typename IdentityProviderDetailsT = WebAppIdentityProviderDetails>
    void SetIdentityProviderDetails(IdentityProviderDetailsT&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::forward<IdentityProviderDetailsT>(value); }
    template<typename IdentityProviderDetailsT = WebAppIdentityProviderDetails>
    CreateWebAppRequest& WithIdentityProviderDetails(IdentityProviderDetailsT&& value) { SetIdentityProviderDetails(std::forward<IdentityProviderDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessEndpoint</code> is the URL that you provide to your users for
     * them to interact with the Transfer Family web app. You can specify a custom URL
     * or use the default value.</p> <p>Before you enter a custom URL for this
     * parameter, follow the steps described in <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/webapp-customize.html">Update
     * your access endpoint with a custom URL</a>.</p>
     */
    inline const Aws::String& GetAccessEndpoint() const { return m_accessEndpoint; }
    inline bool AccessEndpointHasBeenSet() const { return m_accessEndpointHasBeenSet; }
    template<typename AccessEndpointT = Aws::String>
    void SetAccessEndpoint(AccessEndpointT&& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = std::forward<AccessEndpointT>(value); }
    template<typename AccessEndpointT = Aws::String>
    CreateWebAppRequest& WithAccessEndpoint(AccessEndpointT&& value) { SetAccessEndpoint(std::forward<AccessEndpointT>(value)); return *this;}
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
    CreateWebAppRequest& WithWebAppUnits(WebAppUnitsT&& value) { SetWebAppUnits(std::forward<WebAppUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for web apps.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWebAppRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWebAppRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Setting for the type of endpoint policy for the web app. The default value
     * is <code>STANDARD</code>. </p> <p>If you are creating the web app in an Amazon
     * Web Services GovCloud (US) Region, you can set this parameter to
     * <code>FIPS</code>.</p>
     */
    inline WebAppEndpointPolicy GetWebAppEndpointPolicy() const { return m_webAppEndpointPolicy; }
    inline bool WebAppEndpointPolicyHasBeenSet() const { return m_webAppEndpointPolicyHasBeenSet; }
    inline void SetWebAppEndpointPolicy(WebAppEndpointPolicy value) { m_webAppEndpointPolicyHasBeenSet = true; m_webAppEndpointPolicy = value; }
    inline CreateWebAppRequest& WithWebAppEndpointPolicy(WebAppEndpointPolicy value) { SetWebAppEndpointPolicy(value); return *this;}
    ///@}
  private:

    WebAppIdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    Aws::String m_accessEndpoint;
    bool m_accessEndpointHasBeenSet = false;

    WebAppUnits m_webAppUnits;
    bool m_webAppUnitsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    WebAppEndpointPolicy m_webAppEndpointPolicy{WebAppEndpointPolicy::NOT_SET};
    bool m_webAppEndpointPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
