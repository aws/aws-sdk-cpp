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
  enum class DiscoverySystemType
  {
    NOT_SET,
    NetAppONTAP
  };

namespace DiscoverySystemTypeMapper
{
AWS_DATASYNC_API DiscoverySystemType GetDiscoverySystemTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForDiscoverySystemType(DiscoverySystemType value);
} // namespace DiscoverySystemTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
