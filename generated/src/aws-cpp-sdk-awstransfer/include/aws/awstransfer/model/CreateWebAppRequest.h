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
    AWS_TRANSFER_API CreateWebAppRequest();

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
     * provider to use with your web app.</p>
     */
    inline const WebAppIdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    inline void SetIdentityProviderDetails(const WebAppIdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }
    inline void SetIdentityProviderDetails(WebAppIdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }
    inline CreateWebAppRequest& WithIdentityProviderDetails(const WebAppIdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}
    inline CreateWebAppRequest& WithIdentityProviderDetails(WebAppIdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}
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
    inline CreateWebAppRequest& WithAccessEndpoint(const Aws::String& value) { SetAccessEndpoint(value); return *this;}
    inline CreateWebAppRequest& WithAccessEndpoint(Aws::String&& value) { SetAccessEndpoint(std::move(value)); return *this;}
    inline CreateWebAppRequest& WithAccessEndpoint(const char* value) { SetAccessEndpoint(value); return *this;}
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
    inline CreateWebAppRequest& WithWebAppUnits(const WebAppUnits& value) { SetWebAppUnits(value); return *this;}
    inline CreateWebAppRequest& WithWebAppUnits(WebAppUnits&& value) { SetWebAppUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for web apps.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWebAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWebAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWebAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWebAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
