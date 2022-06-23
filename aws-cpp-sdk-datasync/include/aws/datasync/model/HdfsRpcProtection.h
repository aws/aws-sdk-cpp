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
  enum class HdfsRpcProtection
  {
    NOT_SET,
    DISABLED,
    AUTHENTICATION,
    INTEGRITY,
    PRIVACY
  };

namespace HdfsRpcProtectionMapper
{
AWS_DATASYNC_API HdfsRpcProtection GetHdfsRpcProtectionForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForHdfsRpcProtection(HdfsRpcProtection value);
} // namespace HdfsRpcProtectionMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
