/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/eks/EKSEndpointRules.h>


namespace Aws
{
namespace EKS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EKSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EKSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EKSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EKS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EKSEndpointProviderBase =
    EndpointProviderBase<EKSClientConfiguration, EKSBuiltInParameters, EKSClientContextParameters>;

using EKSDefaultEpProviderBase =
    DefaultEndpointProvider<EKSClientConfiguration, EKSBuiltInParameters, EKSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EKS_API EKSEndpointProvider : public EKSDefaultEpProviderBase
{
public:
    using EKSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EKSEndpointProvider()
      : EKSDefaultEpProviderBase(Aws::EKS::EKSEndpointRules::Rules)
    {}

    ~EKSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EKS
} // namespace Aws
