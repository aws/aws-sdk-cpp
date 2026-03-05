/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/CustomTemplateBase.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace CustomTemplateBaseMapper {

static const int HISTORY_AND_PHYSICAL_HASH = HashingUtils::HashString("HISTORY_AND_PHYSICAL");
static const int GIRPP_HASH = HashingUtils::HashString("GIRPP");
static const int DAP_HASH = HashingUtils::HashString("DAP");
static const int SIRP_HASH = HashingUtils::HashString("SIRP");
static const int BIRP_HASH = HashingUtils::HashString("BIRP");
static const int BEHAVIORAL_SOAP_HASH = HashingUtils::HashString("BEHAVIORAL_SOAP");

CustomTemplateBase GetCustomTemplateBaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HISTORY_AND_PHYSICAL_HASH) {
    return CustomTemplateBase::HISTORY_AND_PHYSICAL;
  } else if (hashCode == GIRPP_HASH) {
    return CustomTemplateBase::GIRPP;
  } else if (hashCode == DAP_HASH) {
    return CustomTemplateBase::DAP;
  } else if (hashCode == SIRP_HASH) {
    return CustomTemplateBase::SIRP;
  } else if (hashCode == BIRP_HASH) {
    return CustomTemplateBase::BIRP;
  } else if (hashCode == BEHAVIORAL_SOAP_HASH) {
    return CustomTemplateBase::BEHAVIORAL_SOAP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomTemplateBase>(hashCode);
  }

  return CustomTemplateBase::NOT_SET;
}

Aws::String GetNameForCustomTemplateBase(CustomTemplateBase enumValue) {
  switch (enumValue) {
    case CustomTemplateBase::NOT_SET:
      return {};
    case CustomTemplateBase::HISTORY_AND_PHYSICAL:
      return "HISTORY_AND_PHYSICAL";
    case CustomTemplateBase::GIRPP:
      return "GIRPP";
    case CustomTemplateBase::DAP:
      return "DAP";
    case CustomTemplateBase::SIRP:
      return "SIRP";
    case CustomTemplateBase::BIRP:
      return "BIRP";
    case CustomTemplateBase::BEHAVIORAL_SOAP:
      return "BEHAVIORAL_SOAP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomTemplateBaseMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
