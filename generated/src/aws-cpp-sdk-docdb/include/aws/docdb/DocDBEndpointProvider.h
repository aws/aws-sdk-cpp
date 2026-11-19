/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/DocDBClientConfiguration.h>
#include <aws/docdb/DocDB_EXPORTS.h>

namespace Aws {
namespace DocDB {
namespace Endpoint {
using DocDBClientConfiguration = Aws::DocDB::DocDBClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DocDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DOCDB_API DocDBBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DocDBBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DocDBClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DocDBClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DocDBClientConfiguration& config);
};

/**
 * The type for the DocDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DocDBEndpointProviderBase = EndpointProviderBase<DocDBClientConfiguration, DocDBBuiltInParameters, DocDBClientContextParameters>;

using DocDBDefaultEpProviderBase = BDDEndpointProvider<DocDBClientConfiguration, DocDBBuiltInParameters, DocDBClientContextParameters>;

}  // namespace Endpoint
}  // namespace DocDB

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DOCDB_EXTERN template class AWS_DOCDB_API Aws::Endpoint::EndpointProviderBase<
    DocDB::Endpoint::DocDBClientConfiguration, DocDB::Endpoint::DocDBBuiltInParameters, DocDB::Endpoint::DocDBClientContextParameters>;

AWS_DOCDB_EXTERN template class AWS_DOCDB_API Aws::Endpoint::BDDEndpointProvider<
    DocDB::Endpoint::DocDBClientConfiguration, DocDB::Endpoint::DocDBBuiltInParameters, DocDB::Endpoint::DocDBClientContextParameters>;
}  // namespace Endpoint

namespace DocDB {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DOCDB_API DocDBEndpointProvider : public DocDBDefaultEpProviderBase {
 public:
  using DocDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DocDBEndpointProvider();

  ~DocDBEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DocDB
}  // namespace Aws
