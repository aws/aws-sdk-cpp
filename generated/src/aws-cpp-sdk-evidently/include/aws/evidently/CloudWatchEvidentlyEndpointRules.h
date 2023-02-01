/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

namespace Aws
{
namespace CloudWatchEvidently
{
class CloudWatchEvidentlyEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CloudWatchEvidently
} // namespace Aws
