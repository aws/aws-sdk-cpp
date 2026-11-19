/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ReferenceTypeMapper {

static const int URL_HASH = HashingUtils::HashString("URL");
static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");
static const int CONTACT_ANALYSIS_HASH = HashingUtils::HashString("CONTACT_ANALYSIS");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int DATE_HASH = HashingUtils::HashString("DATE");
static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int EMAIL_MESSAGE_HASH = HashingUtils::HashString("EMAIL_MESSAGE");
static const int EMAIL_MESSAGE_PLAIN_TEXT_HASH = HashingUtils::HashString("EMAIL_MESSAGE_PLAIN_TEXT");
static const int EMAIL_MESSAGE_PLAIN_TEXT_REDACTED_HASH = HashingUtils::HashString("EMAIL_MESSAGE_PLAIN_TEXT_REDACTED");
static const int EMAIL_MESSAGE_REDACTED_HASH = HashingUtils::HashString("EMAIL_MESSAGE_REDACTED");
static const int VOICEMAIL_RECORDING_HASH = HashingUtils::HashString("VOICEMAIL_RECORDING");
static const int VOICEMAIL_RECORDING_REDACTED_HASH = HashingUtils::HashString("VOICEMAIL_RECORDING_REDACTED");
static const int VOICEMAIL_ANALYSIS_HASH = HashingUtils::HashString("VOICEMAIL_ANALYSIS");
static const int VOICEMAIL_ANALYSIS_REDACTED_HASH = HashingUtils::HashString("VOICEMAIL_ANALYSIS_REDACTED");

ReferenceType GetReferenceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == URL_HASH) {
    return ReferenceType::URL;
  } else if (hashCode == ATTACHMENT_HASH) {
    return ReferenceType::ATTACHMENT;
  } else if (hashCode == CONTACT_ANALYSIS_HASH) {
    return ReferenceType::CONTACT_ANALYSIS;
  } else if (hashCode == NUMBER_HASH) {
    return ReferenceType::NUMBER;
  } else if (hashCode == STRING_HASH) {
    return ReferenceType::STRING;
  } else if (hashCode == DATE_HASH) {
    return ReferenceType::DATE;
  } else if (hashCode == EMAIL_HASH) {
    return ReferenceType::EMAIL;
  } else if (hashCode == EMAIL_MESSAGE_HASH) {
    return ReferenceType::EMAIL_MESSAGE;
  } else if (hashCode == EMAIL_MESSAGE_PLAIN_TEXT_HASH) {
    return ReferenceType::EMAIL_MESSAGE_PLAIN_TEXT;
  } else if (hashCode == EMAIL_MESSAGE_PLAIN_TEXT_REDACTED_HASH) {
    return ReferenceType::EMAIL_MESSAGE_PLAIN_TEXT_REDACTED;
  } else if (hashCode == EMAIL_MESSAGE_REDACTED_HASH) {
    return ReferenceType::EMAIL_MESSAGE_REDACTED;
  } else if (hashCode == VOICEMAIL_RECORDING_HASH) {
    return ReferenceType::VOICEMAIL_RECORDING;
  } else if (hashCode == VOICEMAIL_RECORDING_REDACTED_HASH) {
    return ReferenceType::VOICEMAIL_RECORDING_REDACTED;
  } else if (hashCode == VOICEMAIL_ANALYSIS_HASH) {
    return ReferenceType::VOICEMAIL_ANALYSIS;
  } else if (hashCode == VOICEMAIL_ANALYSIS_REDACTED_HASH) {
    return ReferenceType::VOICEMAIL_ANALYSIS_REDACTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReferenceType>(hashCode);
  }

  return ReferenceType::NOT_SET;
}

Aws::String GetNameForReferenceType(ReferenceType enumValue) {
  switch (enumValue) {
    case ReferenceType::NOT_SET:
      return {};
    case ReferenceType::URL:
      return "URL";
    case ReferenceType::ATTACHMENT:
      return "ATTACHMENT";
    case ReferenceType::CONTACT_ANALYSIS:
      return "CONTACT_ANALYSIS";
    case ReferenceType::NUMBER:
      return "NUMBER";
    case ReferenceType::STRING:
      return "STRING";
    case ReferenceType::DATE:
      return "DATE";
    case ReferenceType::EMAIL:
      return "EMAIL";
    case ReferenceType::EMAIL_MESSAGE:
      return "EMAIL_MESSAGE";
    case ReferenceType::EMAIL_MESSAGE_PLAIN_TEXT:
      return "EMAIL_MESSAGE_PLAIN_TEXT";
    case ReferenceType::EMAIL_MESSAGE_PLAIN_TEXT_REDACTED:
      return "EMAIL_MESSAGE_PLAIN_TEXT_REDACTED";
    case ReferenceType::EMAIL_MESSAGE_REDACTED:
      return "EMAIL_MESSAGE_REDACTED";
    case ReferenceType::VOICEMAIL_RECORDING:
      return "VOICEMAIL_RECORDING";
    case ReferenceType::VOICEMAIL_RECORDING_REDACTED:
      return "VOICEMAIL_RECORDING_REDACTED";
    case ReferenceType::VOICEMAIL_ANALYSIS:
      return "VOICEMAIL_ANALYSIS";
    case ReferenceType::VOICEMAIL_ANALYSIS_REDACTED:
      return "VOICEMAIL_ANALYSIS_REDACTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReferenceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
