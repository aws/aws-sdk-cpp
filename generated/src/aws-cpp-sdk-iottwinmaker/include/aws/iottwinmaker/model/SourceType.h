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
  enum class SourceType
  {
    NOT_SET,
    s3,
    iotsitewise,
    iottwinmaker
  };

namespace SourceTypeMapper
{
AWS_IOTTWINMAKER_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
