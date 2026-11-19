/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dsql/DSQLClientConfiguration.h>
#include <aws/dsql/DSQL_EXPORTS.h>

namespace Aws {
namespace DSQL {
namespace Endpoint {
using DSQLClientConfiguration = Aws::DSQL::DSQLClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DSQLClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DSQL_API DSQLBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DSQLBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DSQLClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DSQLClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DSQLClientConfiguration& config);
};

/**
 * The type for the DSQL Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DSQLEndpointProviderBase = EndpointProviderBase<DSQLClientConfiguration, DSQLBuiltInParameters, DSQLClientContextParameters>;

using DSQLDefaultEpProviderBase = BDDEndpointProvider<DSQLClientConfiguration, DSQLBuiltInParameters, DSQLClientContextParameters>;

}  // namespace Endpoint
}  // namespace DSQL

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DSQL_EXTERN template class AWS_DSQL_API Aws::Endpoint::EndpointProviderBase<
    DSQL::Endpoint::DSQLClientConfiguration, DSQL::Endpoint::DSQLBuiltInParameters, DSQL::Endpoint::DSQLClientContextParameters>;

AWS_DSQL_EXTERN template class AWS_DSQL_API Aws::Endpoint::BDDEndpointProvider<
    DSQL::Endpoint::DSQLClientConfiguration, DSQL::Endpoint::DSQLBuiltInParameters, DSQL::Endpoint::DSQLClientContextParameters>;
}  // namespace Endpoint

namespace DSQL {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DSQL_API DSQLEndpointProvider : public DSQLDefaultEpProviderBase {
 public:
  using DSQLResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DSQLEndpointProvider();

  ~DSQLEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DSQL
}  // namespace Aws
