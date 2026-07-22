/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointProvider.h>
#include <aws/elasticbeanstalk/internal/ElasticBeanstalkEndpointRules.h>

namespace Aws {
namespace ElasticBeanstalk {
namespace Endpoint {
ElasticBeanstalkEndpointProvider::ElasticBeanstalkEndpointProvider()
    : ElasticBeanstalkDefaultEpProviderBase(Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::GetRulesBlob(),
                                            Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElasticBeanstalk
}  // namespace Aws
