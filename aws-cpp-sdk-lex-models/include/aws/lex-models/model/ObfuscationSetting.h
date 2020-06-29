/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ObfuscationSetting
  {
    NOT_SET,
    NONE,
    DEFAULT_OBFUSCATION
  };

namespace ObfuscationSettingMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ObfuscationSetting GetObfuscationSettingForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForObfuscationSetting(ObfuscationSetting value);
} // namespace ObfuscationSettingMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
