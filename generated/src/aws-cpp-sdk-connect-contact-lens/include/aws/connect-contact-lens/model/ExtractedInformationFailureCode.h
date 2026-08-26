/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectContactLens {
namespace Model {
enum class ExtractedInformationFailureCode {
  NOT_SET,
  QUOTA_EXCEEDED,
  INSUFFICIENT_CONVERSATION_CONTENT,
  FAILED_SAFETY_GUIDELINES,
  INTERNAL_ERROR,
  MAX_PACKAGE_FEATURE_ONLY
};

namespace ExtractedInformationFailureCodeMapper {
AWS_CONNECTCONTACTLENS_API ExtractedInformationFailureCode GetExtractedInformationFailureCodeForName(const Aws::String& name);

AWS_CONNECTCONTACTLENS_API Aws::String GetNameForExtractedInformationFailureCode(ExtractedInformationFailureCode value);
}  // namespace ExtractedInformationFailureCodeMapper
}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws
