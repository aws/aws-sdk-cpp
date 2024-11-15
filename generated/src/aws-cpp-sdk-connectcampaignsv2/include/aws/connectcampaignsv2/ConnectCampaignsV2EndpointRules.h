/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>

namespace Aws
{
namespace ConnectCampaignsV2
{
class ConnectCampaignsV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ConnectCampaignsV2
} // namespace Aws
