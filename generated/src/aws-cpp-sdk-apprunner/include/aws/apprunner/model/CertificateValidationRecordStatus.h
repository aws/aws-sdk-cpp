/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class CertificateValidationRecordStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    SUCCESS,
    FAILED
  };

namespace CertificateValidationRecordStatusMapper
{
AWS_APPRUNNER_API CertificateValidationRecordStatus GetCertificateValidationRecordStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForCertificateValidationRecordStatus(CertificateValidationRecordStatus value);
} // namespace CertificateValidationRecordStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
