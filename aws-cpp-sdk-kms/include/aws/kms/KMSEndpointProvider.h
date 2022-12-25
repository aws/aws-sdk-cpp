/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kms/KMSEndpointRules.h>


namespace Aws
{
namespace KMS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KMSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KMSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KMSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KMS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KMSEndpointProviderBase =
    EndpointProviderBase<KMSClientConfiguration, KMSBuiltInParameters, KMSClientContextParameters>;

using KMSDefaultEpProviderBase =
    DefaultEndpointProvider<KMSClientConfiguration, KMSBuiltInParameters, KMSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KMS_API KMSEndpointProvider : public KMSDefaultEpProviderBase
{
public:
    using KMSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KMSEndpointProvider()
      : KMSDefaultEpProviderBase(Aws::KMS::KMSEndpointRules::Rules)
    {}

    ~KMSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KMS
} // namespace Aws
