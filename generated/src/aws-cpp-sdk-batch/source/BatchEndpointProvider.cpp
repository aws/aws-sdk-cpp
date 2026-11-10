/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/BatchEndpointProvider.h>
#include <aws/batch/internal/BatchEndpointRules.h>

namespace Aws {
#ifndef AWS_BATCH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Batch::Endpoint::BatchClientConfiguration, Batch::Endpoint::BatchBuiltInParameters,
                                                   Batch::Endpoint::BatchClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Batch::Endpoint::BatchClientConfiguration, Batch::Endpoint::BatchBuiltInParameters,
                                                  Batch::Endpoint::BatchClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Batch {
namespace Endpoint {
BatchEndpointProvider::BatchEndpointProvider()
    : BatchDefaultEpProviderBase(Aws::Batch::BatchEndpointRules::GetRulesBlob(), Aws::Batch::BatchEndpointRules::RulesBlobSize) {}

void BatchBuiltInParameters::SetFromClientConfiguration(const BatchClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BatchClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BatchBuiltInParameters::SetFromClientConfiguration(const BatchClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BatchClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BatchBuiltInParameters::SetServiceSpecificParameters(const BatchClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Batch
}  // namespace Aws
