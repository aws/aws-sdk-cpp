/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputLossImageType
  {
    NOT_SET,
    COLOR,
    SLATE
  };

namespace InputLossImageTypeMapper
{
AWS_MEDIALIVE_API InputLossImageType GetInputLossImageTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputLossImageType(InputLossImageType value);
} // namespace InputLossImageTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
