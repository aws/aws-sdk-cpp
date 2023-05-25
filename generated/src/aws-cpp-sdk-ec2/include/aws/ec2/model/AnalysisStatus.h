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
  enum class AnalysisStatus
  {
    NOT_SET,
    running,
    succeeded,
    failed
  };

namespace AnalysisStatusMapper
{
AWS_EC2_API AnalysisStatus GetAnalysisStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAnalysisStatus(AnalysisStatus value);
} // namespace AnalysisStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
