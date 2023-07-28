/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class SnaplockType
  {
    NOT_SET,
    COMPLIANCE,
    ENTERPRISE
  };

namespace SnaplockTypeMapper
{
AWS_FSX_API SnaplockType GetSnaplockTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnaplockType(SnaplockType value);
} // namespace SnaplockTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
