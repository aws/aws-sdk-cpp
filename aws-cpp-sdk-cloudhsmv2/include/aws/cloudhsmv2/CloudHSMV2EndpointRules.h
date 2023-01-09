/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>

namespace Aws
{
namespace CloudHSMV2
{
class CloudHSMV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CloudHSMV2
} // namespace Aws
