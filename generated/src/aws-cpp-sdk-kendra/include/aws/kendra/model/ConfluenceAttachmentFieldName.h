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
  enum class ConfluenceAttachmentFieldName
  {
    NOT_SET,
    AUTHOR,
    CONTENT_TYPE,
    CREATED_DATE,
    DISPLAY_URL,
    FILE_SIZE,
    ITEM_TYPE,
    PARENT_ID,
    SPACE_KEY,
    SPACE_NAME,
    URL,
    VERSION
  };

namespace ConfluenceAttachmentFieldNameMapper
{
AWS_KENDRA_API ConfluenceAttachmentFieldName GetConfluenceAttachmentFieldNameForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluenceAttachmentFieldName(ConfluenceAttachmentFieldName value);
} // namespace ConfluenceAttachmentFieldNameMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
