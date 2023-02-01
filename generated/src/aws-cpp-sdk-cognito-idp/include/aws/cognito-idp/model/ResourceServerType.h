/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/ResourceServerScopeType.h>
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
   * <p>A container for information about a resource server for a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResourceServerType">AWS
   * API Reference</a></p>
   */
  class ResourceServerType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerType();
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline ResourceServerType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline ResourceServerType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool that hosts the resource server.</p>
     */
    inline ResourceServerType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline ResourceServerType& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline ResourceServerType& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource server.</p>
     */
    inline ResourceServerType& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline ResourceServerType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource server.</p>
     */
    inline ResourceServerType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource server.</p>
     */
    inline ResourceServerType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline const Aws::Vector<ResourceServerScopeType>& GetScopes() const{ return m_scopes; }

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline void SetScopes(const Aws::Vector<ResourceServerScopeType>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline void SetScopes(Aws::Vector<ResourceServerScopeType>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline ResourceServerType& WithScopes(const Aws::Vector<ResourceServerScopeType>& value) { SetScopes(value); return *this;}

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline ResourceServerType& WithScopes(Aws::Vector<ResourceServerScopeType>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline ResourceServerType& AddScopes(const ResourceServerScopeType& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>A list of scopes that are defined for the resource server.</p>
     */
    inline ResourceServerType& AddScopes(ResourceServerScopeType&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }

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
