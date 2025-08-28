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
   * <p>The identity provider configuration selected when the data store was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/IdentityProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class IdentityProviderConfiguration
  {
  public:
    AWS_HEALTHLAKE_API IdentityProviderConfiguration() = default;
    AWS_HEALTHLAKE_API IdentityProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API IdentityProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization strategy selected when the HealthLake data store is
     * created.</p>  <p>HealthLake provides support for both SMART on FHIR V1 and
     * V2 as described below.</p> <ul> <li> <p> <code>SMART_ON_FHIR_V1</code> – Support
     * for only SMART on FHIR V1, which includes <code>read</code> (read/search) and
     * <code>write</code> (create/update/delete) permissions.</p> </li> <li> <p>
     * <code>SMART_ON_FHIR</code> – Support for both SMART on FHIR V1 and V2, which
     * includes <code>create</code>, <code>read</code>, <code>update</code>,
     * <code>delete</code>, and <code>search</code> permissions.</p> </li> <li> <p>
     * <code>AWS_AUTH</code> – The default HealthLake authorization strategy; not
     * affiliated with SMART on FHIR.</p> </li> </ul> 
     */
    inline AuthorizationStrategy GetAuthorizationStrategy() const { return m_authorizationStrategy; }
    inline bool AuthorizationStrategyHasBeenSet() const { return m_authorizationStrategyHasBeenSet; }
    inline void SetAuthorizationStrategy(AuthorizationStrategy value) { m_authorizationStrategyHasBeenSet = true; m_authorizationStrategy = value; }
    inline IdentityProviderConfiguration& WithAuthorizationStrategy(AuthorizationStrategy value) { SetAuthorizationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter to enable SMART on FHIR fine-grained authorization for the data
     * store.</p>
     */
    inline bool GetFineGrainedAuthorizationEnabled() const { return m_fineGrainedAuthorizationEnabled; }
    inline bool FineGrainedAuthorizationEnabledHasBeenSet() const { return m_fineGrainedAuthorizationEnabledHasBeenSet; }
    inline void SetFineGrainedAuthorizationEnabled(bool value) { m_fineGrainedAuthorizationEnabledHasBeenSet = true; m_fineGrainedAuthorizationEnabled = value; }
    inline IdentityProviderConfiguration& WithFineGrainedAuthorizationEnabled(bool value) { SetFineGrainedAuthorizationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON metadata elements to use in your identity provider configuration.
     * Required elements are listed based on the launch specification of the SMART
     * application. For more information on all possible elements, see <a
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
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    IdentityProviderConfiguration& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to use to decode the
     * access token created by the authorization server.</p>
     */
    inline const Aws::String& GetIdpLambdaArn() const { return m_idpLambdaArn; }
    inline bool IdpLambdaArnHasBeenSet() const { return m_idpLambdaArnHasBeenSet; }
    template<typename IdpLambdaArnT = Aws::String>
    void SetIdpLambdaArn(IdpLambdaArnT&& value) { m_idpLambdaArnHasBeenSet = true; m_idpLambdaArn = std::forward<IdpLambdaArnT>(value); }
    template<typename IdpLambdaArnT = Aws::String>
    IdentityProviderConfiguration& WithIdpLambdaArn(IdpLambdaArnT&& value) { SetIdpLambdaArn(std::forward<IdpLambdaArnT>(value)); return *this;}
    ///@}
  private:

    AuthorizationStrategy m_authorizationStrategy{AuthorizationStrategy::NOT_SET};
    bool m_authorizationStrategyHasBeenSet = false;

    bool m_fineGrainedAuthorizationEnabled{false};
    bool m_fineGrainedAuthorizationEnabledHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_idpLambdaArn;
    bool m_idpLambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
