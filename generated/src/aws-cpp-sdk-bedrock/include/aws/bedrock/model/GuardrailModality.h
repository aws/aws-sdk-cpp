﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class GuardrailModality
  {
    NOT_SET,
    TEXT,
    IMAGE
  };

namespace GuardrailModalityMapper
{
AWS_BEDROCK_API GuardrailModality GetGuardrailModalityForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailModality(GuardrailModality value);
} // namespace GuardrailModalityMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
