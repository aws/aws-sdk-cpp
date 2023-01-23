/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class CertificateStatusType
  {
    NOT_SET,
    ACTIVE,
    PENDING_ROTATION,
    INACTIVE
  };

namespace CertificateStatusTypeMapper
{
AWS_TRANSFER_API CertificateStatusType GetCertificateStatusTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCertificateStatusType(CertificateStatusType value);
} // namespace CertificateStatusTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
