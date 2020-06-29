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
  enum class TemporalFilterPostFilterSharpening
  {
    NOT_SET,
    AUTO,
    DISABLED,
    ENABLED
  };

namespace TemporalFilterPostFilterSharpeningMapper
{
AWS_MEDIALIVE_API TemporalFilterPostFilterSharpening GetTemporalFilterPostFilterSharpeningForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTemporalFilterPostFilterSharpening(TemporalFilterPostFilterSharpening value);
} // namespace TemporalFilterPostFilterSharpeningMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
