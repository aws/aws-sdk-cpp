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
  enum class CertificateExport
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CertificateExportMapper
{
AWS_ACM_API CertificateExport GetCertificateExportForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateExport(CertificateExport value);
} // namespace CertificateExportMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
