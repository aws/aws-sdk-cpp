/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearchClientConfiguration.h>
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BackupSearch {
namespace Endpoint {
using BackupSearchClientConfiguration = Aws::BackupSearch::BackupSearchClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BackupSearchClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BACKUPSEARCH_API BackupSearchBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BackupSearchBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BackupSearchClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BackupSearchClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BackupSearchClientConfiguration& config);
};

/**
 * The type for the BackupSearch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BackupSearchEndpointProviderBase =
    EndpointProviderBase<BackupSearchClientConfiguration, BackupSearchBuiltInParameters, BackupSearchClientContextParameters>;

using BackupSearchDefaultEpProviderBase =
    BDDEndpointProvider<BackupSearchClientConfiguration, BackupSearchBuiltInParameters, BackupSearchClientContextParameters>;

}  // namespace Endpoint
}  // namespace BackupSearch

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BACKUPSEARCH_EXTERN template class AWS_BACKUPSEARCH_API Aws::Endpoint::EndpointProviderBase<
    BackupSearch::Endpoint::BackupSearchClientConfiguration, BackupSearch::Endpoint::BackupSearchBuiltInParameters,
    BackupSearch::Endpoint::BackupSearchClientContextParameters>;

AWS_BACKUPSEARCH_EXTERN template class AWS_BACKUPSEARCH_API Aws::Endpoint::BDDEndpointProvider<
    BackupSearch::Endpoint::BackupSearchClientConfiguration, BackupSearch::Endpoint::BackupSearchBuiltInParameters,
    BackupSearch::Endpoint::BackupSearchClientContextParameters>;
}  // namespace Endpoint

namespace BackupSearch {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BACKUPSEARCH_API BackupSearchEndpointProvider : public BackupSearchDefaultEpProviderBase {
 public:
  using BackupSearchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BackupSearchEndpointProvider();

  ~BackupSearchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BackupSearch
}  // namespace Aws
