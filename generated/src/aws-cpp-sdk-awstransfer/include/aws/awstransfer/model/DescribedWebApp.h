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
#include <aws/awstransfer/model/WebAppEndpointPolicy.h>
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
    AWS_TRANSFER_API DescribedWebApp() = default;
    AWS_TRANSFER_API DescribedWebApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWebApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web app.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribedWebApp& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const { return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    template<typename WebAppIdT = Aws::String>
    void SetWebAppId(WebAppIdT&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::forward<WebAppIdT>(value); }
    template<typename WebAppIdT = Aws::String>
    DescribedWebApp& WithWebAppId(WebAppIdT&& value) { SetWebAppId(std::forward<WebAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the details for the identity provider used by the
     * web app.</p>
     */
    inline const DescribedWebAppIdentityProviderDetails& GetDescribedIdentityProviderDetails() const { return m_describedIdentityProviderDetails; }
    inline bool DescribedIdentityProviderDetailsHasBeenSet() const { return m_describedIdentityProviderDetailsHasBeenSet; }
    template<typename DescribedIdentityProviderDetailsT = DescribedWebAppIdentityProviderDetails>
    void SetDescribedIdentityProviderDetails(DescribedIdentityProviderDetailsT&& value) { m_describedIdentityProviderDetailsHasBeenSet = true; m_describedIdentityProviderDetails = std::forward<DescribedIdentityProviderDetailsT>(value); }
    template<typename DescribedIdentityProviderDetailsT = DescribedWebAppIdentityProviderDetails>
    DescribedWebApp& WithDescribedIdentityProviderDetails(DescribedIdentityProviderDetailsT&& value) { SetDescribedIdentityProviderDetails(std::forward<DescribedIdentityProviderDetailsT>(value)); return *this;}
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
    DescribedWebApp& WithAccessEndpoint(AccessEndpointT&& value) { SetAccessEndpoint(std::forward<AccessEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>WebAppEndpoint</code> is the unique URL for your Transfer Family
     * web app. This is the value that you use when you configure <b>Origins</b> on
     * CloudFront.</p>
     */
    inline const Aws::String& GetWebAppEndpoint() const { return m_webAppEndpoint; }
    inline bool WebAppEndpointHasBeenSet() const { return m_webAppEndpointHasBeenSet; }
    template<typename WebAppEndpointT = Aws::String>
    void SetWebAppEndpoint(WebAppEndpointT&& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = std::forward<WebAppEndpointT>(value); }
    template<typename WebAppEndpointT = Aws::String>
    DescribedWebApp& WithWebAppEndpoint(WebAppEndpointT&& value) { SetWebAppEndpoint(std::forward<WebAppEndpointT>(value)); return *this;}
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
    DescribedWebApp& WithWebAppUnits(WebAppUnitsT&& value) { SetWebAppUnits(std::forward<WebAppUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for web apps. Tags are
     * metadata attached to web apps for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribedWebApp& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribedWebApp& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Setting for the type of endpoint policy for the web app. The default value
     * is <code>STANDARD</code>. </p> <p>If your web app was created in an Amazon Web
     * Services GovCloud (US) Region, the value of this parameter can be
     * <code>FIPS</code>, which indicates the web app endpoint is FIPS-compliant.</p>
     */
    inline WebAppEndpointPolicy GetWebAppEndpointPolicy() const { return m_webAppEndpointPolicy; }
    inline bool WebAppEndpointPolicyHasBeenSet() const { return m_webAppEndpointPolicyHasBeenSet; }
    inline void SetWebAppEndpointPolicy(WebAppEndpointPolicy value) { m_webAppEndpointPolicyHasBeenSet = true; m_webAppEndpointPolicy = value; }
    inline DescribedWebApp& WithWebAppEndpointPolicy(WebAppEndpointPolicy value) { SetWebAppEndpointPolicy(value); return *this;}
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

    WebAppEndpointPolicy m_webAppEndpointPolicy{WebAppEndpointPolicy::NOT_SET};
    bool m_webAppEndpointPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
