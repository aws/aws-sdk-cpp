/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/auth/bearer-token-provider/AWSBearerTokenProviderBase.h>
#include <aws/core/auth/bearer-token-provider/DefaultBearerTokenProviderChain.h>
#include <aws/core/auth/bearer-token-provider/SSOBearerTokenProvider.h>
#include <aws/core/auth/bearer-token-provider/StaticBearerTokenProvider.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/core/auth/signer/AWSAuthBearerSigner.h>
#include <aws/core/platform/Environment.h>
#include <smithy/identity/identity/AwsBearerTokenIdentity.h>
#include <smithy/identity/resolver/AwsBearerTokenIdentityResolver.h>
#include <smithy/identity/resolver/AwsIdentityResolverBase.h>

namespace Aws {
namespace BedrockRuntime {

class BedrockRuntimeAwsBearerTokenIdentityResolver : public smithy::AwsBearerTokenIdentityResolver {
 public:
  using IdentityT = smithy::AwsBearerTokenIdentity;
  virtual ~BedrockRuntimeAwsBearerTokenIdentityResolver() = default;

  BedrockRuntimeAwsBearerTokenIdentityResolver() {
    m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider"));
    const Aws::String bedrockToken = Aws::Environment::GetEnv("AWS_BEARER_TOKEN_BEDROCK");
    if (!bedrockToken.empty()) {
      m_providerChainLegacy.emplace_back(
          Aws::MakeShared<Aws::Auth::StaticAWSBearerTokenProvider>("StaticAWSBearerTokenProvider", bedrockToken));
    }
  };

  BedrockRuntimeAwsBearerTokenIdentityResolver(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration &config) {
    m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider", config.profile));
    const Aws::String bedrockToken = Aws::Environment::GetEnv("AWS_BEARER_TOKEN_BEDROCK");
    if (!bedrockToken.empty()) {
      m_providerChainLegacy.emplace_back(
          Aws::MakeShared<Aws::Auth::StaticAWSBearerTokenProvider>("StaticAWSBearerTokenProvider", bedrockToken));
    }
  }

  ResolveIdentityFutureOutcome virtual getIdentity(const IdentityProperties &identityProperties,
                                                   const AdditionalParameters &additionalParameters) override {
    auto outcome = AwsBearerTokenIdentityResolver::getIdentity(identityProperties, additionalParameters);
    outcome.GetResult()->AddUserAgentFeature(Aws::Client::UserAgentFeature::BEARER_SERVICE_ENV_VARS);
    return outcome;
  }
};

}  // namespace BedrockRuntime
}  // namespace Aws