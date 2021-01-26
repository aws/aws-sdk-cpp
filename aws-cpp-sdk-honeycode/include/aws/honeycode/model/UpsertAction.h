/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Honeycode
{
namespace Model
{
  enum class UpsertAction
  {
    NOT_SET,
    UPDATED,
    APPENDED
  };

namespace UpsertActionMapper
{
AWS_HONEYCODE_API UpsertAction GetUpsertActionForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForUpsertAction(UpsertAction value);
} // namespace UpsertActionMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
