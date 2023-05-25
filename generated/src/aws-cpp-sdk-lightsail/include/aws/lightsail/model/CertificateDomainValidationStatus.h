/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class CertificateDomainValidationStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    FAILED,
    SUCCESS
  };

namespace CertificateDomainValidationStatusMapper
{
AWS_LIGHTSAIL_API CertificateDomainValidationStatus GetCertificateDomainValidationStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForCertificateDomainValidationStatus(CertificateDomainValidationStatus value);
} // namespace CertificateDomainValidationStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
