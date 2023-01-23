/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
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
AWS_IOTTWINMAKER_API Order GetOrderForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
