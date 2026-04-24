/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ExternalCampaignType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {
namespace ExternalCampaignTypeMapper {

static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int JOURNEY_HASH = HashingUtils::HashString("JOURNEY");

ExternalCampaignType GetExternalCampaignTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_HASH) {
    return ExternalCampaignType::MANAGED;
  } else if (hashCode == JOURNEY_HASH) {
    return ExternalCampaignType::JOURNEY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExternalCampaignType>(hashCode);
  }

  return ExternalCampaignType::NOT_SET;
}

Aws::String GetNameForExternalCampaignType(ExternalCampaignType enumValue) {
  switch (enumValue) {
    case ExternalCampaignType::NOT_SET:
      return {};
    case ExternalCampaignType::MANAGED:
      return "MANAGED";
    case ExternalCampaignType::JOURNEY:
      return "JOURNEY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExternalCampaignTypeMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
