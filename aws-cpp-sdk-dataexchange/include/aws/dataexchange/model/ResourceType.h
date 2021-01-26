/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    DATA_SET,
    REVISION,
    ASSET,
    JOB
  };

namespace ResourceTypeMapper
{
AWS_DATAEXCHANGE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
