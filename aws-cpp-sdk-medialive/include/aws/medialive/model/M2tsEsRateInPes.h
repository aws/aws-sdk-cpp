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
  enum class M2tsEsRateInPes
  {
    NOT_SET,
    EXCLUDE,
    INCLUDE
  };

namespace M2tsEsRateInPesMapper
{
AWS_MEDIALIVE_API M2tsEsRateInPes GetM2tsEsRateInPesForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsEsRateInPes(M2tsEsRateInPes value);
} // namespace M2tsEsRateInPesMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
