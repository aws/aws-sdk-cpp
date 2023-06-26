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
  enum class DiscoveryResourceType
  {
    NOT_SET,
    SVM,
    VOLUME,
    CLUSTER
  };

namespace DiscoveryResourceTypeMapper
{
AWS_DATASYNC_API DiscoveryResourceType GetDiscoveryResourceTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForDiscoveryResourceType(DiscoveryResourceType value);
} // namespace DiscoveryResourceTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
