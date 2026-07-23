/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/InvoicingEndpointProvider.h>
#include <aws/invoicing/internal/InvoicingEndpointRules.h>

namespace Aws {
namespace Invoicing {
namespace Endpoint {
InvoicingEndpointProvider::InvoicingEndpointProvider()
    : InvoicingDefaultEpProviderBase(Aws::Invoicing::InvoicingEndpointRules::GetRulesBlob(),
                                     Aws::Invoicing::InvoicingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Invoicing
}  // namespace Aws
