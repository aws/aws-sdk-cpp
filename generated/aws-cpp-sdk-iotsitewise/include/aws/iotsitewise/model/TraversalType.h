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
  enum class TraversalType
  {
    NOT_SET,
    PATH_TO_ROOT
  };

namespace TraversalTypeMapper
{
AWS_IOTSITEWISE_API TraversalType GetTraversalTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForTraversalType(TraversalType value);
} // namespace TraversalTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
