/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{
  enum class AccessDeniedReason
  {
    NOT_SET,
    IAM_AUTH,
    DIRECTORY_AUTH,
    DATA_DISABLED
  };

namespace AccessDeniedReasonMapper
{
AWS_DIRECTORYSERVICEDATA_API AccessDeniedReason GetAccessDeniedReasonForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForAccessDeniedReason(AccessDeniedReason value);
} // namespace AccessDeniedReasonMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
