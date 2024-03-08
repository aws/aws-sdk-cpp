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
  enum class ManifestAction
  {
    NOT_SET,
    TRANSFER
  };

namespace ManifestActionMapper
{
AWS_DATASYNC_API ManifestAction GetManifestActionForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForManifestAction(ManifestAction value);
} // namespace ManifestActionMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
