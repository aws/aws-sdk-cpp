/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class S3AclOption
  {
    NOT_SET,
    BUCKET_OWNER_FULL_CONTROL
  };

namespace S3AclOptionMapper
{
AWS_ATHENA_API S3AclOption GetS3AclOptionForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForS3AclOption(S3AclOption value);
} // namespace S3AclOptionMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
