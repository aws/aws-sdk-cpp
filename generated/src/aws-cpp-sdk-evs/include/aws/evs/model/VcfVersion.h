/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class VcfVersion
  {
    NOT_SET,
    VCF_5_2_1
  };

namespace VcfVersionMapper
{
AWS_EVS_API VcfVersion GetVcfVersionForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForVcfVersion(VcfVersion value);
} // namespace VcfVersionMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
