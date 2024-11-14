/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class ContainerFormat
  {
    NOT_SET,
    TS,
    FRAGMENTED_MP4
  };

namespace ContainerFormatMapper
{
AWS_IVS_API ContainerFormat GetContainerFormatForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForContainerFormat(ContainerFormat value);
} // namespace ContainerFormatMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
