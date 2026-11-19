/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/InvoicingEndpointProvider.h>
#include <aws/invoicing/internal/InvoicingEndpointRules.h>

namespace Aws {
#ifndef AWS_INVOICING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Invoicing::Endpoint::InvoicingClientConfiguration,
                                                   Invoicing::Endpoint::InvoicingBuiltInParameters,
                                                   Invoicing::Endpoint::InvoicingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Invoicing::Endpoint::InvoicingClientConfiguration,
                                                  Invoicing::Endpoint::InvoicingBuiltInParameters,
                                                  Invoicing::Endpoint::InvoicingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Invoicing {
namespace Endpoint {
InvoicingEndpointProvider::InvoicingEndpointProvider()
    : InvoicingDefaultEpProviderBase(Aws::Invoicing::InvoicingEndpointRules::GetRulesBlob(),
                                     Aws::Invoicing::InvoicingEndpointRules::RulesBlobSize) {}

void InvoicingBuiltInParameters::SetFromClientConfiguration(const InvoicingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const InvoicingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void InvoicingBuiltInParameters::SetFromClientConfiguration(const InvoicingClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const InvoicingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void InvoicingBuiltInParameters::SetServiceSpecificParameters(const InvoicingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Invoicing
}  // namespace Aws
