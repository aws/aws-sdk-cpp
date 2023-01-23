/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DAX
{
namespace Model
{
  enum class ChangeType
  {
    NOT_SET,
    IMMEDIATE,
    REQUIRES_REBOOT
  };

namespace ChangeTypeMapper
{
AWS_DAX_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
