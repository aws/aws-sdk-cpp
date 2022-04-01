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
  enum class MemberType
  {
    NOT_SET,
    User,
    Bot,
    Webhook
  };

namespace MemberTypeMapper
{
AWS_CHIME_API MemberType GetMemberTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForMemberType(MemberType value);
} // namespace MemberTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
