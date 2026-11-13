/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkClientConfiguration.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>

namespace Aws {
namespace ElasticBeanstalk {
namespace Endpoint {
using ElasticBeanstalkClientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElasticBeanstalkClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELASTICBEANSTALK_API ElasticBeanstalkBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElasticBeanstalkBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElasticBeanstalkClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElasticBeanstalkClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElasticBeanstalkClientConfiguration& config);
};

/**
 * The type for the ElasticBeanstalk Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticBeanstalkEndpointProviderBase =
    EndpointProviderBase<ElasticBeanstalkClientConfiguration, ElasticBeanstalkBuiltInParameters, ElasticBeanstalkClientContextParameters>;

using ElasticBeanstalkDefaultEpProviderBase =
    BDDEndpointProvider<ElasticBeanstalkClientConfiguration, ElasticBeanstalkBuiltInParameters, ElasticBeanstalkClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElasticBeanstalk

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELASTICBEANSTALK_EXTERN template class AWS_ELASTICBEANSTALK_API Aws::Endpoint::EndpointProviderBase<
    ElasticBeanstalk::Endpoint::ElasticBeanstalkClientConfiguration, ElasticBeanstalk::Endpoint::ElasticBeanstalkBuiltInParameters,
    ElasticBeanstalk::Endpoint::ElasticBeanstalkClientContextParameters>;

AWS_ELASTICBEANSTALK_EXTERN template class AWS_ELASTICBEANSTALK_API Aws::Endpoint::BDDEndpointProvider<
    ElasticBeanstalk::Endpoint::ElasticBeanstalkClientConfiguration, ElasticBeanstalk::Endpoint::ElasticBeanstalkBuiltInParameters,
    ElasticBeanstalk::Endpoint::ElasticBeanstalkClientContextParameters>;
}  // namespace Endpoint

namespace ElasticBeanstalk {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICBEANSTALK_API ElasticBeanstalkEndpointProvider : public ElasticBeanstalkDefaultEpProviderBase {
 public:
  using ElasticBeanstalkResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElasticBeanstalkEndpointProvider();

  ~ElasticBeanstalkEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElasticBeanstalk
}  // namespace Aws
