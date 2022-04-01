/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class BodyPart
  {
    NOT_SET,
    FACE,
    HEAD,
    LEFT_HAND,
    RIGHT_HAND
  };

namespace BodyPartMapper
{
AWS_REKOGNITION_API BodyPart GetBodyPartForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForBodyPart(BodyPart value);
} // namespace BodyPartMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
