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
  enum class H265AlternativeTransferFunction
  {
    NOT_SET,
    INSERT,
    OMIT
  };

namespace H265AlternativeTransferFunctionMapper
{
AWS_MEDIALIVE_API H265AlternativeTransferFunction GetH265AlternativeTransferFunctionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265AlternativeTransferFunction(H265AlternativeTransferFunction value);
} // namespace H265AlternativeTransferFunctionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
