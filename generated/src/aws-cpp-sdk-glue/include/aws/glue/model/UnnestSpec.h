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
  enum class UnnestSpec
  {
    NOT_SET,
    TOPLEVEL,
    FULL,
    NOUNNEST
  };

namespace UnnestSpecMapper
{
AWS_GLUE_API UnnestSpec GetUnnestSpecForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForUnnestSpec(UnnestSpec value);
} // namespace UnnestSpecMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
