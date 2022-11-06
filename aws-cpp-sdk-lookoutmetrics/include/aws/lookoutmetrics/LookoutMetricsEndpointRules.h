/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace LookoutMetrics
{
class LookoutMetricsEndpointRules
{
public:
    static Aws::String GetRulesAsString();
    static const Aws::Vector<char> Rules; 
};
} // namespace LookoutMetrics
} // namespace Aws
