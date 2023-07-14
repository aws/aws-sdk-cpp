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
  enum class OverwriteExisting
  {
    NOT_SET,
    TRUE,
    FALSE
  };

namespace OverwriteExistingMapper
{
AWS_TRANSFER_API OverwriteExisting GetOverwriteExistingForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForOverwriteExisting(OverwriteExisting value);
} // namespace OverwriteExistingMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
