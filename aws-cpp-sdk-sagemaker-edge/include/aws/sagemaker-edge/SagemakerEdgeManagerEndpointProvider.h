/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointRules.h>


namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SagemakerEdgeManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SagemakerEdgeManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SagemakerEdgeManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SagemakerEdgeManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SagemakerEdgeManagerEndpointProviderBase =
    EndpointProviderBase<SagemakerEdgeManagerClientConfiguration, SagemakerEdgeManagerBuiltInParameters, SagemakerEdgeManagerClientContextParameters>;

using SagemakerEdgeManagerDefaultEpProviderBase =
    DefaultEndpointProvider<SagemakerEdgeManagerClientConfiguration, SagemakerEdgeManagerBuiltInParameters, SagemakerEdgeManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerEndpointProvider : public SagemakerEdgeManagerDefaultEpProviderBase
{
public:
    using SagemakerEdgeManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SagemakerEdgeManagerEndpointProvider()
      : SagemakerEdgeManagerDefaultEpProviderBase(Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::Rules)
    {}

    ~SagemakerEdgeManagerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SagemakerEdgeManager
} // namespace Aws
