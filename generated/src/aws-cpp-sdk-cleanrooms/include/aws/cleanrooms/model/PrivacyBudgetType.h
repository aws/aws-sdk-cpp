/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class PrivacyBudgetType
  {
    NOT_SET,
    DIFFERENTIAL_PRIVACY
  };

namespace PrivacyBudgetTypeMapper
{
AWS_CLEANROOMS_API PrivacyBudgetType GetPrivacyBudgetTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForPrivacyBudgetType(PrivacyBudgetType value);
} // namespace PrivacyBudgetTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
