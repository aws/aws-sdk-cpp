/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>

namespace Aws
{
namespace ARCZonalShift
{
class ARCZonalShiftEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ARCZonalShift
} // namespace Aws
