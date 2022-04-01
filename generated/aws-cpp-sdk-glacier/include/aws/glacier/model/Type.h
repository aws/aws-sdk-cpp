/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    AmazonCustomerByEmail,
    CanonicalUser,
    Group
  };

namespace TypeMapper
{
AWS_GLACIER_API Type GetTypeForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
