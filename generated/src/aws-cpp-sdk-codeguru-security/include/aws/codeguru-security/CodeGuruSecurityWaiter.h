/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurityClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeGuruSecurity {

template <typename DerivedClient = CodeGuruSecurityClient>
class CodeGuruSecurityWaiter {
 public:
};
}  // namespace CodeGuruSecurity
}  // namespace Aws
