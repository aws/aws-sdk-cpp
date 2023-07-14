/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class Order
  {
    NOT_SET,
    DESCENDING,
    ASCENDING
  };

namespace OrderMapper
{
AWS_GLUEDATABREW_API Order GetOrderForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
