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
  enum class ChannelPrivacy
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace ChannelPrivacyMapper
{
AWS_CHIME_API ChannelPrivacy GetChannelPrivacyForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForChannelPrivacy(ChannelPrivacy value);
} // namespace ChannelPrivacyMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
