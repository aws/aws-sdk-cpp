/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/SESEndpointProvider.h>
#include <aws/email/internal/SESEndpointRules.h>

namespace Aws {
namespace SES {
namespace Endpoint {
SESEndpointProvider::SESEndpointProvider()
    : SESDefaultEpProviderBase(Aws::SES::SESEndpointRules::GetRulesBlob(), Aws::SES::SESEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SES
}  // namespace Aws
