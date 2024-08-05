/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DataProductStatus
  {
    NOT_SET,
    CREATED,
    CREATING,
    CREATE_FAILED
  };

namespace DataProductStatusMapper
{
AWS_DATAZONE_API DataProductStatus GetDataProductStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataProductStatus(DataProductStatus value);
} // namespace DataProductStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
