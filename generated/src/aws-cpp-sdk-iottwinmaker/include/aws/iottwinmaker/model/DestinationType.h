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
  enum class DestinationType
  {
    NOT_SET,
    s3,
    iotsitewise,
    iottwinmaker
  };

namespace DestinationTypeMapper
{
AWS_IOTTWINMAKER_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
