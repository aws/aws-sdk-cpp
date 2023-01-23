/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class ConflictResolvingModel
  {
    NOT_SET,
    RECENCY,
    SOURCE
  };

namespace ConflictResolvingModelMapper
{
AWS_CUSTOMERPROFILES_API ConflictResolvingModel GetConflictResolvingModelForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForConflictResolvingModel(ConflictResolvingModel value);
} // namespace ConflictResolvingModelMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
