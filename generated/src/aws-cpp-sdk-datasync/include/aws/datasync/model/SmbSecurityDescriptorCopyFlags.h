/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class SmbSecurityDescriptorCopyFlags
  {
    NOT_SET,
    NONE,
    OWNER_DACL,
    OWNER_DACL_SACL
  };

namespace SmbSecurityDescriptorCopyFlagsMapper
{
AWS_DATASYNC_API SmbSecurityDescriptorCopyFlags GetSmbSecurityDescriptorCopyFlagsForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForSmbSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags value);
} // namespace SmbSecurityDescriptorCopyFlagsMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
