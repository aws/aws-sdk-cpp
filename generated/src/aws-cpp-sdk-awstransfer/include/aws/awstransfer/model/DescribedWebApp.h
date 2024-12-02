/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/DescribedWebAppIdentityProviderDetails.h>
#include <aws/awstransfer/model/WebAppUnits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A structure that describes the parameters for the web app, as identified by
   * the <code>WebAppId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedWebApp">AWS
   * API Reference</a></p>
   */
  class DescribedWebApp
  {
  public:
    AWS_TRANSFER_API DescribedWebApp();
    AWS_TRANSFER_API DescribedWebApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWebApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web app.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribedWebApp& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribedWebApp& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribedWebApp& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline DescribedWebApp& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline DescribedWebApp& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline DescribedWebApp& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the details for the identity provider used by the
     * web app.</p>
     */
    inline const DescribedWebAppIdentityProviderDetails& GetDescribedIdentityProviderDetails() const{ return m_describedIdentityProviderDetails; }
    inline bool DescribedIdentityProviderDetailsHasBeenSet() const { return m_describedIdentityProviderDetailsHasBeenSet; }
    inline void SetDescribedIdentityProviderDetails(const DescribedWebAppIdentityProviderDetails& value) { m_describedIdentityProviderDetailsHasBeenSet = true; m_describedIdentityProviderDetails = value; }
    inline void SetDescribedIdentityProviderDetails(DescribedWebAppIdentityProviderDetails&& value) { m_describedIdentityProviderDetailsHasBeenSet = true; m_describedIdentityProviderDetails = std::move(value); }
    inline DescribedWebApp& WithDescribedIdentityProviderDetails(const DescribedWebAppIdentityProviderDetails& value) { SetDescribedIdentityProviderDetails(value); return *this;}
    inline DescribedWebApp& WithDescribedIdentityProviderDetails(DescribedWebAppIdentityProviderDetails&& value) { SetDescribedIdentityProviderDetails(std::move(value)); return *this;}
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
    inline DescribedWebApp& WithAccessEndpoint(const Aws::String& value) { SetAccessEndpoint(value); return *this;}
    inline DescribedWebApp& WithAccessEndpoint(Aws::String&& value) { SetAccessEndpoint(std::move(value)); return *this;}
    inline DescribedWebApp& WithAccessEndpoint(const char* value) { SetAccessEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>WebAppEndpoint</code> is the unique URL for your Transfer Family
     * web app. This is the value that you use when you configure <b>Origins</b> on
     * CloudFront.</p>
     */
    inline const Aws::String& GetWebAppEndpoint() const{ return m_webAppEndpoint; }
    inline bool WebAppEndpointHasBeenSet() const { return m_webAppEndpointHasBeenSet; }
    inline void SetWebAppEndpoint(const Aws::String& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = value; }
    inline void SetWebAppEndpoint(Aws::String&& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = std::move(value); }
    inline void SetWebAppEndpoint(const char* value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint.assign(value); }
    inline DescribedWebApp& WithWebAppEndpoint(const Aws::String& value) { SetWebAppEndpoint(value); return *this;}
    inline DescribedWebApp& WithWebAppEndpoint(Aws::String&& value) { SetWebAppEndpoint(std::move(value)); return *this;}
    inline DescribedWebApp& WithWebAppEndpoint(const char* value) { SetWebAppEndpoint(value); return *this;}
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
    inline DescribedWebApp& WithWebAppUnits(const WebAppUnits& value) { SetWebAppUnits(value); return *this;}
    inline DescribedWebApp& WithWebAppUnits(WebAppUnits&& value) { SetWebAppUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for web apps. Tags are
     * metadata attached to web apps for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DescribedWebApp& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribedWebApp& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribedWebApp& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DescribedWebApp& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;

    DescribedWebAppIdentityProviderDetails m_describedIdentityProviderDetails;
    bool m_describedIdentityProviderDetailsHasBeenSet = false;

    Aws::String m_accessEndpoint;
    bool m_accessEndpointHasBeenSet = false;

    Aws::String m_webAppEndpoint;
    bool m_webAppEndpointHasBeenSet = false;

    WebAppUnits m_webAppUnits;
    bool m_webAppUnitsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
