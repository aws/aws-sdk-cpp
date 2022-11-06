/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/auditmanager/AuditManagerEndpointRules.h>


namespace Aws
{
namespace AuditManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AuditManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AuditManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AuditManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AuditManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AuditManagerEndpointProviderBase =
    EndpointProviderBase<AuditManagerClientConfiguration, AuditManagerBuiltInParameters, AuditManagerClientContextParameters>;

using AuditManagerDefaultEpProviderBase =
    DefaultEndpointProvider<AuditManagerClientConfiguration, AuditManagerBuiltInParameters, AuditManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AUDITMANAGER_API AuditManagerEndpointProvider : public AuditManagerDefaultEpProviderBase
{
public:
    using AuditManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AuditManagerEndpointProvider()
      : AuditManagerDefaultEpProviderBase(Aws::AuditManager::AuditManagerEndpointRules::Rules)
    {}

    ~AuditManagerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AuditManager
} // namespace Aws
