/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>

namespace Aws
{
namespace ApiGatewayV2
{
class ApiGatewayV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ApiGatewayV2
} // namespace Aws
