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
  enum class AudienceExportJobStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE
  };

namespace AudienceExportJobStatusMapper
{
AWS_CLEANROOMSML_API AudienceExportJobStatus GetAudienceExportJobStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForAudienceExportJobStatus(AudienceExportJobStatus value);
} // namespace AudienceExportJobStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
