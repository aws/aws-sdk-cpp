/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class RecordStatus
  {
    NOT_SET,
    CREATED,
    IN_PROGRESS,
    IN_PROGRESS_IN_ERROR,
    SUCCEEDED,
    FAILED
  };

namespace RecordStatusMapper
{
AWS_SERVICECATALOG_API RecordStatus GetRecordStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForRecordStatus(RecordStatus value);
} // namespace RecordStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
