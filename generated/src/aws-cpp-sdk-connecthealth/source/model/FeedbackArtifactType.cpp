/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/FeedbackArtifactType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace FeedbackArtifactTypeMapper {

static const int CLINICAL_DOC_HASH = HashingUtils::HashString("CLINICAL_DOC");
static const int MEDICAL_CODES_HASH = HashingUtils::HashString("MEDICAL_CODES");

FeedbackArtifactType GetFeedbackArtifactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLINICAL_DOC_HASH) {
    return FeedbackArtifactType::CLINICAL_DOC;
  } else if (hashCode == MEDICAL_CODES_HASH) {
    return FeedbackArtifactType::MEDICAL_CODES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedbackArtifactType>(hashCode);
  }

  return FeedbackArtifactType::NOT_SET;
}

Aws::String GetNameForFeedbackArtifactType(FeedbackArtifactType enumValue) {
  switch (enumValue) {
    case FeedbackArtifactType::NOT_SET:
      return {};
    case FeedbackArtifactType::CLINICAL_DOC:
      return "CLINICAL_DOC";
    case FeedbackArtifactType::MEDICAL_CODES:
      return "MEDICAL_CODES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedbackArtifactTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
