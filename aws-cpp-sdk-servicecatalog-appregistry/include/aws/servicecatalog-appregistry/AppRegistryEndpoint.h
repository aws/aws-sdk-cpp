/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AppRegistry
{
namespace AppRegistryEndpoint
{
AWS_APPREGISTRY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AppRegistryEndpoint
} // namespace AppRegistry
} // namespace Aws
