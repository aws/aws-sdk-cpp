﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/PriceClass.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace PriceClassMapper {

static const int PriceClass_100_HASH = HashingUtils::HashString("PriceClass_100");
static const int PriceClass_200_HASH = HashingUtils::HashString("PriceClass_200");
static const int PriceClass_All_HASH = HashingUtils::HashString("PriceClass_All");
static const int None_HASH = HashingUtils::HashString("None");

PriceClass GetPriceClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PriceClass_100_HASH) {
    return PriceClass::PriceClass_100;
  } else if (hashCode == PriceClass_200_HASH) {
    return PriceClass::PriceClass_200;
  } else if (hashCode == PriceClass_All_HASH) {
    return PriceClass::PriceClass_All;
  } else if (hashCode == None_HASH) {
    return PriceClass::None;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PriceClass>(hashCode);
  }

  return PriceClass::NOT_SET;
}

Aws::String GetNameForPriceClass(PriceClass enumValue) {
  switch (enumValue) {
    case PriceClass::NOT_SET:
      return {};
    case PriceClass::PriceClass_100:
      return "PriceClass_100";
    case PriceClass::PriceClass_200:
      return "PriceClass_200";
    case PriceClass::PriceClass_All:
      return "PriceClass_All";
    case PriceClass::None:
      return "None";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PriceClassMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
