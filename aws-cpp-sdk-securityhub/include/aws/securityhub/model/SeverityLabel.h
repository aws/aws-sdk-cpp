/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class SeverityLabel
  {
    NOT_SET,
    INFORMATIONAL,
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
  };

namespace SeverityLabelMapper
{
AWS_SECURITYHUB_API SeverityLabel GetSeverityLabelForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSeverityLabel(SeverityLabel value);
} // namespace SeverityLabelMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
