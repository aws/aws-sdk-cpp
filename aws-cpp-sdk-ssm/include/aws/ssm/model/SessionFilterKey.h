﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class SessionFilterKey
  {
    NOT_SET,
    InvokedAfter,
    InvokedBefore,
    Target,
    Owner,
    Status,
    SessionId
  };

namespace SessionFilterKeyMapper
{
AWS_SSM_API SessionFilterKey GetSessionFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForSessionFilterKey(SessionFilterKey value);
} // namespace SessionFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
