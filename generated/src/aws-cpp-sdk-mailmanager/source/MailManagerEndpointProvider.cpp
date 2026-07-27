/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/MailManagerEndpointProvider.h>
#include <aws/mailmanager/internal/MailManagerEndpointRules.h>

namespace Aws {
namespace MailManager {
namespace Endpoint {
MailManagerEndpointProvider::MailManagerEndpointProvider()
    : MailManagerDefaultEpProviderBase(Aws::MailManager::MailManagerEndpointRules::GetRulesBlob(),
                                       Aws::MailManager::MailManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MailManager
}  // namespace Aws
