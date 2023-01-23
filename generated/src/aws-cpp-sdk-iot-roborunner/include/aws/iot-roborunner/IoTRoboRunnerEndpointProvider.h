﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-roborunner/IoTRoboRunnerEndpointRules.h>


namespace Aws
{
namespace IoTRoboRunner
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTRoboRunnerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTRoboRunnerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTRoboRunnerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTRoboRunner Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTRoboRunnerEndpointProviderBase =
    EndpointProviderBase<IoTRoboRunnerClientConfiguration, IoTRoboRunnerBuiltInParameters, IoTRoboRunnerClientContextParameters>;

using IoTRoboRunnerDefaultEpProviderBase =
    DefaultEndpointProvider<IoTRoboRunnerClientConfiguration, IoTRoboRunnerBuiltInParameters, IoTRoboRunnerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTROBORUNNER_API IoTRoboRunnerEndpointProvider : public IoTRoboRunnerDefaultEpProviderBase
{
public:
    using IoTRoboRunnerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTRoboRunnerEndpointProvider()
      : IoTRoboRunnerDefaultEpProviderBase(Aws::IoTRoboRunner::IoTRoboRunnerEndpointRules::GetRulesBlob(), Aws::IoTRoboRunner::IoTRoboRunnerEndpointRules::RulesBlobSize)
    {}

    ~IoTRoboRunnerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTRoboRunner
} // namespace Aws
