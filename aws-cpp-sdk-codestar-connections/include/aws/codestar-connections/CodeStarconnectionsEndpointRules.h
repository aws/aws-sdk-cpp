/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>

namespace Aws
{
namespace CodeStarconnections
{
class CodeStarconnectionsEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CodeStarconnections
} // namespace Aws
