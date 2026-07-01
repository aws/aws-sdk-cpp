/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/ACMEndpointProvider.h>

namespace Aws {
#ifndef AWS_ACM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ACM::Endpoint::ACMClientConfiguration, ACM::Endpoint::ACMBuiltInParameters,
                                                   ACM::Endpoint::ACMClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<ACM::Endpoint::ACMClientConfiguration, ACM::Endpoint::ACMBuiltInParameters,
                                                      ACM::Endpoint::ACMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ACM {
namespace Endpoint {
void ACMClientContextParameters::SetServiceType(Aws::String value) {
  return SetStringParameter(Aws::String("ServiceType"), std::move(value));
}
const ACMClientContextParameters::ClientContextParameters::EndpointParameter& ACMClientContextParameters::GetServiceType() const {
  return GetParameter("ServiceType");
}
}  // namespace Endpoint
}  // namespace ACM
}  // namespace Aws
