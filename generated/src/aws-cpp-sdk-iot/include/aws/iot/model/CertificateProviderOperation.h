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
  enum class CertificateProviderOperation
  {
    NOT_SET,
    CreateCertificateFromCsr
  };

namespace CertificateProviderOperationMapper
{
AWS_IOT_API CertificateProviderOperation GetCertificateProviderOperationForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCertificateProviderOperation(CertificateProviderOperation value);
} // namespace CertificateProviderOperationMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
