/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipantClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectParticipant {

template <typename DerivedClient = ConnectParticipantClient>
class ConnectParticipantWaiter {
 public:
};
}  // namespace ConnectParticipant
}  // namespace Aws
