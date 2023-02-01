/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class BlockType
  {
    NOT_SET,
    LINE,
    WORD
  };

namespace BlockTypeMapper
{
AWS_COMPREHEND_API BlockType GetBlockTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForBlockType(BlockType value);
} // namespace BlockTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
