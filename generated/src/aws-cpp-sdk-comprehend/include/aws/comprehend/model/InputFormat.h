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
  enum class InputFormat
  {
    NOT_SET,
    ONE_DOC_PER_FILE,
    ONE_DOC_PER_LINE
  };

namespace InputFormatMapper
{
AWS_COMPREHEND_API InputFormat GetInputFormatForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForInputFormat(InputFormat value);
} // namespace InputFormatMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
