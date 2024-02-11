/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxClusterType
  {
    NOT_SET,
    HDB,
    RDB,
    GATEWAY,
    GP,
    TICKERPLANT
  };

namespace KxClusterTypeMapper
{
AWS_FINSPACE_API KxClusterType GetKxClusterTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxClusterType(KxClusterType value);
} // namespace KxClusterTypeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
