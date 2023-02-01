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
  enum class CertificateType
  {
    NOT_SET,
    CERTIFICATE,
    CERTIFICATE_WITH_PRIVATE_KEY
  };

namespace CertificateTypeMapper
{
AWS_TRANSFER_API CertificateType GetCertificateTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCertificateType(CertificateType value);
} // namespace CertificateTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
