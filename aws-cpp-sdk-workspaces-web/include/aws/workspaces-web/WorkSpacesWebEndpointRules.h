/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws
{
namespace WorkSpacesWeb
{
class WorkSpacesWebEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace WorkSpacesWeb
} // namespace Aws
