/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudhsm/CloudHSMEndpointRules.h>


namespace Aws
{
namespace CloudHSM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudHSMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudHSMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudHSMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudHSM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudHSMEndpointProviderBase =
    EndpointProviderBase<CloudHSMClientConfiguration, CloudHSMBuiltInParameters, CloudHSMClientContextParameters>;

using CloudHSMDefaultEpProviderBase =
    DefaultEndpointProvider<CloudHSMClientConfiguration, CloudHSMBuiltInParameters, CloudHSMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDHSM_API CloudHSMEndpointProvider : public CloudHSMDefaultEpProviderBase
{
public:
    using CloudHSMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudHSMEndpointProvider()
      : CloudHSMDefaultEpProviderBase(Aws::CloudHSM::CloudHSMEndpointRules::Rules)
    {}

    ~CloudHSMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudHSM
} // namespace Aws
