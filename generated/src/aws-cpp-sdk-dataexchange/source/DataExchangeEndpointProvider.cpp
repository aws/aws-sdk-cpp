/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/DataExchangeEndpointProvider.h>
#include <aws/dataexchange/internal/DataExchangeEndpointRules.h>

namespace Aws {
#ifndef AWS_DATAEXCHANGE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DataExchange::Endpoint::DataExchangeClientConfiguration,
                                                   DataExchange::Endpoint::DataExchangeBuiltInParameters,
                                                   DataExchange::Endpoint::DataExchangeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DataExchange::Endpoint::DataExchangeClientConfiguration,
                                                  DataExchange::Endpoint::DataExchangeBuiltInParameters,
                                                  DataExchange::Endpoint::DataExchangeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DataExchange {
namespace Endpoint {
DataExchangeEndpointProvider::DataExchangeEndpointProvider()
    : DataExchangeDefaultEpProviderBase(Aws::DataExchange::DataExchangeEndpointRules::GetRulesBlob(),
                                        Aws::DataExchange::DataExchangeEndpointRules::RulesBlobSize) {}

void DataExchangeBuiltInParameters::SetFromClientConfiguration(const DataExchangeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DataExchangeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DataExchangeBuiltInParameters::SetFromClientConfiguration(const DataExchangeClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DataExchangeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DataExchangeBuiltInParameters::SetServiceSpecificParameters(const DataExchangeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DataExchange
}  // namespace Aws
