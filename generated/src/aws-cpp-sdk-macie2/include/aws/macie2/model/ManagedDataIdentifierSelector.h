﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class ManagedDataIdentifierSelector
  {
    NOT_SET,
    ALL,
    EXCLUDE,
    INCLUDE,
    NONE,
    RECOMMENDED
  };

namespace ManagedDataIdentifierSelectorMapper
{
AWS_MACIE2_API ManagedDataIdentifierSelector GetManagedDataIdentifierSelectorForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForManagedDataIdentifierSelector(ManagedDataIdentifierSelector value);
} // namespace ManagedDataIdentifierSelectorMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
