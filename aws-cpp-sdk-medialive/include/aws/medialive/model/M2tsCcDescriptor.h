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
  enum class M2tsCcDescriptor
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace M2tsCcDescriptorMapper
{
AWS_MEDIALIVE_API M2tsCcDescriptor GetM2tsCcDescriptorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsCcDescriptor(M2tsCcDescriptor value);
} // namespace M2tsCcDescriptorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
