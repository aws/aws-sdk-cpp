/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaignsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectCampaigns {

template <typename DerivedClient = ConnectCampaignsClient>
class ConnectCampaignsWaiter {
 public:
};
}  // namespace ConnectCampaigns
}  // namespace Aws
