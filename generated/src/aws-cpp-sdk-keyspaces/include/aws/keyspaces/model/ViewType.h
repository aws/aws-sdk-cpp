/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class ViewType
  {
    NOT_SET,
    NEW_IMAGE,
    OLD_IMAGE,
    KEYS_ONLY,
    NEW_AND_OLD_IMAGES
  };

namespace ViewTypeMapper
{
AWS_KEYSPACES_API ViewType GetViewTypeForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForViewType(ViewType value);
} // namespace ViewTypeMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
