/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class Directionality
  {
    NOT_SET,
    UNI,
    MULTI
  };

namespace DirectionalityMapper
{
AWS_TRANSLATE_API Directionality GetDirectionalityForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForDirectionality(Directionality value);
} // namespace DirectionalityMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
