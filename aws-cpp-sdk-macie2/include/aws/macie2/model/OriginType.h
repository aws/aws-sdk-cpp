/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class OriginType
  {
    NOT_SET,
    SENSITIVE_DATA_DISCOVERY_JOB,
    AUTOMATED_SENSITIVE_DATA_DISCOVERY
  };

namespace OriginTypeMapper
{
AWS_MACIE2_API OriginType GetOriginTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForOriginType(OriginType value);
} // namespace OriginTypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
