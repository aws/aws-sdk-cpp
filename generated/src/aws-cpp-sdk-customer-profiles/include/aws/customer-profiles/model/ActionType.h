/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class ActionType {
  NOT_SET,
  ADDED_PROFILE_KEY,
  DELETED_PROFILE_KEY,
  CREATED,
  UPDATED,
  INGESTED,
  DELETED_BY_CUSTOMER,
  EXPIRED,
  MERGED,
  DELETED_BY_MERGE
};

namespace ActionTypeMapper {
AWS_CUSTOMERPROFILES_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForActionType(ActionType value);
}  // namespace ActionTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
