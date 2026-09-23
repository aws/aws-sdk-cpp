/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeLanguageCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace MedicalScribeLanguageCodeMapper {

static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int multi_HASH = HashingUtils::HashString("multi");

MedicalScribeLanguageCode GetMedicalScribeLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == en_US_HASH) {
    return MedicalScribeLanguageCode::en_US;
  } else if (hashCode == multi_HASH) {
    return MedicalScribeLanguageCode::multi;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MedicalScribeLanguageCode>(hashCode);
  }

  return MedicalScribeLanguageCode::NOT_SET;
}

Aws::String GetNameForMedicalScribeLanguageCode(MedicalScribeLanguageCode enumValue) {
  switch (enumValue) {
    case MedicalScribeLanguageCode::NOT_SET:
      return {};
    case MedicalScribeLanguageCode::en_US:
      return "en-US";
    case MedicalScribeLanguageCode::multi:
      return "multi";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MedicalScribeLanguageCodeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
