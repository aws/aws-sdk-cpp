/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudtrail-data/CloudTrailDataEndpointRules.h>


namespace Aws
{
namespace CloudTrailData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudTrailDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudTrailDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudTrailDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudTrailData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudTrailDataEndpointProviderBase =
    EndpointProviderBase<CloudTrailDataClientConfiguration, CloudTrailDataBuiltInParameters, CloudTrailDataClientContextParameters>;

using CloudTrailDataDefaultEpProviderBase =
    DefaultEndpointProvider<CloudTrailDataClientConfiguration, CloudTrailDataBuiltInParameters, CloudTrailDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDTRAILDATA_API CloudTrailDataEndpointProvider : public CloudTrailDataDefaultEpProviderBase
{
public:
    using CloudTrailDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudTrailDataEndpointProvider()
      : CloudTrailDataDefaultEpProviderBase(Aws::CloudTrailData::CloudTrailDataEndpointRules::GetRulesBlob(), Aws::CloudTrailData::CloudTrailDataEndpointRules::RulesBlobSize)
    {}

    ~CloudTrailDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudTrailData
} // namespace Aws
