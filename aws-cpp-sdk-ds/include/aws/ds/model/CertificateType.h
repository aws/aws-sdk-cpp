/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class CertificateType
  {
    NOT_SET,
    ClientCertAuth,
    ClientLDAPS
  };

namespace CertificateTypeMapper
{
AWS_DIRECTORYSERVICE_API CertificateType GetCertificateTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForCertificateType(CertificateType value);
} // namespace CertificateTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
