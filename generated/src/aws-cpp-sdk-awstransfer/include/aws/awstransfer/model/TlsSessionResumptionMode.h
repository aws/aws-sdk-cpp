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
  enum class TlsSessionResumptionMode
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    ENFORCED
  };

namespace TlsSessionResumptionModeMapper
{
AWS_TRANSFER_API TlsSessionResumptionMode GetTlsSessionResumptionModeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForTlsSessionResumptionMode(TlsSessionResumptionMode value);
} // namespace TlsSessionResumptionModeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
