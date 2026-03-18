/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2Client.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectCampaignsV2 {

template <typename DerivedClient = ConnectCampaignsV2Client>
class ConnectCampaignsV2Waiter {
 public:
};
}  // namespace ConnectCampaignsV2
}  // namespace Aws
