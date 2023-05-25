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
  enum class GroupType
  {
    NOT_SET,
    TABULAR
  };

namespace GroupTypeMapper
{
AWS_IOTTWINMAKER_API GroupType GetGroupTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForGroupType(GroupType value);
} // namespace GroupTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
