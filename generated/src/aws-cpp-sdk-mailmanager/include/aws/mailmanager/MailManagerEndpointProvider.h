/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mailmanager/MailManagerEndpointRules.h>


namespace Aws
{
namespace MailManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MailManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MailManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
using MailManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MailManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MailManagerEndpointProviderBase =
    EndpointProviderBase<MailManagerClientConfiguration, MailManagerBuiltInParameters, MailManagerClientContextParameters>;

using MailManagerDefaultEpProviderBase =
    DefaultEndpointProvider<MailManagerClientConfiguration, MailManagerBuiltInParameters, MailManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MAILMANAGER_API MailManagerEndpointProvider : public MailManagerDefaultEpProviderBase
{
public:
    using MailManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MailManagerEndpointProvider()
      : MailManagerDefaultEpProviderBase(Aws::MailManager::MailManagerEndpointRules::GetRulesBlob(), Aws::MailManager::MailManagerEndpointRules::RulesBlobSize)
    {}

    ~MailManagerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MailManager
} // namespace Aws
