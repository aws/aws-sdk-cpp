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
  enum class IsModifiable
  {
    NOT_SET,
    TRUE,
    FALSE,
    CONDITIONAL
  };

namespace IsModifiableMapper
{
AWS_DAX_API IsModifiable GetIsModifiableForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForIsModifiable(IsModifiable value);
} // namespace IsModifiableMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
