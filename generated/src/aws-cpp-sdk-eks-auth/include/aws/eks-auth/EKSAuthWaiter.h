/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/eks-auth/EKSAuthClient.h>

#include <algorithm>

namespace Aws {
namespace EKSAuth {

template <typename DerivedClient = EKSAuthClient>
class EKSAuthWaiter {
 public:
};
}  // namespace EKSAuth
}  // namespace Aws
