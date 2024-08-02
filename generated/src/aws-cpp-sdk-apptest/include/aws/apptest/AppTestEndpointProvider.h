/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apptest/AppTestEndpointRules.h>


namespace Aws
{
namespace AppTest
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppTestClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppTestClientConfiguration = Aws::Client::GenericClientConfiguration;
using AppTestBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppTest Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppTestEndpointProviderBase =
    EndpointProviderBase<AppTestClientConfiguration, AppTestBuiltInParameters, AppTestClientContextParameters>;

using AppTestDefaultEpProviderBase =
    DefaultEndpointProvider<AppTestClientConfiguration, AppTestBuiltInParameters, AppTestClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPTEST_API AppTestEndpointProvider : public AppTestDefaultEpProviderBase
{
public:
    using AppTestResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppTestEndpointProvider()
      : AppTestDefaultEpProviderBase(Aws::AppTest::AppTestEndpointRules::GetRulesBlob(), Aws::AppTest::AppTestEndpointRules::RulesBlobSize)
    {}

    ~AppTestEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppTest
} // namespace Aws
