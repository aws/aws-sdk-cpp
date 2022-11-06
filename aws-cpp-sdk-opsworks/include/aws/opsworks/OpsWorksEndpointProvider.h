/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/opsworks/OpsWorksEndpointRules.h>


namespace Aws
{
namespace OpsWorks
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OpsWorksClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OpsWorksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OpsWorksBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the OpsWorks Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OpsWorksEndpointProviderBase =
    EndpointProviderBase<OpsWorksClientConfiguration, OpsWorksBuiltInParameters, OpsWorksClientContextParameters>;

using OpsWorksDefaultEpProviderBase =
    DefaultEndpointProvider<OpsWorksClientConfiguration, OpsWorksBuiltInParameters, OpsWorksClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OPSWORKS_API OpsWorksEndpointProvider : public OpsWorksDefaultEpProviderBase
{
public:
    using OpsWorksResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OpsWorksEndpointProvider()
      : OpsWorksDefaultEpProviderBase(Aws::OpsWorks::OpsWorksEndpointRules::Rules)
    {}

    ~OpsWorksEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace OpsWorks
} // namespace Aws
