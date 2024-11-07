/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class MLInputChannelStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE,
    DELETE_PENDING,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    INACTIVE
  };

namespace MLInputChannelStatusMapper
{
AWS_CLEANROOMSML_API MLInputChannelStatus GetMLInputChannelStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForMLInputChannelStatus(MLInputChannelStatus value);
} // namespace MLInputChannelStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
