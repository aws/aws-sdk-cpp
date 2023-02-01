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
  enum class SmbVersion
  {
    NOT_SET,
    AUTOMATIC,
    SMB2,
    SMB3
  };

namespace SmbVersionMapper
{
AWS_DATASYNC_API SmbVersion GetSmbVersionForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForSmbVersion(SmbVersion value);
} // namespace SmbVersionMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
