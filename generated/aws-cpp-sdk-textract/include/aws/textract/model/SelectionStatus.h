/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class SelectionStatus
  {
    NOT_SET,
    SELECTED,
    NOT_SELECTED
  };

namespace SelectionStatusMapper
{
AWS_TEXTRACT_API SelectionStatus GetSelectionStatusForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForSelectionStatus(SelectionStatus value);
} // namespace SelectionStatusMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
