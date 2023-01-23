/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class WarningCode
  {
    NOT_SET,
    QUERY_LANGUAGE_INVALID_SYNTAX
  };

namespace WarningCodeMapper
{
AWS_KENDRA_API WarningCode GetWarningCodeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForWarningCode(WarningCode value);
} // namespace WarningCodeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
