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
  enum class PrincipalType
  {
    NOT_SET,
    USER,
    GROUP
  };

namespace PrincipalTypeMapper
{
AWS_KENDRA_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
