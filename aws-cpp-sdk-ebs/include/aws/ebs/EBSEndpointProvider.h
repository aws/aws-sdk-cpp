/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ebs/EBSEndpointRules.h>


namespace Aws
{
namespace EBS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EBSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EBSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EBSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EBS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EBSEndpointProviderBase =
    EndpointProviderBase<EBSClientConfiguration, EBSBuiltInParameters, EBSClientContextParameters>;

using EBSDefaultEpProviderBase =
    DefaultEndpointProvider<EBSClientConfiguration, EBSBuiltInParameters, EBSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EBS_API EBSEndpointProvider : public EBSDefaultEpProviderBase
{
public:
    using EBSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EBSEndpointProvider()
      : EBSDefaultEpProviderBase(Aws::EBS::EBSEndpointRules::Rules)
    {}

    ~EBSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EBS
} // namespace Aws
