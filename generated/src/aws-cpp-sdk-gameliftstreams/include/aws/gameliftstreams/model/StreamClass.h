/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class StreamClass
  {
    NOT_SET,
    gen4n_high,
    gen4n_ultra,
    gen4n_win2022,
    gen5n_high,
    gen5n_ultra,
    gen5n_win2022
  };

namespace StreamClassMapper
{
AWS_GAMELIFTSTREAMS_API StreamClass GetStreamClassForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamClass(StreamClass value);
} // namespace StreamClassMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
