/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsClientConfiguration.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CleanRooms {
namespace Endpoint {
using CleanRoomsClientConfiguration = Aws::CleanRooms::CleanRoomsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CleanRoomsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLEANROOMS_API CleanRoomsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CleanRoomsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CleanRoomsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CleanRoomsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CleanRoomsClientConfiguration& config);
};

/**
 * The type for the CleanRooms Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CleanRoomsEndpointProviderBase =
    EndpointProviderBase<CleanRoomsClientConfiguration, CleanRoomsBuiltInParameters, CleanRoomsClientContextParameters>;

using CleanRoomsDefaultEpProviderBase =
    BDDEndpointProvider<CleanRoomsClientConfiguration, CleanRoomsBuiltInParameters, CleanRoomsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CleanRooms

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLEANROOMS_EXTERN template class AWS_CLEANROOMS_API Aws::Endpoint::EndpointProviderBase<
    CleanRooms::Endpoint::CleanRoomsClientConfiguration, CleanRooms::Endpoint::CleanRoomsBuiltInParameters,
    CleanRooms::Endpoint::CleanRoomsClientContextParameters>;

AWS_CLEANROOMS_EXTERN template class AWS_CLEANROOMS_API Aws::Endpoint::BDDEndpointProvider<
    CleanRooms::Endpoint::CleanRoomsClientConfiguration, CleanRooms::Endpoint::CleanRoomsBuiltInParameters,
    CleanRooms::Endpoint::CleanRoomsClientContextParameters>;
}  // namespace Endpoint

namespace CleanRooms {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLEANROOMS_API CleanRoomsEndpointProvider : public CleanRoomsDefaultEpProviderBase {
 public:
  using CleanRoomsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CleanRoomsEndpointProvider();

  ~CleanRoomsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CleanRooms
}  // namespace Aws
