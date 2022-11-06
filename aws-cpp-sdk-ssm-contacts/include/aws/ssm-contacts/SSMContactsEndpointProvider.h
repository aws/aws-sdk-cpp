/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-contacts/SSMContactsEndpointRules.h>


namespace Aws
{
namespace SSMContacts
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSMContactsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSMContactsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSMContactsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSMContacts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMContactsEndpointProviderBase =
    EndpointProviderBase<SSMContactsClientConfiguration, SSMContactsBuiltInParameters, SSMContactsClientContextParameters>;

using SSMContactsDefaultEpProviderBase =
    DefaultEndpointProvider<SSMContactsClientConfiguration, SSMContactsBuiltInParameters, SSMContactsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSMCONTACTS_API SSMContactsEndpointProvider : public SSMContactsDefaultEpProviderBase
{
public:
    using SSMContactsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSMContactsEndpointProvider()
      : SSMContactsDefaultEpProviderBase(Aws::SSMContacts::SSMContactsEndpointRules::Rules)
    {}

    ~SSMContactsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSMContacts
} // namespace Aws
