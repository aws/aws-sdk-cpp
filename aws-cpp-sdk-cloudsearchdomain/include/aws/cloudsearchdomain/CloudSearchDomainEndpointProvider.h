/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudsearchdomain/CloudSearchDomainEndpointRules.h>


namespace Aws
{
namespace CloudSearchDomain
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudSearchDomainClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudSearchDomainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudSearchDomainBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudSearchDomain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudSearchDomainEndpointProviderBase =
    EndpointProviderBase<CloudSearchDomainClientConfiguration, CloudSearchDomainBuiltInParameters, CloudSearchDomainClientContextParameters>;

using CloudSearchDomainDefaultEpProviderBase =
    DefaultEndpointProvider<CloudSearchDomainClientConfiguration, CloudSearchDomainBuiltInParameters, CloudSearchDomainClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDSEARCHDOMAIN_API CloudSearchDomainEndpointProvider : public CloudSearchDomainDefaultEpProviderBase
{
public:
    using CloudSearchDomainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudSearchDomainEndpointProvider()
      : CloudSearchDomainDefaultEpProviderBase(Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::Rules)
    {}

    ~CloudSearchDomainEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudSearchDomain
} // namespace Aws
