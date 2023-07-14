/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class Ownership
  {
    NOT_SET,
    Self,
    Shared,
    Amazon
  };

namespace OwnershipMapper
{
AWS_IMAGEBUILDER_API Ownership GetOwnershipForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForOwnership(Ownership value);
} // namespace OwnershipMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
