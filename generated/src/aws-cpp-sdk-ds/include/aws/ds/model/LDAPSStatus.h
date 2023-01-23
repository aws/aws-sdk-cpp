/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class LDAPSStatus
  {
    NOT_SET,
    Enabling,
    Enabled,
    EnableFailed,
    Disabled
  };

namespace LDAPSStatusMapper
{
AWS_DIRECTORYSERVICE_API LDAPSStatus GetLDAPSStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForLDAPSStatus(LDAPSStatus value);
} // namespace LDAPSStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
