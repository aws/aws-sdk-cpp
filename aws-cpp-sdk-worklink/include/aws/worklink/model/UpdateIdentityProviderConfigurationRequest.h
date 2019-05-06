/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/IdentityProviderType.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API UpdateIdentityProviderConfigurationRequest : public WorkLinkRequest
  {
  public:
    UpdateIdentityProviderConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityProviderConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The type of identity provider.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The type of identity provider.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>The type of identity provider.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>The type of identity provider.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>The type of identity provider.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The type of identity provider.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline const Aws::String& GetIdentityProviderSamlMetadata() const{ return m_identityProviderSamlMetadata; }

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline bool IdentityProviderSamlMetadataHasBeenSet() const { return m_identityProviderSamlMetadataHasBeenSet; }

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline void SetIdentityProviderSamlMetadata(const Aws::String& value) { m_identityProviderSamlMetadataHasBeenSet = true; m_identityProviderSamlMetadata = value; }

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline void SetIdentityProviderSamlMetadata(Aws::String&& value) { m_identityProviderSamlMetadataHasBeenSet = true; m_identityProviderSamlMetadata = std::move(value); }

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline void SetIdentityProviderSamlMetadata(const char* value) { m_identityProviderSamlMetadataHasBeenSet = true; m_identityProviderSamlMetadata.assign(value); }

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithIdentityProviderSamlMetadata(const Aws::String& value) { SetIdentityProviderSamlMetadata(value); return *this;}

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithIdentityProviderSamlMetadata(Aws::String&& value) { SetIdentityProviderSamlMetadata(std::move(value)); return *this;}

    /**
     * <p>The SAML metadata document provided by the customer’s identity provider. The
     * existing IdentityProviderSamlMetadata is unset if null is passed.</p>
     */
    inline UpdateIdentityProviderConfigurationRequest& WithIdentityProviderSamlMetadata(const char* value) { SetIdentityProviderSamlMetadata(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet;

    Aws::String m_identityProviderSamlMetadata;
    bool m_identityProviderSamlMetadataHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
