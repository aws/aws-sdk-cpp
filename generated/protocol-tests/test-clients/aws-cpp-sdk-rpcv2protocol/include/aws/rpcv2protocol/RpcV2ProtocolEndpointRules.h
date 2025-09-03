/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws
{
namespace RpcV2Protocol
{
class RpcV2ProtocolEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace RpcV2Protocol
} // namespace Aws
