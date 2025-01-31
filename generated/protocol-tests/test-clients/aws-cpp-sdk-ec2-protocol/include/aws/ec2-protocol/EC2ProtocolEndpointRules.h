/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

namespace Aws
{
namespace EC2Protocol
{
class EC2ProtocolEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace EC2Protocol
} // namespace Aws
