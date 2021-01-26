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
  enum class M2tsKlv
  {
    NOT_SET,
    NONE,
    PASSTHROUGH
  };

namespace M2tsKlvMapper
{
AWS_MEDIALIVE_API M2tsKlv GetM2tsKlvForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsKlv(M2tsKlv value);
} // namespace M2tsKlvMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
