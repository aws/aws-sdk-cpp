/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws
{
namespace GreengrassV2
{
class GreengrassV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace GreengrassV2
} // namespace Aws
