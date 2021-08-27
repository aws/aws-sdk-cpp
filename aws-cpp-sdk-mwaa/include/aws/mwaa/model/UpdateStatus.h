/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class UpdateStatus
  {
    NOT_SET,
    SUCCESS,
    PENDING,
    FAILED
  };

namespace UpdateStatusMapper
{
AWS_MWAA_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
} // namespace UpdateStatusMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
