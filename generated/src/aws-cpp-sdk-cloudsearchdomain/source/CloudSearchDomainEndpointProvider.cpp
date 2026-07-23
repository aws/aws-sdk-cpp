/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <aws/cloudsearchdomain/internal/CloudSearchDomainEndpointRules.h>

namespace Aws {
namespace CloudSearchDomain {
namespace Endpoint {
CloudSearchDomainEndpointProvider::CloudSearchDomainEndpointProvider()
    : CloudSearchDomainDefaultEpProviderBase(Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::GetRulesBlob(),
                                             Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudSearchDomain
}  // namespace Aws
