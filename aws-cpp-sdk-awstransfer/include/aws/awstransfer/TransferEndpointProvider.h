/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/awstransfer/TransferEndpointRules.h>


namespace Aws
{
namespace Transfer
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TransferClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TransferClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using TransferBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Transfer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TransferEndpointProviderBase =
    EndpointProviderBase<TransferClientConfiguration, TransferBuiltInParameters, TransferClientContextParameters>;

using TransferDefaultEpProviderBase =
    DefaultEndpointProvider<TransferClientConfiguration, TransferBuiltInParameters, TransferClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSFER_API TransferEndpointProvider : public TransferDefaultEpProviderBase
{
public:
    using TransferResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TransferEndpointProvider()
      : TransferDefaultEpProviderBase(Aws::Transfer::TransferEndpointRules::Rules)
    {}

    ~TransferEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Transfer
} // namespace Aws
