/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

namespace Aws
{
namespace ResourceExplorer2
{
class ResourceExplorer2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ResourceExplorer2
} // namespace Aws
