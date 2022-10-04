/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class AccessEffect
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace AccessEffectMapper
{
AWS_WORKMAIL_API AccessEffect GetAccessEffectForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForAccessEffect(AccessEffect value);
} // namespace AccessEffectMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
