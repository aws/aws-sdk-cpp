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
  enum class FormTypeStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FormTypeStatusMapper
{
AWS_DATAZONE_API FormTypeStatus GetFormTypeStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForFormTypeStatus(FormTypeStatus value);
} // namespace FormTypeStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
