/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointProvider.h>
#include <aws/elasticbeanstalk/internal/ElasticBeanstalkEndpointRules.h>

namespace Aws {
#ifndef AWS_ELASTICBEANSTALK_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElasticBeanstalk::Endpoint::ElasticBeanstalkClientConfiguration,
                                                   ElasticBeanstalk::Endpoint::ElasticBeanstalkBuiltInParameters,
                                                   ElasticBeanstalk::Endpoint::ElasticBeanstalkClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElasticBeanstalk::Endpoint::ElasticBeanstalkClientConfiguration,
                                                  ElasticBeanstalk::Endpoint::ElasticBeanstalkBuiltInParameters,
                                                  ElasticBeanstalk::Endpoint::ElasticBeanstalkClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElasticBeanstalk {
namespace Endpoint {
ElasticBeanstalkEndpointProvider::ElasticBeanstalkEndpointProvider()
    : ElasticBeanstalkDefaultEpProviderBase(Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::GetRulesBlob(),
                                            Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::RulesBlobSize) {}

void ElasticBeanstalkBuiltInParameters::SetFromClientConfiguration(const ElasticBeanstalkClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElasticBeanstalkClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElasticBeanstalkBuiltInParameters::SetFromClientConfiguration(const ElasticBeanstalkClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElasticBeanstalkClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElasticBeanstalkBuiltInParameters::SetServiceSpecificParameters(const ElasticBeanstalkClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElasticBeanstalk
}  // namespace Aws
