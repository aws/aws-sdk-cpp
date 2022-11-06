/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workdocs/WorkDocsEndpointRules.h>


namespace Aws
{
namespace WorkDocs
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkDocsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkDocsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkDocsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkDocs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkDocsEndpointProviderBase =
    EndpointProviderBase<WorkDocsClientConfiguration, WorkDocsBuiltInParameters, WorkDocsClientContextParameters>;

using WorkDocsDefaultEpProviderBase =
    DefaultEndpointProvider<WorkDocsClientConfiguration, WorkDocsBuiltInParameters, WorkDocsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKDOCS_API WorkDocsEndpointProvider : public WorkDocsDefaultEpProviderBase
{
public:
    using WorkDocsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkDocsEndpointProvider()
      : WorkDocsDefaultEpProviderBase(Aws::WorkDocs::WorkDocsEndpointRules::Rules)
    {}

    ~WorkDocsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkDocs
} // namespace Aws
