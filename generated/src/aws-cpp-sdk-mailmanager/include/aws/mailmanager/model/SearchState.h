/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class SearchState
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace SearchStateMapper
{
AWS_MAILMANAGER_API SearchState GetSearchStateForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForSearchState(SearchState value);
} // namespace SearchStateMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
