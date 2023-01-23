/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class ActionCode
  {
    NOT_SET,
    ArchiveRetrieval,
    InventoryRetrieval,
    Select
  };

namespace ActionCodeMapper
{
AWS_GLACIER_API ActionCode GetActionCodeForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForActionCode(ActionCode value);
} // namespace ActionCodeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
