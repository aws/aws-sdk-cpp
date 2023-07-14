/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ChannelStatus
  {
    NOT_SET,
    IN_PROGRESS,
    CREATED,
    FAILED
  };

namespace ChannelStatusMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ChannelStatus GetChannelStatusForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForChannelStatus(ChannelStatus value);
} // namespace ChannelStatusMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
