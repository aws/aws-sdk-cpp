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
  enum class Type
  {
    NOT_SET,
    RELATIONSHIP,
    STRING,
    LONG,
    BOOLEAN,
    INTEGER,
    DOUBLE,
    LIST,
    MAP
  };

namespace TypeMapper
{
AWS_IOTTWINMAKER_API Type GetTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
