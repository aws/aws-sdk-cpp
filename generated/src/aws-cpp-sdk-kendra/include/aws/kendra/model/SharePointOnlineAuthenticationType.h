﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class SharePointOnlineAuthenticationType
  {
    NOT_SET,
    HTTP_BASIC,
    OAUTH2
  };

namespace SharePointOnlineAuthenticationTypeMapper
{
AWS_KENDRA_API SharePointOnlineAuthenticationType GetSharePointOnlineAuthenticationTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSharePointOnlineAuthenticationType(SharePointOnlineAuthenticationType value);
} // namespace SharePointOnlineAuthenticationTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
