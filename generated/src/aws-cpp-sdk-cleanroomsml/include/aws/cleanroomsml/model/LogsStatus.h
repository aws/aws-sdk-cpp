/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class LogsStatus
  {
    NOT_SET,
    PUBLISH_SUCCEEDED,
    PUBLISH_FAILED
  };

namespace LogsStatusMapper
{
AWS_CLEANROOMSML_API LogsStatus GetLogsStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForLogsStatus(LogsStatus value);
} // namespace LogsStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
