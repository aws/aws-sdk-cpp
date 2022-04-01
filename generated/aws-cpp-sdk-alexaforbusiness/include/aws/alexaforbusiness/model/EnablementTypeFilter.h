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
  enum class EnablementTypeFilter
  {
    NOT_SET,
    ENABLED,
    PENDING
  };

namespace EnablementTypeFilterMapper
{
AWS_ALEXAFORBUSINESS_API EnablementTypeFilter GetEnablementTypeFilterForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForEnablementTypeFilter(EnablementTypeFilter value);
} // namespace EnablementTypeFilterMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
