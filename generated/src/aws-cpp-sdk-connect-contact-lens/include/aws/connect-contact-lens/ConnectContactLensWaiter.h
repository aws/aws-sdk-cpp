/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLensClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectContactLens {

template <typename DerivedClient = ConnectContactLensClient>
class ConnectContactLensWaiter {
 public:
};
}  // namespace ConnectContactLens
}  // namespace Aws
