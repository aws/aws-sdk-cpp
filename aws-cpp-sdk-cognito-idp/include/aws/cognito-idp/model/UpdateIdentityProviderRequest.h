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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateIdentityProviderRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateIdentityProviderRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateIdentityProviderRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateIdentityProviderRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The identity provider name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The identity provider name.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline UpdateIdentityProviderRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline UpdateIdentityProviderRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline UpdateIdentityProviderRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const{ return m_providerDetails; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline void SetProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = value; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline void SetProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::move(value); }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& WithProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetProviderDetails(value); return *this;}

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& WithProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetProviderDetails(std::move(value)); return *this;}

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(const char* key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details to be updated, such as <code>MetadataURL</code>
     * and <code>MetadataFile</code>.</p>
     */
    inline UpdateIdentityProviderRequest& AddProviderDetails(const char* key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }


    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const{ return m_attributeMapping; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline void SetAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = value; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline void SetAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::move(value); }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& WithAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMapping(value); return *this;}

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& WithAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMapping(std::move(value)); return *this;}

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(const char* key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider attribute mapping to be changed.</p>
     */
    inline UpdateIdentityProviderRequest& AddAttributeMapping(const char* key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }


    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdpIdentifiers() const{ return m_idpIdentifiers; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline bool IdpIdentifiersHasBeenSet() const { return m_idpIdentifiersHasBeenSet; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline void SetIdpIdentifiers(const Aws::Vector<Aws::String>& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = value; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline void SetIdpIdentifiers(Aws::Vector<Aws::String>&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = std::move(value); }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline UpdateIdentityProviderRequest& WithIdpIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdpIdentifiers(value); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline UpdateIdentityProviderRequest& WithIdpIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdpIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline UpdateIdentityProviderRequest& AddIdpIdentifiers(const Aws::String& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline UpdateIdentityProviderRequest& AddIdpIdentifiers(Aws::String&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline UpdateIdentityProviderRequest& AddIdpIdentifiers(const char* value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_providerDetails;
    bool m_providerDetailsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributeMapping;
    bool m_attributeMappingHasBeenSet;

    Aws::Vector<Aws::String> m_idpIdentifiers;
    bool m_idpIdentifiersHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
