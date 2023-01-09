﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointRules.h>


namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTJobsDataPlaneClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTJobsDataPlaneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTJobsDataPlaneBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTJobsDataPlane Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTJobsDataPlaneEndpointProviderBase =
    EndpointProviderBase<IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlaneBuiltInParameters, IoTJobsDataPlaneClientContextParameters>;

using IoTJobsDataPlaneDefaultEpProviderBase =
    DefaultEndpointProvider<IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlaneBuiltInParameters, IoTJobsDataPlaneClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTJOBSDATAPLANE_API IoTJobsDataPlaneEndpointProvider : public IoTJobsDataPlaneDefaultEpProviderBase
{
public:
    using IoTJobsDataPlaneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTJobsDataPlaneEndpointProvider()
      : IoTJobsDataPlaneDefaultEpProviderBase(Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::GetRulesBlob(), Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::RulesBlobSize)
    {}

    ~IoTJobsDataPlaneEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTJobsDataPlane
} // namespace Aws
