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
  enum class ExpirationCriterion
  {
    NOT_SET,
    CREATED_TIMESTAMP,
    LAST_MESSAGE_TIMESTAMP
  };

namespace ExpirationCriterionMapper
{
AWS_CHIMESDKMESSAGING_API ExpirationCriterion GetExpirationCriterionForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForExpirationCriterion(ExpirationCriterion value);
} // namespace ExpirationCriterionMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
