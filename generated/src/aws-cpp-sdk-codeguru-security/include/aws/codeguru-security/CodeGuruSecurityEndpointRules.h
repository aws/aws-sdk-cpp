/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>

namespace Aws
{
namespace CodeGuruSecurity
{
class CodeGuruSecurityEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CodeGuruSecurity
} // namespace Aws
