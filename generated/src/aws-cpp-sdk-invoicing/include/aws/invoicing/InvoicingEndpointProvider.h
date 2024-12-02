/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/invoicing/InvoicingEndpointRules.h>


namespace Aws
{
namespace Invoicing
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using InvoicingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using InvoicingClientConfiguration = Aws::Client::GenericClientConfiguration;
using InvoicingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Invoicing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InvoicingEndpointProviderBase =
    EndpointProviderBase<InvoicingClientConfiguration, InvoicingBuiltInParameters, InvoicingClientContextParameters>;

using InvoicingDefaultEpProviderBase =
    DefaultEndpointProvider<InvoicingClientConfiguration, InvoicingBuiltInParameters, InvoicingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INVOICING_API InvoicingEndpointProvider : public InvoicingDefaultEpProviderBase
{
public:
    using InvoicingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    InvoicingEndpointProvider()
      : InvoicingDefaultEpProviderBase(Aws::Invoicing::InvoicingEndpointRules::GetRulesBlob(), Aws::Invoicing::InvoicingEndpointRules::RulesBlobSize)
    {}

    ~InvoicingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Invoicing
} // namespace Aws
