/**
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
  enum class ConfluencePageFieldName
  {
    NOT_SET,
    AUTHOR,
    CONTENT_STATUS,
    CREATED_DATE,
    DISPLAY_URL,
    ITEM_TYPE,
    LABELS,
    MODIFIED_DATE,
    PARENT_ID,
    SPACE_KEY,
    SPACE_NAME,
    URL,
    VERSION
  };

namespace ConfluencePageFieldNameMapper
{
AWS_KENDRA_API ConfluencePageFieldName GetConfluencePageFieldNameForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluencePageFieldName(ConfluencePageFieldName value);
} // namespace ConfluencePageFieldNameMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
