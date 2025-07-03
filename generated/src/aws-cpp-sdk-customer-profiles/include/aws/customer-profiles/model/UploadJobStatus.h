/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class UploadJobStatus
  {
    NOT_SET,
    CREATED,
    IN_PROGRESS,
    PARTIALLY_SUCCEEDED,
    SUCCEEDED,
    FAILED,
    STOPPED
  };

namespace UploadJobStatusMapper
{
AWS_CUSTOMERPROFILES_API UploadJobStatus GetUploadJobStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForUploadJobStatus(UploadJobStatus value);
} // namespace UploadJobStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
