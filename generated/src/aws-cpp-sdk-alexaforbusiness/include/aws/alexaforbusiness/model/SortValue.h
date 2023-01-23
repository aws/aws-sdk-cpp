/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class SortValue
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortValueMapper
{
AWS_ALEXAFORBUSINESS_API SortValue GetSortValueForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForSortValue(SortValue value);
} // namespace SortValueMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
