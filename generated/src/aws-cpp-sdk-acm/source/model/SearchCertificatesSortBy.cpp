/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SearchCertificatesSortBy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace SearchCertificatesSortByMapper {

static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");
static const int NOT_AFTER_HASH = HashingUtils::HashString("NOT_AFTER");
static const int STATUS_HASH = HashingUtils::HashString("STATUS");
static const int RENEWAL_STATUS_HASH = HashingUtils::HashString("RENEWAL_STATUS");
static const int EXPORTED_HASH = HashingUtils::HashString("EXPORTED");
static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
static const int NOT_BEFORE_HASH = HashingUtils::HashString("NOT_BEFORE");
static const int KEY_ALGORITHM_HASH = HashingUtils::HashString("KEY_ALGORITHM");
static const int TYPE_HASH = HashingUtils::HashString("TYPE");
static const int CERTIFICATE_ARN_HASH = HashingUtils::HashString("CERTIFICATE_ARN");
static const int COMMON_NAME_HASH = HashingUtils::HashString("COMMON_NAME");
static const int REVOKED_AT_HASH = HashingUtils::HashString("REVOKED_AT");
static const int RENEWAL_ELIGIBILITY_HASH = HashingUtils::HashString("RENEWAL_ELIGIBILITY");
static const int ISSUED_AT_HASH = HashingUtils::HashString("ISSUED_AT");
static const int MANAGED_BY_HASH = HashingUtils::HashString("MANAGED_BY");
static const int EXPORT_OPTION_HASH = HashingUtils::HashString("EXPORT_OPTION");
static const int VALIDATION_METHOD_HASH = HashingUtils::HashString("VALIDATION_METHOD");
static const int IMPORTED_AT_HASH = HashingUtils::HashString("IMPORTED_AT");

SearchCertificatesSortBy GetSearchCertificatesSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_AT_HASH) {
    return SearchCertificatesSortBy::CREATED_AT;
  } else if (hashCode == NOT_AFTER_HASH) {
    return SearchCertificatesSortBy::NOT_AFTER;
  } else if (hashCode == STATUS_HASH) {
    return SearchCertificatesSortBy::STATUS;
  } else if (hashCode == RENEWAL_STATUS_HASH) {
    return SearchCertificatesSortBy::RENEWAL_STATUS;
  } else if (hashCode == EXPORTED_HASH) {
    return SearchCertificatesSortBy::EXPORTED;
  } else if (hashCode == IN_USE_HASH) {
    return SearchCertificatesSortBy::IN_USE;
  } else if (hashCode == NOT_BEFORE_HASH) {
    return SearchCertificatesSortBy::NOT_BEFORE;
  } else if (hashCode == KEY_ALGORITHM_HASH) {
    return SearchCertificatesSortBy::KEY_ALGORITHM;
  } else if (hashCode == TYPE_HASH) {
    return SearchCertificatesSortBy::TYPE;
  } else if (hashCode == CERTIFICATE_ARN_HASH) {
    return SearchCertificatesSortBy::CERTIFICATE_ARN;
  } else if (hashCode == COMMON_NAME_HASH) {
    return SearchCertificatesSortBy::COMMON_NAME;
  } else if (hashCode == REVOKED_AT_HASH) {
    return SearchCertificatesSortBy::REVOKED_AT;
  } else if (hashCode == RENEWAL_ELIGIBILITY_HASH) {
    return SearchCertificatesSortBy::RENEWAL_ELIGIBILITY;
  } else if (hashCode == ISSUED_AT_HASH) {
    return SearchCertificatesSortBy::ISSUED_AT;
  } else if (hashCode == MANAGED_BY_HASH) {
    return SearchCertificatesSortBy::MANAGED_BY;
  } else if (hashCode == EXPORT_OPTION_HASH) {
    return SearchCertificatesSortBy::EXPORT_OPTION;
  } else if (hashCode == VALIDATION_METHOD_HASH) {
    return SearchCertificatesSortBy::VALIDATION_METHOD;
  } else if (hashCode == IMPORTED_AT_HASH) {
    return SearchCertificatesSortBy::IMPORTED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchCertificatesSortBy>(hashCode);
  }

  return SearchCertificatesSortBy::NOT_SET;
}

Aws::String GetNameForSearchCertificatesSortBy(SearchCertificatesSortBy enumValue) {
  switch (enumValue) {
    case SearchCertificatesSortBy::NOT_SET:
      return {};
    case SearchCertificatesSortBy::CREATED_AT:
      return "CREATED_AT";
    case SearchCertificatesSortBy::NOT_AFTER:
      return "NOT_AFTER";
    case SearchCertificatesSortBy::STATUS:
      return "STATUS";
    case SearchCertificatesSortBy::RENEWAL_STATUS:
      return "RENEWAL_STATUS";
    case SearchCertificatesSortBy::EXPORTED:
      return "EXPORTED";
    case SearchCertificatesSortBy::IN_USE:
      return "IN_USE";
    case SearchCertificatesSortBy::NOT_BEFORE:
      return "NOT_BEFORE";
    case SearchCertificatesSortBy::KEY_ALGORITHM:
      return "KEY_ALGORITHM";
    case SearchCertificatesSortBy::TYPE:
      return "TYPE";
    case SearchCertificatesSortBy::CERTIFICATE_ARN:
      return "CERTIFICATE_ARN";
    case SearchCertificatesSortBy::COMMON_NAME:
      return "COMMON_NAME";
    case SearchCertificatesSortBy::REVOKED_AT:
      return "REVOKED_AT";
    case SearchCertificatesSortBy::RENEWAL_ELIGIBILITY:
      return "RENEWAL_ELIGIBILITY";
    case SearchCertificatesSortBy::ISSUED_AT:
      return "ISSUED_AT";
    case SearchCertificatesSortBy::MANAGED_BY:
      return "MANAGED_BY";
    case SearchCertificatesSortBy::EXPORT_OPTION:
      return "EXPORT_OPTION";
    case SearchCertificatesSortBy::VALIDATION_METHOD:
      return "VALIDATION_METHOD";
    case SearchCertificatesSortBy::IMPORTED_AT:
      return "IMPORTED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchCertificatesSortByMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
