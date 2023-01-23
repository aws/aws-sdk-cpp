/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class RevocationReason
  {
    NOT_SET,
    UNSPECIFIED,
    KEY_COMPROMISE,
    CERTIFICATE_AUTHORITY_COMPROMISE,
    AFFILIATION_CHANGED,
    SUPERSEDED,
    CESSATION_OF_OPERATION,
    PRIVILEGE_WITHDRAWN,
    A_A_COMPROMISE
  };

namespace RevocationReasonMapper
{
AWS_ACMPCA_API RevocationReason GetRevocationReasonForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForRevocationReason(RevocationReason value);
} // namespace RevocationReasonMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
