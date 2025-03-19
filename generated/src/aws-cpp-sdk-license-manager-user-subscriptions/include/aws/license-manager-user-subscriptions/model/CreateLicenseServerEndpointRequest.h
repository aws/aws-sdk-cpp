/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class CreateLicenseServerEndpointRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseServerEndpoint"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the
     * <code>IdentityProvider</code> resource that contains details about a registered
     * identity provider. In the case of Active Directory, that can be a self-managed
     * Active Directory or an Amazon Web Services Managed Active Directory that
     * contains user identity details.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const { return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    template<typename IdentityProviderArnT = Aws::String>
    void SetIdentityProviderArn(IdentityProviderArnT&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::forward<IdentityProviderArnT>(value); }
    template<typename IdentityProviderArnT = Aws::String>
    CreateLicenseServerEndpointRequest& WithIdentityProviderArn(IdentityProviderArnT&& value) { SetIdentityProviderArn(std::forward<IdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>LicenseServerSettings</code> resource to create for the endpoint.
     * The settings include the type of license server and the Secrets Manager secret
     * that enables administrators to add or remove users associated with the license
     * server.</p>
     */
    inline const LicenseServerSettings& GetLicenseServerSettings() const { return m_licenseServerSettings; }
    inline bool LicenseServerSettingsHasBeenSet() const { return m_licenseServerSettingsHasBeenSet; }
    template<typename LicenseServerSettingsT = LicenseServerSettings>
    void SetLicenseServerSettings(LicenseServerSettingsT&& value) { m_licenseServerSettingsHasBeenSet = true; m_licenseServerSettings = std::forward<LicenseServerSettingsT>(value); }
    template<typename LicenseServerSettingsT = LicenseServerSettings>
    CreateLicenseServerEndpointRequest& WithLicenseServerSettings(LicenseServerSettingsT&& value) { SetLicenseServerSettings(std::forward<LicenseServerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that apply for the license server endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLicenseServerEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLicenseServerEndpointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    LicenseServerSettings m_licenseServerSettings;
    bool m_licenseServerSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
