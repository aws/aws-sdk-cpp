/**
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
  enum class SharePointVersion
  {
    NOT_SET,
    SHAREPOINT_2013,
    SHAREPOINT_2016,
    SHAREPOINT_ONLINE,
    SHAREPOINT_2019
  };

namespace SharePointVersionMapper
{
AWS_KENDRA_API SharePointVersion GetSharePointVersionForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSharePointVersion(SharePointVersion value);
} // namespace SharePointVersionMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
