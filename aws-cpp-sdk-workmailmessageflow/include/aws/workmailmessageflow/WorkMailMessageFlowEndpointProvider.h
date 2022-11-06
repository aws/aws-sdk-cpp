/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointRules.h>


namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkMailMessageFlowClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkMailMessageFlowClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkMailMessageFlowBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkMailMessageFlow Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkMailMessageFlowEndpointProviderBase =
    EndpointProviderBase<WorkMailMessageFlowClientConfiguration, WorkMailMessageFlowBuiltInParameters, WorkMailMessageFlowClientContextParameters>;

using WorkMailMessageFlowDefaultEpProviderBase =
    DefaultEndpointProvider<WorkMailMessageFlowClientConfiguration, WorkMailMessageFlowBuiltInParameters, WorkMailMessageFlowClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKMAILMESSAGEFLOW_API WorkMailMessageFlowEndpointProvider : public WorkMailMessageFlowDefaultEpProviderBase
{
public:
    using WorkMailMessageFlowResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkMailMessageFlowEndpointProvider()
      : WorkMailMessageFlowDefaultEpProviderBase(Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::Rules)
    {}

    ~WorkMailMessageFlowEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkMailMessageFlow
} // namespace Aws
