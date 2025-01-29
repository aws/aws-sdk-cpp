/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespace_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceEndpointRules.h>


namespace Aws
{
namespace RestXmlProtocolNamespace
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RestXmlProtocolNamespaceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RestXmlProtocolNamespaceClientConfiguration = Aws::Client::GenericClientConfiguration;
using RestXmlProtocolNamespaceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RestXmlProtocolNamespace Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RestXmlProtocolNamespaceEndpointProviderBase =
    EndpointProviderBase<RestXmlProtocolNamespaceClientConfiguration, RestXmlProtocolNamespaceBuiltInParameters, RestXmlProtocolNamespaceClientContextParameters>;

using RestXmlProtocolNamespaceDefaultEpProviderBase =
    DefaultEndpointProvider<RestXmlProtocolNamespaceClientConfiguration, RestXmlProtocolNamespaceBuiltInParameters, RestXmlProtocolNamespaceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESTXMLPROTOCOLNAMESPACE_API RestXmlProtocolNamespaceEndpointProvider : public RestXmlProtocolNamespaceDefaultEpProviderBase
{
public:
    using RestXmlProtocolNamespaceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RestXmlProtocolNamespaceEndpointProvider()
      : RestXmlProtocolNamespaceDefaultEpProviderBase(Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceEndpointRules::GetRulesBlob(), Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceEndpointRules::RulesBlobSize)
    {}

    ~RestXmlProtocolNamespaceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RestXmlProtocolNamespace
} // namespace Aws
