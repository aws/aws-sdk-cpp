/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/FirehoseEndpointProvider.h>
#include <aws/firehose/internal/FirehoseEndpointRules.h>

namespace Aws {
#ifndef AWS_FIREHOSE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Firehose::Endpoint::FirehoseClientConfiguration,
                                                   Firehose::Endpoint::FirehoseBuiltInParameters,
                                                   Firehose::Endpoint::FirehoseClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Firehose::Endpoint::FirehoseClientConfiguration,
                                                  Firehose::Endpoint::FirehoseBuiltInParameters,
                                                  Firehose::Endpoint::FirehoseClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Firehose {
namespace Endpoint {
FirehoseEndpointProvider::FirehoseEndpointProvider()
    : FirehoseDefaultEpProviderBase(Aws::Firehose::FirehoseEndpointRules::GetRulesBlob(),
                                    Aws::Firehose::FirehoseEndpointRules::RulesBlobSize) {}

void FirehoseBuiltInParameters::SetFromClientConfiguration(const FirehoseClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FirehoseClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FirehoseBuiltInParameters::SetFromClientConfiguration(const FirehoseClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FirehoseClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FirehoseBuiltInParameters::SetServiceSpecificParameters(const FirehoseClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Firehose
}  // namespace Aws
