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
  enum class M2tsEbifControl
  {
    NOT_SET,
    NONE,
    PASSTHROUGH
  };

namespace M2tsEbifControlMapper
{
AWS_MEDIALIVE_API M2tsEbifControl GetM2tsEbifControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsEbifControl(M2tsEbifControl value);
} // namespace M2tsEbifControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
