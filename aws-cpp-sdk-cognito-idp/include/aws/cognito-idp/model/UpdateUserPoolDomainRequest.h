/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CustomDomainConfigType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The UpdateUserPoolDomain request input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomainRequest">AWS
   * API Reference</a></p>
   */
  class UpdateUserPoolDomainRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPoolDomain"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline UpdateUserPoolDomainRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline UpdateUserPoolDomainRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain name for the custom domain that hosts the sign-up and sign-in
     * pages for your application. One example might be <code>auth.example.com</code>.
     * </p> <p>This string can include only lowercase letters, numbers, and hyphens.
     * Don't use a hyphen for the first or last character. Use periods to separate
     * subdomain names.</p>
     */
    inline UpdateUserPoolDomainRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline UpdateUserPoolDomainRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline UpdateUserPoolDomainRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user pool that is associated with the custom domain whose
     * certificate you're updating.</p>
     */
    inline UpdateUserPoolDomainRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const{ return m_customDomainConfig; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline void SetCustomDomainConfig(const CustomDomainConfigType& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = value; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline void SetCustomDomainConfig(CustomDomainConfigType&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::move(value); }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline UpdateUserPoolDomainRequest& WithCustomDomainConfig(const CustomDomainConfigType& value) { SetCustomDomainConfig(value); return *this;}

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * pages for your application. Use this object to specify an SSL certificate that
     * is managed by ACM.</p>
     */
    inline UpdateUserPoolDomainRequest& WithCustomDomainConfig(CustomDomainConfigType&& value) { SetCustomDomainConfig(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
