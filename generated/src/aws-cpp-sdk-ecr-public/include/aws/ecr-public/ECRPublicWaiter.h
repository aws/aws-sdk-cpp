/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ecr-public/ECRPublicClient.h>

#include <algorithm>

namespace Aws {
namespace ECRPublic {

template <typename DerivedClient = ECRPublicClient>
class ECRPublicWaiter {
 public:
};
}  // namespace ECRPublic
}  // namespace Aws
