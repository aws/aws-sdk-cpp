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
  enum class ConfluenceVersion
  {
    NOT_SET,
    CLOUD,
    SERVER
  };

namespace ConfluenceVersionMapper
{
AWS_KENDRA_API ConfluenceVersion GetConfluenceVersionForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluenceVersion(ConfluenceVersion value);
} // namespace ConfluenceVersionMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
