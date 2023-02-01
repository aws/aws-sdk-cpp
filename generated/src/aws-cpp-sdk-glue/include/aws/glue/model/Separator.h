/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class Separator
  {
    NOT_SET,
    comma,
    ctrla,
    pipe,
    semicolon,
    tab
  };

namespace SeparatorMapper
{
AWS_GLUE_API Separator GetSeparatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSeparator(Separator value);
} // namespace SeparatorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
