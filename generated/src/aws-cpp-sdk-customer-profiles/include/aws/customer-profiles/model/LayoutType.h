/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class LayoutType
  {
    NOT_SET,
    PROFILE_EXPLORER
  };

namespace LayoutTypeMapper
{
AWS_CUSTOMERPROFILES_API LayoutType GetLayoutTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForLayoutType(LayoutType value);
} // namespace LayoutTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
