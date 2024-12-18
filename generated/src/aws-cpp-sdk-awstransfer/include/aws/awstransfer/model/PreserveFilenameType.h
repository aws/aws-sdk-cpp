/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class PreserveFilenameType
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PreserveFilenameTypeMapper
{
AWS_TRANSFER_API PreserveFilenameType GetPreserveFilenameTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForPreserveFilenameType(PreserveFilenameType value);
} // namespace PreserveFilenameTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
