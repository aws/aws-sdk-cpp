/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AmplifyUIBuilder
{
namespace AmplifyUIBuilderEndpoint
{
AWS_AMPLIFYUIBUILDER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AmplifyUIBuilderEndpoint
} // namespace AmplifyUIBuilder
} // namespace Aws
