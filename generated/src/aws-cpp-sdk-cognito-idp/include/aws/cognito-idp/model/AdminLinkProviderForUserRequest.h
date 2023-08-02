/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AdminLinkProviderForUserRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminLinkProviderForUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminLinkProviderForUser"; }

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
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline const ProviderUserIdentifierType& GetDestinationUser() const{ return m_destinationUser; }

    /**
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline bool DestinationUserHasBeenSet() const { return m_destinationUserHasBeenSet; }

    /**
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline void SetDestinationUser(const ProviderUserIdentifierType& value) { m_destinationUserHasBeenSet = true; m_destinationUser = value; }

    /**
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline void SetDestinationUser(ProviderUserIdentifierType&& value) { m_destinationUserHasBeenSet = true; m_destinationUser = std::move(value); }

    /**
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline AdminLinkProviderForUserRequest& WithDestinationUser(const ProviderUserIdentifierType& value) { SetDestinationUser(value); return *this;}

    /**
     * <p>The existing user in the user pool that you want to assign to the external
     * IdP user account. This user can be a local (Username + Password) Amazon Cognito
     * user pools user or a federated user (for example, a SAML or Facebook user). If
     * the user doesn't exist, Amazon Cognito generates an exception. Amazon Cognito
     * returns this user when the new user (with the linked IdP attribute) signs
     * in.</p> <p>For a native username + password user, the
     * <code>ProviderAttributeValue</code> for the <code>DestinationUser</code> should
     * be the username in the user pool. For a federated user, it should be the
     * provider-specific <code>user_id</code>.</p> <p>The
     * <code>ProviderAttributeName</code> of the <code>DestinationUser</code> is
     * ignored.</p> <p>The <code>ProviderName</code> should be set to
     * <code>Cognito</code> for users in Cognito user pools.</p>  <p>All
     * attributes in the DestinationUser profile must be mutable. If you have assigned
     * the user any immutable custom attributes, the operation won't succeed.</p>
     * 
     */
    inline AdminLinkProviderForUserRequest& WithDestinationUser(ProviderUserIdentifierType&& value) { SetDestinationUser(std::move(value)); return *this;}


    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline const ProviderUserIdentifierType& GetSourceUser() const{ return m_sourceUser; }

    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline bool SourceUserHasBeenSet() const { return m_sourceUserHasBeenSet; }

    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline void SetSourceUser(const ProviderUserIdentifierType& value) { m_sourceUserHasBeenSet = true; m_sourceUser = value; }

    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline void SetSourceUser(ProviderUserIdentifierType&& value) { m_sourceUserHasBeenSet = true; m_sourceUser = std::move(value); }

    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline AdminLinkProviderForUserRequest& WithSourceUser(const ProviderUserIdentifierType& value) { SetSourceUser(value); return *this;}

    /**
     * <p>An external IdP account for a user who doesn't exist yet in the user pool.
     * This user must be a federated user (for example, a SAML or Facebook user), not
     * another native user.</p> <p>If the <code>SourceUser</code> is using a federated
     * social IdP, such as Facebook, Google, or Login with Amazon, you must set the
     * <code>ProviderAttributeName</code> to <code>Cognito_Subject</code>. For social
     * IdPs, the <code>ProviderName</code> will be <code>Facebook</code>,
     * <code>Google</code>, or <code>LoginWithAmazon</code>, and Amazon Cognito will
     * automatically parse the Facebook, Google, and Login with Amazon tokens for
     * <code>id</code>, <code>sub</code>, and <code>user_id</code>, respectively. The
     * <code>ProviderAttributeValue</code> for the user must be the same value as the
     * <code>id</code>, <code>sub</code>, or <code>user_id</code> value found in the
     * social IdP token.</p> <p/> <p>For OIDC, the <code>ProviderAttributeName</code>
     * can be any value that matches a claim in the ID token, or that your app
     * retrieves from the <code>userInfo</code> endpoint. You must map the claim to a
     * user pool attribute in your IdP configuration, and set the user pool attribute
     * name as the value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For SAML, the
     * <code>ProviderAttributeName</code> can be any value that matches a claim in the
     * SAML assertion. To link SAML users based on the subject of the SAML assertion,
     * map the subject to a claim through the SAML IdP and set that claim name as the
     * value of <code>ProviderAttributeName</code> in your
     * <code>AdminLinkProviderForUser</code> request.</p> <p>For both OIDC and SAML
     * users, when you set <code>ProviderAttributeName</code> to
     * <code>Cognito_Subject</code>, Amazon Cognito will automatically parse the
     * default unique identifier found in the subject from the IdP token.</p>
     */
    inline AdminLinkProviderForUserRequest& WithSourceUser(ProviderUserIdentifierType&& value) { SetSourceUser(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    ProviderUserIdentifierType m_destinationUser;
    bool m_destinationUserHasBeenSet = false;

    ProviderUserIdentifierType m_sourceUser;
    bool m_sourceUserHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
