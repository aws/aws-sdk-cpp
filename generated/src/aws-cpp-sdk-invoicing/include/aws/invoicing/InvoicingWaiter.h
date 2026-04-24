/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/invoicing/InvoicingClient.h>

#include <algorithm>

namespace Aws {
namespace Invoicing {

template <typename DerivedClient = InvoicingClient>
class InvoicingWaiter {
 public:
};
}  // namespace Invoicing
}  // namespace Aws
