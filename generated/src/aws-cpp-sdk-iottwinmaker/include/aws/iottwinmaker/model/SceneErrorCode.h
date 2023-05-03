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
  enum class SceneErrorCode
  {
    NOT_SET,
    MATTERPORT_ERROR
  };

namespace SceneErrorCodeMapper
{
AWS_IOTTWINMAKER_API SceneErrorCode GetSceneErrorCodeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForSceneErrorCode(SceneErrorCode value);
} // namespace SceneErrorCodeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
