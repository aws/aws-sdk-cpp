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
#include <aws/cognito-idp/model/ProviderUserIdentifierType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminLinkProviderForUserRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminLinkProviderForUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminLinkProviderForUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AdminLinkProviderForUserRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline AdminLinkProviderForUserRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline AdminLinkProviderForUserRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline const ProviderUserIdentifierType& GetDestinationUser() const{ return m_destinationUser; }

    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline bool DestinationUserHasBeenSet() const { return m_destinationUserHasBeenSet; }

    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline void SetDestinationUser(const ProviderUserIdentifierType& value) { m_destinationUserHasBeenSet = true; m_destinationUser = value; }

    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline void SetDestinationUser(ProviderUserIdentifierType&& value) { m_destinationUserHasBeenSet = true; m_destinationUser = std::move(value); }

    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline AdminLinkProviderForUserRequest& WithDestinationUser(const ProviderUserIdentifierType& value) { SetDestinationUser(value); return *this;}

    /**
     * <p>The existing user in the user pool to be linked to the external identity
     * provider user account. Can be a native (Username + Password) Cognito User Pools
     * user or a federated user (for example, a SAML or Facebook user). If the user
     * doesn't exist, an exception is thrown. This is the user that is returned when
     * the new user (with the linked identity provider attribute) signs in.</p> <p>For
     * a native username + password user, the <code>ProviderAttributeValue</code> for
     * the <code>DestinationUser</code> should be the username in the user pool. For a
     * federated user, it should be the provider-specific <code>user_id</code>.</p>
     * <p>The <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>
     */
    inline AdminLinkProviderForUserRequest& WithDestinationUser(ProviderUserIdentifierType&& value) { SetDestinationUser(std::move(value)); return *this;}


    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline const ProviderUserIdentifierType& GetSourceUser() const{ return m_sourceUser; }

    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline bool SourceUserHasBeenSet() const { return m_sourceUserHasBeenSet; }

    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline void SetSourceUser(const ProviderUserIdentifierType& value) { m_sourceUserHasBeenSet = true; m_sourceUser = value; }

    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline void SetSourceUser(ProviderUserIdentifierType&& value) { m_sourceUserHasBeenSet = true; m_sourceUser = std::move(value); }

    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline AdminLinkProviderForUserRequest& WithSourceUser(const ProviderUserIdentifierType& value) { SetSourceUser(value); return *this;}

    /**
     * <p>An external identity provider account for a user who does not currently exist
     * yet in the user pool. This user must be a federated user (for example, a SAML or
     * Facebook user), not another native user.</p> <p>If the <code>SourceUser</code>
     * is a federated social identity provider user (Facebook, Google, or Login with
     * Amazon), you must set the <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>. For social identity providers, the
     * <code>ProviderName</code> will be <code>Facebook</code>, <code>Google</code>, or
     * <code>LoginWithAmazon</code>, and Cognito will automatically parse the Facebook,
     * Google, and Login with Amazon tokens for <code>id</code>, <code>sub</code>, and
     * <code>user_id</code>, respectively. The <code>ProviderAttributeValue</code> for
     * the user must be the same value as the <code>id</code>, <code>sub</code>, or
     * <code>user_id</code> value found in the social identity provider token.</p> <p/>
     * <p>For SAML, the <code>ProviderAttributeName</code> can be any value that
     * matches a claim in the SAML assertion. If you wish to link SAML users based on
     * the subject of the SAML assertion, you should map the subject to a claim through
     * the SAML identity provider and submit that claim name as the
     * <code>ProviderAttributeName</code>. If you set
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>, Cognito will
     * automatically parse the default unique identifier found in the subject from the
     * SAML token.</p>
     */
    inline AdminLinkProviderForUserRequest& WithSourceUser(ProviderUserIdentifierType&& value) { SetSourceUser(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    ProviderUserIdentifierType m_destinationUser;
    bool m_destinationUserHasBeenSet;

    ProviderUserIdentifierType m_sourceUser;
    bool m_sourceUserHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
