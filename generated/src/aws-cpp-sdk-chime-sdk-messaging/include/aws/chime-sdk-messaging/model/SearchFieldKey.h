/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{
  enum class SearchFieldKey
  {
    NOT_SET,
    MEMBERS
  };

namespace SearchFieldKeyMapper
{
AWS_CHIMESDKMESSAGING_API SearchFieldKey GetSearchFieldKeyForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForSearchFieldKey(SearchFieldKey value);
} // namespace SearchFieldKeyMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
