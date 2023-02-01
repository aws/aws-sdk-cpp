/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class NfsVersion
  {
    NOT_SET,
    NFS3
  };

namespace NfsVersionMapper
{
AWS_FSX_API NfsVersion GetNfsVersionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForNfsVersion(NfsVersion value);
} // namespace NfsVersionMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
