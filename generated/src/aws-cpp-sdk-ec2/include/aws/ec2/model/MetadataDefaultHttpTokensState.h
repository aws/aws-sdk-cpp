/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class MetadataDefaultHttpTokensState
  {
    NOT_SET,
    optional,
    required,
    no_preference
  };

namespace MetadataDefaultHttpTokensStateMapper
{
AWS_EC2_API MetadataDefaultHttpTokensState GetMetadataDefaultHttpTokensStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMetadataDefaultHttpTokensState(MetadataDefaultHttpTokensState value);
} // namespace MetadataDefaultHttpTokensStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
