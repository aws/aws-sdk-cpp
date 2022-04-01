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
  enum class IssueSubEntity
  {
    NOT_SET,
    COMMENTS,
    ATTACHMENTS,
    WORKLOGS
  };

namespace IssueSubEntityMapper
{
AWS_KENDRA_API IssueSubEntity GetIssueSubEntityForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForIssueSubEntity(IssueSubEntity value);
} // namespace IssueSubEntityMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
