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
  enum class InputClass
  {
    NOT_SET,
    STANDARD,
    SINGLE_PIPELINE
  };

namespace InputClassMapper
{
AWS_MEDIALIVE_API InputClass GetInputClassForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputClass(InputClass value);
} // namespace InputClassMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
