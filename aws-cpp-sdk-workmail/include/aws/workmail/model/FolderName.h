/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class FolderName
  {
    NOT_SET,
    INBOX,
    DELETED_ITEMS,
    SENT_ITEMS,
    DRAFTS,
    JUNK_EMAIL
  };

namespace FolderNameMapper
{
AWS_WORKMAIL_API FolderName GetFolderNameForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForFolderName(FolderName value);
} // namespace FolderNameMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
