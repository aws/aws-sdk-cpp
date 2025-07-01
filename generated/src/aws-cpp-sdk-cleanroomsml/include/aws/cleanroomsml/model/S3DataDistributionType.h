/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class S3DataDistributionType
  {
    NOT_SET,
    FullyReplicated,
    ShardedByS3Key
  };

namespace S3DataDistributionTypeMapper
{
AWS_CLEANROOMSML_API S3DataDistributionType GetS3DataDistributionTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForS3DataDistributionType(S3DataDistributionType value);
} // namespace S3DataDistributionTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
