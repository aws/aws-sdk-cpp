/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/textract/TextractEndpointRules.h>


namespace Aws
{
namespace Textract
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TextractClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TextractBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TextractEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TextractEndpointProvider,
                                                                        TextractBuiltInParameters,
                                                                        TextractClientContextParameters>;


class TextractEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TextractResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TextractEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Textract::TextractEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TextractResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TextractEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TextractEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Textract
} // namespace Aws
