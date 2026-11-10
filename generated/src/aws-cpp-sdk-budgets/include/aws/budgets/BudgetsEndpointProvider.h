/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsClientConfiguration.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Budgets {
namespace Endpoint {
using BudgetsClientConfiguration = Aws::Budgets::BudgetsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BudgetsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BUDGETS_API BudgetsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BudgetsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BudgetsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BudgetsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BudgetsClientConfiguration& config);
};

/**
 * The type for the Budgets Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BudgetsEndpointProviderBase =
    EndpointProviderBase<BudgetsClientConfiguration, BudgetsBuiltInParameters, BudgetsClientContextParameters>;

using BudgetsDefaultEpProviderBase =
    BDDEndpointProvider<BudgetsClientConfiguration, BudgetsBuiltInParameters, BudgetsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Budgets

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BUDGETS_EXTERN template class AWS_BUDGETS_API
    Aws::Endpoint::EndpointProviderBase<Budgets::Endpoint::BudgetsClientConfiguration, Budgets::Endpoint::BudgetsBuiltInParameters,
                                        Budgets::Endpoint::BudgetsClientContextParameters>;

AWS_BUDGETS_EXTERN template class AWS_BUDGETS_API
    Aws::Endpoint::BDDEndpointProvider<Budgets::Endpoint::BudgetsClientConfiguration, Budgets::Endpoint::BudgetsBuiltInParameters,
                                       Budgets::Endpoint::BudgetsClientContextParameters>;
}  // namespace Endpoint

namespace Budgets {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BUDGETS_API BudgetsEndpointProvider : public BudgetsDefaultEpProviderBase {
 public:
  using BudgetsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BudgetsEndpointProvider();

  ~BudgetsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Budgets
}  // namespace Aws
