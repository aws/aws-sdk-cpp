﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoTEndpointRules.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTClientConfiguration = Aws::Client::GenericClientConfiguration;
using IoTBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoT Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTEndpointProviderBase = EndpointProviderBase<IoTClientConfiguration, IoTBuiltInParameters, IoTClientContextParameters>;

using IoTDefaultEpProviderBase = DefaultEndpointProvider<IoTClientConfiguration, IoTBuiltInParameters, IoTClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOT_API IoTEndpointProvider : public IoTDefaultEpProviderBase {
 public:
  using IoTResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTEndpointProvider() : IoTDefaultEpProviderBase(Aws::IoT::IoTEndpointRules::GetRulesBlob(), Aws::IoT::IoTEndpointRules::RulesBlobSize) {}

  ~IoTEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoT
}  // namespace Aws
