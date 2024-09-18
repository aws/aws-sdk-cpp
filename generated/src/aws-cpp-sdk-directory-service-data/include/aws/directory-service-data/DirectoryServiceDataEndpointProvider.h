/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/directory-service-data/DirectoryServiceDataEndpointRules.h>


namespace Aws
{
namespace DirectoryServiceData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DirectoryServiceDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DirectoryServiceDataClientConfiguration = Aws::Client::GenericClientConfiguration;
using DirectoryServiceDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DirectoryServiceData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectoryServiceDataEndpointProviderBase =
    EndpointProviderBase<DirectoryServiceDataClientConfiguration, DirectoryServiceDataBuiltInParameters, DirectoryServiceDataClientContextParameters>;

using DirectoryServiceDataDefaultEpProviderBase =
    DefaultEndpointProvider<DirectoryServiceDataClientConfiguration, DirectoryServiceDataBuiltInParameters, DirectoryServiceDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTORYSERVICEDATA_API DirectoryServiceDataEndpointProvider : public DirectoryServiceDataDefaultEpProviderBase
{
public:
    using DirectoryServiceDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DirectoryServiceDataEndpointProvider()
      : DirectoryServiceDataDefaultEpProviderBase(Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::GetRulesBlob(), Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::RulesBlobSize)
    {}

    ~DirectoryServiceDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DirectoryServiceData
} // namespace Aws
