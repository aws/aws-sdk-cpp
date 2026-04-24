/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class SearchCertificatesSortBy {
  NOT_SET,
  CREATED_AT,
  NOT_AFTER,
  STATUS,
  RENEWAL_STATUS,
  EXPORTED,
  IN_USE,
  NOT_BEFORE,
  KEY_ALGORITHM,
  TYPE,
  CERTIFICATE_ARN,
  COMMON_NAME,
  REVOKED_AT,
  RENEWAL_ELIGIBILITY,
  ISSUED_AT,
  MANAGED_BY,
  EXPORT_OPTION,
  VALIDATION_METHOD,
  IMPORTED_AT
};

namespace SearchCertificatesSortByMapper {
AWS_ACM_API SearchCertificatesSortBy GetSearchCertificatesSortByForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForSearchCertificatesSortBy(SearchCertificatesSortBy value);
}  // namespace SearchCertificatesSortByMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
