/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class IdentityType
  {
    NOT_SET,
    USER,
    GROUP
  };

namespace IdentityTypeMapper
{
AWS_EMR_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
