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
  enum class FindingsFound
  {
    NOT_SET,
    true_,
    false_,
    unknown
  };

namespace FindingsFoundMapper
{
AWS_EC2_API FindingsFound GetFindingsFoundForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFindingsFound(FindingsFound value);
} // namespace FindingsFoundMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
