/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AuthorizationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The identity provider configuration that you gave when the data store was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/IdentityProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class IdentityProviderConfiguration
  {
  public:
    AWS_HEALTHLAKE_API IdentityProviderConfiguration();
    AWS_HEALTHLAKE_API IdentityProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API IdentityProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline const AuthorizationStrategy& GetAuthorizationStrategy() const{ return m_authorizationStrategy; }

    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline bool AuthorizationStrategyHasBeenSet() const { return m_authorizationStrategyHasBeenSet; }

    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline void SetAuthorizationStrategy(const AuthorizationStrategy& value) { m_authorizationStrategyHasBeenSet = true; m_authorizationStrategy = value; }

    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline void SetAuthorizationStrategy(AuthorizationStrategy&& value) { m_authorizationStrategyHasBeenSet = true; m_authorizationStrategy = std::move(value); }

    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline IdentityProviderConfiguration& WithAuthorizationStrategy(const AuthorizationStrategy& value) { SetAuthorizationStrategy(value); return *this;}

    /**
     * <p>The authorization strategy that you selected when you created the data
     * store.</p>
     */
    inline IdentityProviderConfiguration& WithAuthorizationStrategy(AuthorizationStrategy&& value) { SetAuthorizationStrategy(std::move(value)); return *this;}


    /**
     * <p>If you enabled fine-grained authorization when you created the data
     * store.</p>
     */
    inline bool GetFineGrainedAuthorizationEnabled() const{ return m_fineGrainedAuthorizationEnabled; }

    /**
     * <p>If you enabled fine-grained authorization when you created the data
     * store.</p>
     */
    inline bool FineGrainedAuthorizationEnabledHasBeenSet() const { return m_fineGrainedAuthorizationEnabledHasBeenSet; }

    /**
     * <p>If you enabled fine-grained authorization when you created the data
     * store.</p>
     */
    inline void SetFineGrainedAuthorizationEnabled(bool value) { m_fineGrainedAuthorizationEnabledHasBeenSet = true; m_fineGrainedAuthorizationEnabled = value; }

    /**
     * <p>If you enabled fine-grained authorization when you created the data
     * store.</p>
     */
    inline IdentityProviderConfiguration& WithFineGrainedAuthorizationEnabled(bool value) { SetFineGrainedAuthorizationEnabled(value); return *this;}


    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline IdentityProviderConfiguration& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline IdentityProviderConfiguration& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The JSON metadata elements that you want to use in your identity provider
     * configuration. Required elements are listed based on the launch specification of
     * the SMART application. For more information on all possible elements, see <a
     * href="https://build.fhir.org/ig/HL7/smart-app-launch/conformance.html#metadata">Metadata</a>
     * in SMART's App Launch specification.</p> <p>
     * <code>authorization_endpoint</code>: The URL to the OAuth2 authorization
     * endpoint.</p> <p> <code>grant_types_supported</code>: An array of grant types
     * that are supported at the token endpoint. You must provide at least one grant
     * type option. Valid options are <code>authorization_code</code> and
     * <code>client_credentials</code>.</p> <p> <code>token_endpoint</code>: The URL to
     * the OAuth2 token endpoint.</p> <p> <code>capabilities</code>: An array of
     * strings of the SMART capabilities that the authorization server supports.</p>
     * <p> <code>code_challenge_methods_supported</code>: An array of strings of
     * supported PKCE code challenge methods. You must include the <code>S256</code>
     * method in the array of PKCE code challenge methods.</p>
     */
    inline IdentityProviderConfiguration& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline const Aws::String& GetIdpLambdaArn() const{ return m_idpLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline bool IdpLambdaArnHasBeenSet() const { return m_idpLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline void SetIdpLambdaArn(const Aws::String& value) { m_idpLambdaArnHasBeenSet = true; m_idpLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline void SetIdpLambdaArn(Aws::String&& value) { m_idpLambdaArnHasBeenSet = true; m_idpLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline void SetIdpLambdaArn(const char* value) { m_idpLambdaArnHasBeenSet = true; m_idpLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline IdentityProviderConfiguration& WithIdpLambdaArn(const Aws::String& value) { SetIdpLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline IdentityProviderConfiguration& WithIdpLambdaArn(Aws::String&& value) { SetIdpLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that you want to use to
     * decode the access token created by the authorization server.</p>
     */
    inline IdentityProviderConfiguration& WithIdpLambdaArn(const char* value) { SetIdpLambdaArn(value); return *this;}

  private:

    AuthorizationStrategy m_authorizationStrategy;
    bool m_authorizationStrategyHasBeenSet = false;

    bool m_fineGrainedAuthorizationEnabled;
    bool m_fineGrainedAuthorizationEnabledHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_idpLambdaArn;
    bool m_idpLambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
