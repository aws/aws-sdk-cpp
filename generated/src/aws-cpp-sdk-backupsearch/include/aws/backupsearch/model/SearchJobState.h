/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{
  enum class SearchJobState
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    STOPPING,
    STOPPED,
    FAILED
  };

namespace SearchJobStateMapper
{
AWS_BACKUPSEARCH_API SearchJobState GetSearchJobStateForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForSearchJobState(SearchJobState value);
} // namespace SearchJobStateMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
