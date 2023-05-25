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
  enum class AuditReportResponseFormat
  {
    NOT_SET,
    JSON,
    CSV
  };

namespace AuditReportResponseFormatMapper
{
AWS_ACMPCA_API AuditReportResponseFormat GetAuditReportResponseFormatForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForAuditReportResponseFormat(AuditReportResponseFormat value);
} // namespace AuditReportResponseFormatMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
