/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudhsmv2/CloudHSMV2EndpointRules.h>


namespace Aws
{
namespace CloudHSMV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudHSMV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudHSMV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudHSMV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudHSMV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudHSMV2EndpointProviderBase =
    EndpointProviderBase<CloudHSMV2ClientConfiguration, CloudHSMV2BuiltInParameters, CloudHSMV2ClientContextParameters>;

using CloudHSMV2DefaultEpProviderBase =
    DefaultEndpointProvider<CloudHSMV2ClientConfiguration, CloudHSMV2BuiltInParameters, CloudHSMV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDHSMV2_API CloudHSMV2EndpointProvider : public CloudHSMV2DefaultEpProviderBase
{
public:
    using CloudHSMV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudHSMV2EndpointProvider()
      : CloudHSMV2DefaultEpProviderBase(Aws::CloudHSMV2::CloudHSMV2EndpointRules::Rules)
    {}

    ~CloudHSMV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudHSMV2
} // namespace Aws
