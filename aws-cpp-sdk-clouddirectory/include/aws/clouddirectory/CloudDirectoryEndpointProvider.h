/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/clouddirectory/CloudDirectoryEndpointRules.h>


namespace Aws
{
namespace CloudDirectory
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudDirectoryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudDirectoryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudDirectoryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudDirectory Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudDirectoryEndpointProviderBase =
    EndpointProviderBase<CloudDirectoryClientConfiguration, CloudDirectoryBuiltInParameters, CloudDirectoryClientContextParameters>;

using CloudDirectoryDefaultEpProviderBase =
    DefaultEndpointProvider<CloudDirectoryClientConfiguration, CloudDirectoryBuiltInParameters, CloudDirectoryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDDIRECTORY_API CloudDirectoryEndpointProvider : public CloudDirectoryDefaultEpProviderBase
{
public:
    using CloudDirectoryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudDirectoryEndpointProvider()
      : CloudDirectoryDefaultEpProviderBase(Aws::CloudDirectory::CloudDirectoryEndpointRules::Rules)
    {}

    ~CloudDirectoryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudDirectory
} // namespace Aws
