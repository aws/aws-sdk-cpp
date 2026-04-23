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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/IdentityProviderTypeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A container for information about an identity provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/IdentityProviderType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API IdentityProviderType
  {
  public:
    IdentityProviderType();
    IdentityProviderType(Aws::Utils::Json::JsonView jsonValue);
    IdentityProviderType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline IdentityProviderType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline IdentityProviderType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline IdentityProviderType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline IdentityProviderType& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline IdentityProviderType& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline IdentityProviderType& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The identity provider type.</p>
     */
    inline const IdentityProviderTypeType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The identity provider type.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetProviderType(const IdentityProviderTypeType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetProviderType(IdentityProviderTypeType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The identity provider type.</p>
     */
    inline IdentityProviderType& WithProviderType(const IdentityProviderTypeType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The identity provider type.</p>
     */
    inline IdentityProviderType& WithProviderType(IdentityProviderTypeType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const{ return m_providerDetails; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline void SetProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = value; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline void SetProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::move(value); }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& WithProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetProviderDetails(value); return *this;}

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& WithProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetProviderDetails(std::move(value)); return *this;}

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(const Aws::String& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(Aws::String&& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(const Aws::String& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(Aws::String&& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(const char* key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(Aws::String&& key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details, such as <code>MetadataURL</code> and
     * <code>MetadataFile</code>.</p>
     */
    inline IdentityProviderType& AddProviderDetails(const char* key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }


    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const{ return m_attributeMapping; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline void SetAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = value; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline void SetAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::move(value); }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& WithAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMapping(value); return *this;}

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& WithAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMapping(std::move(value)); return *this;}

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(const Aws::String& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(Aws::String&& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(const Aws::String& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(Aws::String&& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(const char* key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(Aws::String&& key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline IdentityProviderType& AddAttributeMapping(const char* key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }


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
    inline IdentityProviderType& WithIdpIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdpIdentifiers(value); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline IdentityProviderType& WithIdpIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdpIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline IdentityProviderType& AddIdpIdentifiers(const Aws::String& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline IdentityProviderType& AddIdpIdentifiers(Aws::String&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline IdentityProviderType& AddIdpIdentifiers(const char* value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }


    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline IdentityProviderType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the identity provider was last modified.</p>
     */
    inline IdentityProviderType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date the identity provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the identity provider was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the identity provider was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the identity provider was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the identity provider was created.</p>
     */
    inline IdentityProviderType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the identity provider was created.</p>
     */
    inline IdentityProviderType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;

    IdentityProviderTypeType m_providerType;
    bool m_providerTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_providerDetails;
    bool m_providerDetailsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributeMapping;
    bool m_attributeMappingHasBeenSet;

    Aws::Vector<Aws::String> m_idpIdentifiers;
    bool m_idpIdentifiersHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
