/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Order
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace OrderMapper
{
AWS_MEDIACONVERT_API Order GetOrderForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
