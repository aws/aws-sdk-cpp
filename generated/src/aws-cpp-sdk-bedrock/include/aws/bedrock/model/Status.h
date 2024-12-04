/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    REGISTERED,
    INCOMPATIBLE_ENDPOINT
  };

namespace StatusMapper
{
AWS_BEDROCK_API Status GetStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
