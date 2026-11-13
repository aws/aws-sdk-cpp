/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/DataExchangeClientConfiguration.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>

namespace Aws {
namespace DataExchange {
namespace Endpoint {
using DataExchangeClientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DataExchangeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DATAEXCHANGE_API DataExchangeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DataExchangeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DataExchangeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DataExchangeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DataExchangeClientConfiguration& config);
};

/**
 * The type for the DataExchange Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataExchangeEndpointProviderBase =
    EndpointProviderBase<DataExchangeClientConfiguration, DataExchangeBuiltInParameters, DataExchangeClientContextParameters>;

using DataExchangeDefaultEpProviderBase =
    BDDEndpointProvider<DataExchangeClientConfiguration, DataExchangeBuiltInParameters, DataExchangeClientContextParameters>;

}  // namespace Endpoint
}  // namespace DataExchange

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DATAEXCHANGE_EXTERN template class AWS_DATAEXCHANGE_API Aws::Endpoint::EndpointProviderBase<
    DataExchange::Endpoint::DataExchangeClientConfiguration, DataExchange::Endpoint::DataExchangeBuiltInParameters,
    DataExchange::Endpoint::DataExchangeClientContextParameters>;

AWS_DATAEXCHANGE_EXTERN template class AWS_DATAEXCHANGE_API Aws::Endpoint::BDDEndpointProvider<
    DataExchange::Endpoint::DataExchangeClientConfiguration, DataExchange::Endpoint::DataExchangeBuiltInParameters,
    DataExchange::Endpoint::DataExchangeClientContextParameters>;
}  // namespace Endpoint

namespace DataExchange {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DATAEXCHANGE_API DataExchangeEndpointProvider : public DataExchangeDefaultEpProviderBase {
 public:
  using DataExchangeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DataExchangeEndpointProvider();

  ~DataExchangeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DataExchange
}  // namespace Aws
