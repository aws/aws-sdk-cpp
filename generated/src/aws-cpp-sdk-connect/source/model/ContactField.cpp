/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactFieldMapper {

static const int CUSTOMER_ENDPOINT_HASH = HashingUtils::HashString("CUSTOMER_ENDPOINT");
static const int ADDITIONAL_EMAIL_RECIPIENTS_HASH = HashingUtils::HashString("ADDITIONAL_EMAIL_RECIPIENTS");
static const int EMAIL_SUBJECT_HASH = HashingUtils::HashString("EMAIL_SUBJECT");

ContactField GetContactFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_ENDPOINT_HASH) {
    return ContactField::CUSTOMER_ENDPOINT;
  } else if (hashCode == ADDITIONAL_EMAIL_RECIPIENTS_HASH) {
    return ContactField::ADDITIONAL_EMAIL_RECIPIENTS;
  } else if (hashCode == EMAIL_SUBJECT_HASH) {
    return ContactField::EMAIL_SUBJECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactField>(hashCode);
  }

  return ContactField::NOT_SET;
}

Aws::String GetNameForContactField(ContactField enumValue) {
  switch (enumValue) {
    case ContactField::NOT_SET:
      return {};
    case ContactField::CUSTOMER_ENDPOINT:
      return "CUSTOMER_ENDPOINT";
    case ContactField::ADDITIONAL_EMAIL_RECIPIENTS:
      return "ADDITIONAL_EMAIL_RECIPIENTS";
    case ContactField::EMAIL_SUBJECT:
      return "EMAIL_SUBJECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
