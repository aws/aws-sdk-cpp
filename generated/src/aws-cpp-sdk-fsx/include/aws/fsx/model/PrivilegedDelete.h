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
  enum class PrivilegedDelete
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    PERMANENTLY_DISABLED
  };

namespace PrivilegedDeleteMapper
{
AWS_FSX_API PrivilegedDelete GetPrivilegedDeleteForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForPrivilegedDelete(PrivilegedDelete value);
} // namespace PrivilegedDeleteMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
