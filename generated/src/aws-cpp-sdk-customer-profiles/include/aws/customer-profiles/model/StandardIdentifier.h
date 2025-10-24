﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class StandardIdentifier {
  NOT_SET,
  PROFILE,
  ASSET,
  CASE,
  ORDER,
  COMMUNICATION_RECORD,
  AIR_PREFERENCE,
  HOTEL_PREFERENCE,
  AIR_BOOKING,
  AIR_SEGMENT,
  HOTEL_RESERVATION,
  HOTEL_STAY_REVENUE,
  LOYALTY,
  LOYALTY_TRANSACTION,
  LOYALTY_PROMOTION,
  UNIQUE,
  SECONDARY,
  LOOKUP_ONLY,
  NEW_ONLY
};

namespace StandardIdentifierMapper {
AWS_CUSTOMERPROFILES_API StandardIdentifier GetStandardIdentifierForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStandardIdentifier(StandardIdentifier value);
}  // namespace StandardIdentifierMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
