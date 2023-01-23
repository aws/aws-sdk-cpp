/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>

namespace Aws
{
namespace ElasticTranscoder
{
class ElasticTranscoderEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ElasticTranscoder
} // namespace Aws
