/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/keyspacesstreams/KeyspacesStreamsClient.h>

#include <algorithm>

namespace Aws {
namespace KeyspacesStreams {

template <typename DerivedClient = KeyspacesStreamsClient>
class KeyspacesStreamsWaiter {
 public:
};
}  // namespace KeyspacesStreams
}  // namespace Aws
