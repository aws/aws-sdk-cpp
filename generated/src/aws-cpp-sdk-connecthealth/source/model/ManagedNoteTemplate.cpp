/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ManagedNoteTemplate.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace ManagedNoteTemplateMapper {

static const int HISTORY_AND_PHYSICAL_HASH = HashingUtils::HashString("HISTORY_AND_PHYSICAL");
static const int GIRPP_HASH = HashingUtils::HashString("GIRPP");
static const int DAP_HASH = HashingUtils::HashString("DAP");
static const int SIRP_HASH = HashingUtils::HashString("SIRP");
static const int BIRP_HASH = HashingUtils::HashString("BIRP");
static const int BEHAVIORAL_SOAP_HASH = HashingUtils::HashString("BEHAVIORAL_SOAP");
static const int PHYSICAL_SOAP_HASH = HashingUtils::HashString("PHYSICAL_SOAP");

ManagedNoteTemplate GetManagedNoteTemplateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HISTORY_AND_PHYSICAL_HASH) {
    return ManagedNoteTemplate::HISTORY_AND_PHYSICAL;
  } else if (hashCode == GIRPP_HASH) {
    return ManagedNoteTemplate::GIRPP;
  } else if (hashCode == DAP_HASH) {
    return ManagedNoteTemplate::DAP;
  } else if (hashCode == SIRP_HASH) {
    return ManagedNoteTemplate::SIRP;
  } else if (hashCode == BIRP_HASH) {
    return ManagedNoteTemplate::BIRP;
  } else if (hashCode == BEHAVIORAL_SOAP_HASH) {
    return ManagedNoteTemplate::BEHAVIORAL_SOAP;
  } else if (hashCode == PHYSICAL_SOAP_HASH) {
    return ManagedNoteTemplate::PHYSICAL_SOAP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedNoteTemplate>(hashCode);
  }

  return ManagedNoteTemplate::NOT_SET;
}

Aws::String GetNameForManagedNoteTemplate(ManagedNoteTemplate enumValue) {
  switch (enumValue) {
    case ManagedNoteTemplate::NOT_SET:
      return {};
    case ManagedNoteTemplate::HISTORY_AND_PHYSICAL:
      return "HISTORY_AND_PHYSICAL";
    case ManagedNoteTemplate::GIRPP:
      return "GIRPP";
    case ManagedNoteTemplate::DAP:
      return "DAP";
    case ManagedNoteTemplate::SIRP:
      return "SIRP";
    case ManagedNoteTemplate::BIRP:
      return "BIRP";
    case ManagedNoteTemplate::BEHAVIORAL_SOAP:
      return "BEHAVIORAL_SOAP";
    case ManagedNoteTemplate::PHYSICAL_SOAP:
      return "PHYSICAL_SOAP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedNoteTemplateMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
