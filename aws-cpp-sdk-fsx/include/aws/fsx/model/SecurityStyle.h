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
  enum class SecurityStyle
  {
    NOT_SET,
    UNIX,
    NTFS,
    MIXED
  };

namespace SecurityStyleMapper
{
AWS_FSX_API SecurityStyle GetSecurityStyleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSecurityStyle(SecurityStyle value);
} // namespace SecurityStyleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
