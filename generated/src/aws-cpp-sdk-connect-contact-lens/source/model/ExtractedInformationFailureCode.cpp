/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/ExtractedInformationFailureCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectContactLens {
namespace Model {
namespace ExtractedInformationFailureCodeMapper {

static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
static const int INSUFFICIENT_CONVERSATION_CONTENT_HASH = HashingUtils::HashString("INSUFFICIENT_CONVERSATION_CONTENT");
static const int FAILED_SAFETY_GUIDELINES_HASH = HashingUtils::HashString("FAILED_SAFETY_GUIDELINES");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int MAX_PACKAGE_FEATURE_ONLY_HASH = HashingUtils::HashString("MAX_PACKAGE_FEATURE_ONLY");

ExtractedInformationFailureCode GetExtractedInformationFailureCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUOTA_EXCEEDED_HASH) {
    return ExtractedInformationFailureCode::QUOTA_EXCEEDED;
  } else if (hashCode == INSUFFICIENT_CONVERSATION_CONTENT_HASH) {
    return ExtractedInformationFailureCode::INSUFFICIENT_CONVERSATION_CONTENT;
  } else if (hashCode == FAILED_SAFETY_GUIDELINES_HASH) {
    return ExtractedInformationFailureCode::FAILED_SAFETY_GUIDELINES;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ExtractedInformationFailureCode::INTERNAL_ERROR;
  } else if (hashCode == MAX_PACKAGE_FEATURE_ONLY_HASH) {
    return ExtractedInformationFailureCode::MAX_PACKAGE_FEATURE_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtractedInformationFailureCode>(hashCode);
  }

  return ExtractedInformationFailureCode::NOT_SET;
}

Aws::String GetNameForExtractedInformationFailureCode(ExtractedInformationFailureCode enumValue) {
  switch (enumValue) {
    case ExtractedInformationFailureCode::NOT_SET:
      return {};
    case ExtractedInformationFailureCode::QUOTA_EXCEEDED:
      return "QUOTA_EXCEEDED";
    case ExtractedInformationFailureCode::INSUFFICIENT_CONVERSATION_CONTENT:
      return "INSUFFICIENT_CONVERSATION_CONTENT";
    case ExtractedInformationFailureCode::FAILED_SAFETY_GUIDELINES:
      return "FAILED_SAFETY_GUIDELINES";
    case ExtractedInformationFailureCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case ExtractedInformationFailureCode::MAX_PACKAGE_FEATURE_ONLY:
      return "MAX_PACKAGE_FEATURE_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtractedInformationFailureCodeMapper
}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws
