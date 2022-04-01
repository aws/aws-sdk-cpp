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
  enum class CertificateUsageType
  {
    NOT_SET,
    SIGNING,
    ENCRYPTION
  };

namespace CertificateUsageTypeMapper
{
AWS_TRANSFER_API CertificateUsageType GetCertificateUsageTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCertificateUsageType(CertificateUsageType value);
} // namespace CertificateUsageTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
