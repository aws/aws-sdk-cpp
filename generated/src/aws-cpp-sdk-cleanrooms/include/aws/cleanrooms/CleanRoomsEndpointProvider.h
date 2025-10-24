﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsEndpointRules.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CleanRooms {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CleanRoomsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CleanRoomsClientConfiguration = Aws::Client::GenericClientConfiguration;
using CleanRoomsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CleanRooms Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CleanRoomsEndpointProviderBase =
    EndpointProviderBase<CleanRoomsClientConfiguration, CleanRoomsBuiltInParameters, CleanRoomsClientContextParameters>;

using CleanRoomsDefaultEpProviderBase =
    DefaultEndpointProvider<CleanRoomsClientConfiguration, CleanRoomsBuiltInParameters, CleanRoomsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLEANROOMS_API CleanRoomsEndpointProvider : public CleanRoomsDefaultEpProviderBase {
 public:
  using CleanRoomsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CleanRoomsEndpointProvider()
      : CleanRoomsDefaultEpProviderBase(Aws::CleanRooms::CleanRoomsEndpointRules::GetRulesBlob(),
                                        Aws::CleanRooms::CleanRoomsEndpointRules::RulesBlobSize) {}

  ~CleanRoomsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CleanRooms
}  // namespace Aws
