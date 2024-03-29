﻿/**
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
  enum class MissingAttributeKeyStrategy
  {
    NOT_SET,
    IGNORE,
    COLLAPSE,
    EXPAND
  };

namespace MissingAttributeKeyStrategyMapper
{
AWS_KENDRA_API MissingAttributeKeyStrategy GetMissingAttributeKeyStrategyForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForMissingAttributeKeyStrategy(MissingAttributeKeyStrategy value);
} // namespace MissingAttributeKeyStrategyMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
