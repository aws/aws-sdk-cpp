/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/DataExchangeEndpointProvider.h>
#include <aws/dataexchange/internal/DataExchangeEndpointRules.h>

namespace Aws {
namespace DataExchange {
namespace Endpoint {
DataExchangeEndpointProvider::DataExchangeEndpointProvider()
    : DataExchangeDefaultEpProviderBase(Aws::DataExchange::DataExchangeEndpointRules::GetRulesBlob(),
                                        Aws::DataExchange::DataExchangeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DataExchange
}  // namespace Aws
