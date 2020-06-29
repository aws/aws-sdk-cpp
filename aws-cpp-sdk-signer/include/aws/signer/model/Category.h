/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace signer
{
namespace Model
{
  enum class Category
  {
    NOT_SET,
    AWSIoT
  };

namespace CategoryMapper
{
AWS_SIGNER_API Category GetCategoryForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForCategory(Category value);
} // namespace CategoryMapper
} // namespace Model
} // namespace signer
} // namespace Aws
