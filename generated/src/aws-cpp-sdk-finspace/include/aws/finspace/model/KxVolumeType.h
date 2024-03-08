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
  enum class KxVolumeType
  {
    NOT_SET,
    NAS_1
  };

namespace KxVolumeTypeMapper
{
AWS_FINSPACE_API KxVolumeType GetKxVolumeTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxVolumeType(KxVolumeType value);
} // namespace KxVolumeTypeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
