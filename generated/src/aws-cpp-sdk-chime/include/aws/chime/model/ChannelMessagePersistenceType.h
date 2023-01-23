/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ChannelMessagePersistenceType
  {
    NOT_SET,
    PERSISTENT,
    NON_PERSISTENT
  };

namespace ChannelMessagePersistenceTypeMapper
{
AWS_CHIME_API ChannelMessagePersistenceType GetChannelMessagePersistenceTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForChannelMessagePersistenceType(ChannelMessagePersistenceType value);
} // namespace ChannelMessagePersistenceTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
