/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutequipment/LookoutEquipmentEndpointRules.h>


namespace Aws
{
namespace LookoutEquipment
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LookoutEquipmentClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LookoutEquipmentClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LookoutEquipmentBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LookoutEquipment Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LookoutEquipmentEndpointProviderBase =
    EndpointProviderBase<LookoutEquipmentClientConfiguration, LookoutEquipmentBuiltInParameters, LookoutEquipmentClientContextParameters>;

using LookoutEquipmentDefaultEpProviderBase =
    DefaultEndpointProvider<LookoutEquipmentClientConfiguration, LookoutEquipmentBuiltInParameters, LookoutEquipmentClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentEndpointProvider : public LookoutEquipmentDefaultEpProviderBase
{
public:
    using LookoutEquipmentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LookoutEquipmentEndpointProvider()
      : LookoutEquipmentDefaultEpProviderBase(Aws::LookoutEquipment::LookoutEquipmentEndpointRules::Rules)
    {}

    ~LookoutEquipmentEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LookoutEquipment
} // namespace Aws
