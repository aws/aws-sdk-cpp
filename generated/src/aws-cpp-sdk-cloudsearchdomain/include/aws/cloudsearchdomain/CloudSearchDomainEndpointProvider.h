/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomainClientConfiguration.h>
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudSearchDomain {
namespace Endpoint {
using CloudSearchDomainClientConfiguration = Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudSearchDomainClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDSEARCHDOMAIN_API CloudSearchDomainBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudSearchDomainBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudSearchDomainClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudSearchDomainClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudSearchDomainClientConfiguration& config);
};

/**
 * The type for the CloudSearchDomain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudSearchDomainEndpointProviderBase = EndpointProviderBase<CloudSearchDomainClientConfiguration, CloudSearchDomainBuiltInParameters,
                                                                   CloudSearchDomainClientContextParameters>;

using CloudSearchDomainDefaultEpProviderBase =
    BDDEndpointProvider<CloudSearchDomainClientConfiguration, CloudSearchDomainBuiltInParameters, CloudSearchDomainClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudSearchDomain

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDSEARCHDOMAIN_EXTERN template class AWS_CLOUDSEARCHDOMAIN_API Aws::Endpoint::EndpointProviderBase<
    CloudSearchDomain::Endpoint::CloudSearchDomainClientConfiguration, CloudSearchDomain::Endpoint::CloudSearchDomainBuiltInParameters,
    CloudSearchDomain::Endpoint::CloudSearchDomainClientContextParameters>;

AWS_CLOUDSEARCHDOMAIN_EXTERN template class AWS_CLOUDSEARCHDOMAIN_API Aws::Endpoint::BDDEndpointProvider<
    CloudSearchDomain::Endpoint::CloudSearchDomainClientConfiguration, CloudSearchDomain::Endpoint::CloudSearchDomainBuiltInParameters,
    CloudSearchDomain::Endpoint::CloudSearchDomainClientContextParameters>;
}  // namespace Endpoint

namespace CloudSearchDomain {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDSEARCHDOMAIN_API CloudSearchDomainEndpointProvider : public CloudSearchDomainDefaultEpProviderBase {
 public:
  using CloudSearchDomainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudSearchDomainEndpointProvider();

  ~CloudSearchDomainEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudSearchDomain
}  // namespace Aws
