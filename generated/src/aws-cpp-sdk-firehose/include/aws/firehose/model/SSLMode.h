/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class SSLMode
  {
    NOT_SET,
    Disabled,
    Enabled
  };

namespace SSLModeMapper
{
AWS_FIREHOSE_API SSLMode GetSSLModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSSLMode(SSLMode value);
} // namespace SSLModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
