/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class DiscoveryResourceFilter
  {
    NOT_SET,
    SVM
  };

namespace DiscoveryResourceFilterMapper
{
AWS_DATASYNC_API DiscoveryResourceFilter GetDiscoveryResourceFilterForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForDiscoveryResourceFilter(DiscoveryResourceFilter value);
} // namespace DiscoveryResourceFilterMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
