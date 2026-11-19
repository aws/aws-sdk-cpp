/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/DSQLEndpointProvider.h>
#include <aws/dsql/internal/DSQLEndpointRules.h>

namespace Aws {
#ifndef AWS_DSQL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DSQL::Endpoint::DSQLClientConfiguration, DSQL::Endpoint::DSQLBuiltInParameters,
                                                   DSQL::Endpoint::DSQLClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DSQL::Endpoint::DSQLClientConfiguration, DSQL::Endpoint::DSQLBuiltInParameters,
                                                  DSQL::Endpoint::DSQLClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DSQL {
namespace Endpoint {
DSQLEndpointProvider::DSQLEndpointProvider()
    : DSQLDefaultEpProviderBase(Aws::DSQL::DSQLEndpointRules::GetRulesBlob(), Aws::DSQL::DSQLEndpointRules::RulesBlobSize) {}

void DSQLBuiltInParameters::SetFromClientConfiguration(const DSQLClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DSQLClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DSQLBuiltInParameters::SetFromClientConfiguration(const DSQLClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DSQLClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DSQLBuiltInParameters::SetServiceSpecificParameters(const DSQLClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace DSQL
}  // namespace Aws
