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
  enum class State
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    ACTIVE,
    ERROR_
  };

namespace StateMapper
{
AWS_IOTTWINMAKER_API State GetStateForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
