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
  enum class TargetResourceType
  {
    NOT_SET,
    ASSET
  };

namespace TargetResourceTypeMapper
{
AWS_IOTSITEWISE_API TargetResourceType GetTargetResourceTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForTargetResourceType(TargetResourceType value);
} // namespace TargetResourceTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
