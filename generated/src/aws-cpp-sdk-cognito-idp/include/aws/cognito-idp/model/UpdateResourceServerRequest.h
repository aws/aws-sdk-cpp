/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/ResourceServerScopeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class UpdateResourceServerRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateResourceServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceServer"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline UpdateResourceServerRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline UpdateResourceServerRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline UpdateResourceServerRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The identifier for the resource server.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name of the resource server.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource server.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource server.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource server.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource server.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline const Aws::Vector<ResourceServerScopeType>& GetScopes() const{ return m_scopes; }

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline void SetScopes(const Aws::Vector<ResourceServerScopeType>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline void SetScopes(Aws::Vector<ResourceServerScopeType>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithScopes(const Aws::Vector<ResourceServerScopeType>& value) { SetScopes(value); return *this;}

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline UpdateResourceServerRequest& WithScopes(Aws::Vector<ResourceServerScopeType>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline UpdateResourceServerRequest& AddScopes(const ResourceServerScopeType& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>The scope values to be set for the resource server.</p>
     */
    inline UpdateResourceServerRequest& AddScopes(ResourceServerScopeType&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ResourceServerScopeType> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
