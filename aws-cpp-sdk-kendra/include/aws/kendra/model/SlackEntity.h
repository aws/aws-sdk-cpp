/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class SlackEntity
  {
    NOT_SET,
    PUBLIC_CHANNEL,
    PRIVATE_CHANNEL,
    GROUP_MESSAGE,
    DIRECT_MESSAGE
  };

namespace SlackEntityMapper
{
AWS_KENDRA_API SlackEntity GetSlackEntityForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSlackEntity(SlackEntity value);
} // namespace SlackEntityMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
