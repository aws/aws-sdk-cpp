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
  enum class ReferenceType
  {
    NOT_SET,
    Intent,
    Bot,
    BotAlias,
    BotChannel
  };

namespace ReferenceTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ReferenceType GetReferenceTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForReferenceType(ReferenceType value);
} // namespace ReferenceTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
