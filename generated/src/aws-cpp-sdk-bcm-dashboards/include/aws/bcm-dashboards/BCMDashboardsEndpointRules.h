/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>

namespace Aws
{
namespace BCMDashboards
{
class BCMDashboardsEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace BCMDashboards
} // namespace Aws
