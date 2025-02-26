/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class ListResponseScope
  {
    NOT_SET,
    METADATA_ONLY
  };

namespace ListResponseScopeMapper
{
AWS_IOTFLEETWISE_API ListResponseScope GetListResponseScopeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForListResponseScope(ListResponseScope value);
} // namespace ListResponseScopeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
