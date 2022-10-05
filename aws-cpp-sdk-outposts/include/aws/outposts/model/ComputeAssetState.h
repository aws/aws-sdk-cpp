/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class ComputeAssetState
  {
    NOT_SET,
    ACTIVE,
    ISOLATED,
    RETIRING
  };

namespace ComputeAssetStateMapper
{
AWS_OUTPOSTS_API ComputeAssetState GetComputeAssetStateForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForComputeAssetState(ComputeAssetState value);
} // namespace ComputeAssetStateMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
