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
  enum class Type
  {
    NOT_SET,
    SAAS,
    ON_PREMISE
  };

namespace TypeMapper
{
AWS_KENDRA_API Type GetTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
