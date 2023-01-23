/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>

namespace Aws
{
namespace CodeArtifact
{
class CodeArtifactEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CodeArtifact
} // namespace Aws
