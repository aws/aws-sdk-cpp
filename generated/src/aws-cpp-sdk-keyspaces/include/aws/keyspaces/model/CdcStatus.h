/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class CdcStatus
  {
    NOT_SET,
    ENABLED,
    ENABLING,
    DISABLED,
    DISABLING
  };

namespace CdcStatusMapper
{
AWS_KEYSPACES_API CdcStatus GetCdcStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForCdcStatus(CdcStatus value);
} // namespace CdcStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
