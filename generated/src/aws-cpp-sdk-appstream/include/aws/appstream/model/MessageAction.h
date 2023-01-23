/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class MessageAction
  {
    NOT_SET,
    SUPPRESS,
    RESEND
  };

namespace MessageActionMapper
{
AWS_APPSTREAM_API MessageAction GetMessageActionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForMessageAction(MessageAction value);
} // namespace MessageActionMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
