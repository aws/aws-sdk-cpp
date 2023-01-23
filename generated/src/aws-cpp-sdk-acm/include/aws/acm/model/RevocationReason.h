/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class RevocationReason
  {
    NOT_SET,
    UNSPECIFIED,
    KEY_COMPROMISE,
    CA_COMPROMISE,
    AFFILIATION_CHANGED,
    SUPERCEDED,
    CESSATION_OF_OPERATION,
    CERTIFICATE_HOLD,
    REMOVE_FROM_CRL,
    PRIVILEGE_WITHDRAWN,
    A_A_COMPROMISE
  };

namespace RevocationReasonMapper
{
AWS_ACM_API RevocationReason GetRevocationReasonForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRevocationReason(RevocationReason value);
} // namespace RevocationReasonMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
