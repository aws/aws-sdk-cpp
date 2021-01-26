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
  enum class M2tsArib
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace M2tsAribMapper
{
AWS_MEDIALIVE_API M2tsArib GetM2tsAribForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsArib(M2tsArib value);
} // namespace M2tsAribMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
