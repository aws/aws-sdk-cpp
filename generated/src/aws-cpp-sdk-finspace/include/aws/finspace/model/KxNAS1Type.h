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
  enum class KxNAS1Type
  {
    NOT_SET,
    SSD_1000,
    SSD_250,
    HDD_12
  };

namespace KxNAS1TypeMapper
{
AWS_FINSPACE_API KxNAS1Type GetKxNAS1TypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxNAS1Type(KxNAS1Type value);
} // namespace KxNAS1TypeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
