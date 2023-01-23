/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class RelatedItemType
  {
    NOT_SET,
    Contact,
    Comment
  };

namespace RelatedItemTypeMapper
{
AWS_CONNECTCASES_API RelatedItemType GetRelatedItemTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForRelatedItemType(RelatedItemType value);
} // namespace RelatedItemTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
