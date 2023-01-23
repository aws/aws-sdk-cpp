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
  enum class RelevanceType
  {
    NOT_SET,
    RELEVANT,
    NOT_RELEVANT
  };

namespace RelevanceTypeMapper
{
AWS_KENDRA_API RelevanceType GetRelevanceTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForRelevanceType(RelevanceType value);
} // namespace RelevanceTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
