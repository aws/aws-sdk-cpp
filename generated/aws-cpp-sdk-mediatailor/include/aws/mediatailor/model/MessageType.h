/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class MessageType
  {
    NOT_SET,
    SPLICE_INSERT
  };

namespace MessageTypeMapper
{
AWS_MEDIATAILOR_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
