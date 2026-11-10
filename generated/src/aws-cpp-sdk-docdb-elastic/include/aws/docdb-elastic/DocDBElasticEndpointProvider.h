/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb-elastic/DocDBElasticClientConfiguration.h>
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>

namespace Aws {
namespace DocDBElastic {
namespace Endpoint {
using DocDBElasticClientConfiguration = Aws::DocDBElastic::DocDBElasticClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DocDBElasticClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DOCDBELASTIC_API DocDBElasticBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DocDBElasticBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DocDBElasticClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DocDBElasticClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DocDBElasticClientConfiguration& config);
};

/**
 * The type for the DocDBElastic Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DocDBElasticEndpointProviderBase =
    EndpointProviderBase<DocDBElasticClientConfiguration, DocDBElasticBuiltInParameters, DocDBElasticClientContextParameters>;

using DocDBElasticDefaultEpProviderBase =
    BDDEndpointProvider<DocDBElasticClientConfiguration, DocDBElasticBuiltInParameters, DocDBElasticClientContextParameters>;

}  // namespace Endpoint
}  // namespace DocDBElastic

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DOCDBELASTIC_EXTERN template class AWS_DOCDBELASTIC_API Aws::Endpoint::EndpointProviderBase<
    DocDBElastic::Endpoint::DocDBElasticClientConfiguration, DocDBElastic::Endpoint::DocDBElasticBuiltInParameters,
    DocDBElastic::Endpoint::DocDBElasticClientContextParameters>;

AWS_DOCDBELASTIC_EXTERN template class AWS_DOCDBELASTIC_API Aws::Endpoint::BDDEndpointProvider<
    DocDBElastic::Endpoint::DocDBElasticClientConfiguration, DocDBElastic::Endpoint::DocDBElasticBuiltInParameters,
    DocDBElastic::Endpoint::DocDBElasticClientContextParameters>;
}  // namespace Endpoint

namespace DocDBElastic {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DOCDBELASTIC_API DocDBElasticEndpointProvider : public DocDBElasticDefaultEpProviderBase {
 public:
  using DocDBElasticResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DocDBElasticEndpointProvider();

  ~DocDBElasticEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DocDBElastic
}  // namespace Aws
