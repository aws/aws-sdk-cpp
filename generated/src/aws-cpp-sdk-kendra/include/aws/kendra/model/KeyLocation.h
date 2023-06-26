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
  enum class KeyLocation
  {
    NOT_SET,
    URL,
    SECRET_MANAGER
  };

namespace KeyLocationMapper
{
AWS_KENDRA_API KeyLocation GetKeyLocationForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForKeyLocation(KeyLocation value);
} // namespace KeyLocationMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
