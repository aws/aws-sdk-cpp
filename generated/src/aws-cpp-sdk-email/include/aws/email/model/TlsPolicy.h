/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class TlsPolicy
  {
    NOT_SET,
    Require,
    Optional
  };

namespace TlsPolicyMapper
{
AWS_SES_API TlsPolicy GetTlsPolicyForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForTlsPolicy(TlsPolicy value);
} // namespace TlsPolicyMapper
} // namespace Model
} // namespace SES
} // namespace Aws
