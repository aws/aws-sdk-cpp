/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class BotAliasReplicationStatus
  {
    NOT_SET,
    Creating,
    Updating,
    Available,
    Deleting,
    Failed
  };

namespace BotAliasReplicationStatusMapper
{
AWS_LEXMODELSV2_API BotAliasReplicationStatus GetBotAliasReplicationStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotAliasReplicationStatus(BotAliasReplicationStatus value);
} // namespace BotAliasReplicationStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
