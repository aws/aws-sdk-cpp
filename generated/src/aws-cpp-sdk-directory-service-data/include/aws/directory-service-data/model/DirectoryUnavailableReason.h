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
  enum class DirectoryUnavailableReason
  {
    NOT_SET,
    INVALID_DIRECTORY_STATE,
    DIRECTORY_TIMEOUT,
    DIRECTORY_RESOURCES_EXCEEDED,
    NO_DISK_SPACE,
    TRUST_AUTH_FAILURE
  };

namespace DirectoryUnavailableReasonMapper
{
AWS_DIRECTORYSERVICEDATA_API DirectoryUnavailableReason GetDirectoryUnavailableReasonForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForDirectoryUnavailableReason(DirectoryUnavailableReason value);
} // namespace DirectoryUnavailableReasonMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
