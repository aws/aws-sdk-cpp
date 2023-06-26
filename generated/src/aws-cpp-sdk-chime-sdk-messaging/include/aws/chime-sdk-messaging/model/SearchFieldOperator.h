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
  enum class SearchFieldOperator
  {
    NOT_SET,
    EQUALS,
    INCLUDES
  };

namespace SearchFieldOperatorMapper
{
AWS_CHIMESDKMESSAGING_API SearchFieldOperator GetSearchFieldOperatorForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForSearchFieldOperator(SearchFieldOperator value);
} // namespace SearchFieldOperatorMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
