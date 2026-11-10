/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/LookoutEquipmentClientConfiguration.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
namespace Endpoint {
using LookoutEquipmentClientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LookoutEquipmentClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LookoutEquipmentBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LookoutEquipmentClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LookoutEquipmentClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LookoutEquipmentClientConfiguration& config);
};

/**
 * The type for the LookoutEquipment Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LookoutEquipmentEndpointProviderBase =
    EndpointProviderBase<LookoutEquipmentClientConfiguration, LookoutEquipmentBuiltInParameters, LookoutEquipmentClientContextParameters>;

using LookoutEquipmentDefaultEpProviderBase =
    BDDEndpointProvider<LookoutEquipmentClientConfiguration, LookoutEquipmentBuiltInParameters, LookoutEquipmentClientContextParameters>;

}  // namespace Endpoint
}  // namespace LookoutEquipment

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LOOKOUTEQUIPMENT_EXTERN template class AWS_LOOKOUTEQUIPMENT_API Aws::Endpoint::EndpointProviderBase<
    LookoutEquipment::Endpoint::LookoutEquipmentClientConfiguration, LookoutEquipment::Endpoint::LookoutEquipmentBuiltInParameters,
    LookoutEquipment::Endpoint::LookoutEquipmentClientContextParameters>;

AWS_LOOKOUTEQUIPMENT_EXTERN template class AWS_LOOKOUTEQUIPMENT_API Aws::Endpoint::BDDEndpointProvider<
    LookoutEquipment::Endpoint::LookoutEquipmentClientConfiguration, LookoutEquipment::Endpoint::LookoutEquipmentBuiltInParameters,
    LookoutEquipment::Endpoint::LookoutEquipmentClientContextParameters>;
}  // namespace Endpoint

namespace LookoutEquipment {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentEndpointProvider : public LookoutEquipmentDefaultEpProviderBase {
 public:
  using LookoutEquipmentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LookoutEquipmentEndpointProvider();

  ~LookoutEquipmentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LookoutEquipment
}  // namespace Aws
