/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class TraversalDirection
  {
    NOT_SET,
    PARENT,
    CHILD
  };

namespace TraversalDirectionMapper
{
AWS_IOTSITEWISE_API TraversalDirection GetTraversalDirectionForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForTraversalDirection(TraversalDirection value);
} // namespace TraversalDirectionMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
