/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SnowDeviceManagement
{
class SnowDeviceManagementEndpointRules
{
public:
    static Aws::String GetRulesAsString();
    static const Aws::Vector<char> Rules; 
};
} // namespace SnowDeviceManagement
} // namespace Aws
