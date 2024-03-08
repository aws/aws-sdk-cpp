/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{
  enum class SyncConfigurationType
  {
    NOT_SET,
    CFN_STACK_SYNC
  };

namespace SyncConfigurationTypeMapper
{
AWS_CODESTARCONNECTIONS_API SyncConfigurationType GetSyncConfigurationTypeForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForSyncConfigurationType(SyncConfigurationType value);
} // namespace SyncConfigurationTypeMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
