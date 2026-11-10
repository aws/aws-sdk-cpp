/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearchClientConfiguration.h>
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudSearch {
namespace Endpoint {
using CloudSearchClientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudSearchClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDSEARCH_API CloudSearchBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudSearchBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudSearchClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudSearchClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudSearchClientConfiguration& config);
};

/**
 * The type for the CloudSearch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudSearchEndpointProviderBase =
    EndpointProviderBase<CloudSearchClientConfiguration, CloudSearchBuiltInParameters, CloudSearchClientContextParameters>;

using CloudSearchDefaultEpProviderBase =
    BDDEndpointProvider<CloudSearchClientConfiguration, CloudSearchBuiltInParameters, CloudSearchClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudSearch

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDSEARCH_EXTERN template class AWS_CLOUDSEARCH_API Aws::Endpoint::EndpointProviderBase<
    CloudSearch::Endpoint::CloudSearchClientConfiguration, CloudSearch::Endpoint::CloudSearchBuiltInParameters,
    CloudSearch::Endpoint::CloudSearchClientContextParameters>;

AWS_CLOUDSEARCH_EXTERN template class AWS_CLOUDSEARCH_API Aws::Endpoint::BDDEndpointProvider<
    CloudSearch::Endpoint::CloudSearchClientConfiguration, CloudSearch::Endpoint::CloudSearchBuiltInParameters,
    CloudSearch::Endpoint::CloudSearchClientContextParameters>;
}  // namespace Endpoint

namespace CloudSearch {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDSEARCH_API CloudSearchEndpointProvider : public CloudSearchDefaultEpProviderBase {
 public:
  using CloudSearchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudSearchEndpointProvider();

  ~CloudSearchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudSearch
}  // namespace Aws
