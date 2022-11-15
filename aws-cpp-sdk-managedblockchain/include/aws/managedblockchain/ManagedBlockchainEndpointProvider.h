/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/managedblockchain/ManagedBlockchainEndpointRules.h>


namespace Aws
{
namespace ManagedBlockchain
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ManagedBlockchainClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ManagedBlockchainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ManagedBlockchainBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ManagedBlockchain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedBlockchainEndpointProviderBase =
    EndpointProviderBase<ManagedBlockchainClientConfiguration, ManagedBlockchainBuiltInParameters, ManagedBlockchainClientContextParameters>;

using ManagedBlockchainDefaultEpProviderBase =
    DefaultEndpointProvider<ManagedBlockchainClientConfiguration, ManagedBlockchainBuiltInParameters, ManagedBlockchainClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainEndpointProvider : public ManagedBlockchainDefaultEpProviderBase
{
public:
    using ManagedBlockchainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ManagedBlockchainEndpointProvider()
      : ManagedBlockchainDefaultEpProviderBase(Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::Rules)
    {}

    ~ManagedBlockchainEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ManagedBlockchain
} // namespace Aws
