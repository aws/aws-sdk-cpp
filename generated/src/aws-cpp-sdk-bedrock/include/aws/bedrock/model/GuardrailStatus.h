/**
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
  enum class GuardrailStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    VERSIONING,
    READY,
    FAILED,
    DELETING
  };

namespace GuardrailStatusMapper
{
AWS_BEDROCK_API GuardrailStatus GetGuardrailStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailStatus(GuardrailStatus value);
} // namespace GuardrailStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
