/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    NONE,
    AES256,
    aws_kms,
    aws_kms_dsse
  };

namespace TypeMapper
{
AWS_MACIE2_API Type GetTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
