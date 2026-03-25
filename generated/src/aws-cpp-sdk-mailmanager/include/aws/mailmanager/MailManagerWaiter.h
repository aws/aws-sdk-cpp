/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mailmanager/MailManagerClient.h>

#include <algorithm>

namespace Aws {
namespace MailManager {

template <typename DerivedClient = MailManagerClient>
class MailManagerWaiter {
 public:
};
}  // namespace MailManager
}  // namespace Aws
