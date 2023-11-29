/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class TagOnCreatePolicy
  {
    NOT_SET,
    FROM_PARENT_RESOURCE,
    NONE
  };

namespace TagOnCreatePolicyMapper
{
AWS_CLEANROOMSML_API TagOnCreatePolicy GetTagOnCreatePolicyForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTagOnCreatePolicy(TagOnCreatePolicy value);
} // namespace TagOnCreatePolicyMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
