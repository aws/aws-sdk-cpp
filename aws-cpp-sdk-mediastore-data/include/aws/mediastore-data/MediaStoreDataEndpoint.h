/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MediaStoreData
{
namespace MediaStoreDataEndpoint
{
AWS_MEDIASTOREDATA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MediaStoreDataEndpoint
} // namespace MediaStoreData
} // namespace Aws
