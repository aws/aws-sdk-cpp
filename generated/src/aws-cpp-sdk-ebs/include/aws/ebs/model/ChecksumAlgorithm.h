/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class ChecksumAlgorithm
  {
    NOT_SET,
    SHA256
  };

namespace ChecksumAlgorithmMapper
{
AWS_EBS_API ChecksumAlgorithm GetChecksumAlgorithmForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForChecksumAlgorithm(ChecksumAlgorithm value);
} // namespace ChecksumAlgorithmMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
