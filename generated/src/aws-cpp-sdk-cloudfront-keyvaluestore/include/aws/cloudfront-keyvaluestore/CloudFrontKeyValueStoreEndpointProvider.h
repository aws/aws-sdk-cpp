/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointRules.h>


namespace Aws
{
namespace CloudFrontKeyValueStore
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudFrontKeyValueStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudFrontKeyValueStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudFrontKeyValueStoreBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudFrontKeyValueStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFrontKeyValueStoreEndpointProviderBase =
    EndpointProviderBase<CloudFrontKeyValueStoreClientConfiguration, CloudFrontKeyValueStoreBuiltInParameters, CloudFrontKeyValueStoreClientContextParameters>;

using CloudFrontKeyValueStoreDefaultEpProviderBase =
    DefaultEndpointProvider<CloudFrontKeyValueStoreClientConfiguration, CloudFrontKeyValueStoreBuiltInParameters, CloudFrontKeyValueStoreClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFRONTKEYVALUESTORE_API CloudFrontKeyValueStoreEndpointProvider : public CloudFrontKeyValueStoreDefaultEpProviderBase
{
public:
    using CloudFrontKeyValueStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudFrontKeyValueStoreEndpointProvider()
      : CloudFrontKeyValueStoreDefaultEpProviderBase(Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::GetRulesBlob(), Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::RulesBlobSize)
    {}

    ~CloudFrontKeyValueStoreEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudFrontKeyValueStore
} // namespace Aws
