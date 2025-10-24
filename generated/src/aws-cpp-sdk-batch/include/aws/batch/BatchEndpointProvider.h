﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchEndpointRules.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Batch {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BatchClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BatchClientConfiguration = Aws::Client::GenericClientConfiguration;
using BatchBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Batch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BatchEndpointProviderBase = EndpointProviderBase<BatchClientConfiguration, BatchBuiltInParameters, BatchClientContextParameters>;

using BatchDefaultEpProviderBase = DefaultEndpointProvider<BatchClientConfiguration, BatchBuiltInParameters, BatchClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BATCH_API BatchEndpointProvider : public BatchDefaultEpProviderBase {
 public:
  using BatchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BatchEndpointProvider()
      : BatchDefaultEpProviderBase(Aws::Batch::BatchEndpointRules::GetRulesBlob(), Aws::Batch::BatchEndpointRules::RulesBlobSize) {}

  ~BatchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Batch
}  // namespace Aws
