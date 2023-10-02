/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class CommitmentDuration
  {
    NOT_SET,
    OneMonth,
    SixMonths
  };

namespace CommitmentDurationMapper
{
AWS_BEDROCK_API CommitmentDuration GetCommitmentDurationForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForCommitmentDuration(CommitmentDuration value);
} // namespace CommitmentDurationMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
