/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class GroupBy
  {
    NOT_SET,
    resourcesAffected_s3Bucket_name,
    type,
    classificationDetails_jobId,
    severity_description
  };

namespace GroupByMapper
{
AWS_MACIE2_API GroupBy GetGroupByForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForGroupBy(GroupBy value);
} // namespace GroupByMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
