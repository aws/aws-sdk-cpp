/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class CertificateStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    REVOKED,
    PENDING_TRANSFER,
    REGISTER_INACTIVE,
    PENDING_ACTIVATION
  };

namespace CertificateStatusMapper
{
AWS_IOT_API CertificateStatus GetCertificateStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCertificateStatus(CertificateStatus value);
} // namespace CertificateStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
