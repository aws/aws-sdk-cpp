/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ManagedGrafana
{
class ManagedGrafanaEndpointRules
{
public:
    static Aws::String GetRulesAsString();
    static const Aws::Vector<char> Rules; 
};
} // namespace ManagedGrafana
} // namespace Aws
